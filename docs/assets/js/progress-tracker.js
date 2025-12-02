(function (global) {
  function initModuleProgressTracker(options) {
    if (!options) return;

    var storageKey = options.storageKey || ('module_progress_' + (location.pathname || 'default'));
    var itemSelector = options.itemSelector || '.exercise-item';
    var linkSelector = options.linkSelector || 'a';
    var progressTextSelector = options.progressTextSelector;
    var progressBarSelector = options.progressBarSelector;
    var resetButtonSelector = options.resetButtonSelector;

    var items = Array.prototype.slice.call(document.querySelectorAll(itemSelector));
    if (!items.length) return;

    var total = items.length;
    var viewed = new Set();

    var progressText = progressTextSelector
      ? document.querySelector(progressTextSelector)
      : null;
    var progressBar = progressBarSelector
      ? document.querySelector(progressBarSelector)
      : null;
    var resetBtn = resetButtonSelector
      ? document.querySelector(resetButtonSelector)
      : null;

    // Load saved progress from localStorage
    try {
      var saved = JSON.parse(localStorage.getItem(storageKey));
      if (Array.isArray(saved)) {
        viewed = new Set(saved);
      }
    } catch (e) {
      // localStorage may be disabled; ignore
    }

    function persist() {
      try {
        localStorage.setItem(storageKey, JSON.stringify(Array.from(viewed)));
      } catch (e) {
        // ignore if unavailable
      }
    }

    function updateUI() {
      var count = viewed.size;
      var pct = total ? (count / total) * 100 : 0;

      if (progressText) {
        progressText.innerHTML =
          '<i class="fa-solid fa-circle-dot"></i>' +
          ' You\'ve viewed ' + count + '/' + total + ' solutions';
      }

      if (progressBar) {
        progressBar.style.width = pct + '%';
        progressBar.setAttribute('aria-valuenow', String(count));
      }

      items.forEach(function (item) {
        var link = item.querySelector(linkSelector);
        if (!link) return;
        var id = link.getAttribute('href') || '';
        if (viewed.has(id)) {
          item.classList.add('is-viewed');
        } else {
          item.classList.remove('is-viewed');
        }
      });

      if (resetBtn) {
        resetBtn.style.visibility = viewed.size ? 'visible' : 'hidden';
      }
    }

    // Attach click handlers to mark items as viewed
    items.forEach(function (item) {
      var link = item.querySelector(linkSelector);
      if (!link) return;

      var id = link.getAttribute('href') || '';

      link.addEventListener('click', function () {
        if (!id) return;
        viewed.add(id);
        persist();
        updateUI();
      });
    });

    // Reset button handler
    if (resetBtn) {
      resetBtn.addEventListener('click', function () {
        if (!viewed.size) return;
        if (!confirm('Reset your progress for this module?')) return;
        viewed.clear();
        persist();
        updateUI();
      });
    }

    // Initial render
    updateUI();
  }

  // Expose globally
  global.initModuleProgressTracker = initModuleProgressTracker;
})(window);
