// assets/js/course-progress.js
(function (global) {
  // 🔧 Configure your modules here
  // total = total number of solutions/exercises you are tracking
  var MODULE_CONFIG = {
    1: {
      name: 'Introduction to C & Setup',
      storageKey: 'c_course_module1_io',
      total: 10
    },
    2: {
      name: 'Variables, Data Types & Operators',
      storageKey: 'c_course_module2_all',
      total: 63
    },
    3: {
        name: 'Control Statements in C',
        storageKey: 'c_course_module3_all',
        total: 63
    },
    4: {
        name: 'Arrays & Strings in C',
        storageKey: 'c_course_module4_all',
        total: 51 // or whatever your exact total is
    },
    5: {
        name: 'Functions & Recursion in C',
        storageKey: 'c_course_module5_all',
        total: 53 // 10 + 10 + 10 + 10 + 10 + 3
    },
    6: {
        name: 'Pointers & Memory Basics in C',
        storageKey: 'c_course_module6_all',
        total: 53
    },
    7: {
        name: 'Structs, Unions & File I/O',
        storageKey: 'c_course_module7_all',
        total: 55
    },
    // 👉 Add more modules later, e.g.
    // 3: { name: 'Control Statements', storageKey: 'c_course_module3_all', total: 40 }
  };

  function safeParse(json) {
    try {
      var data = JSON.parse(json);
      return Array.isArray(data) ? data : [];
    } catch (e) {
      return [];
    }
  }

  function initCourseProgress() {
    if (typeof global.localStorage === 'undefined') {
      return;
    }

    var totalViewedAll = 0;
    var totalExercisesAll = 0;

    // 1️⃣ Per-module UI (inside each module card on index)
    var moduleContainers = document.querySelectorAll('[data-module-progress]');
    moduleContainers.forEach(function (container) {
      var id = container.getAttribute('data-module-progress');
      var config = MODULE_CONFIG[id];
      if (!config) return;

      var viewedList = safeParse(localStorage.getItem(config.storageKey));
      var viewedCount = viewedList.length;
      var total = config.total || 0;
      var percentage = total ? Math.min(100, (viewedCount / total) * 100) : 0;

      totalViewedAll += viewedCount;
      totalExercisesAll += total;

      var textEl = container.querySelector('.module-progress-text');
      var barFillEl = container.querySelector('.module-progress-bar-fill');

      if (textEl) {
        textEl.textContent = viewedCount + '/' + total + ' done';
      }
      if (barFillEl) {
        barFillEl.style.width = percentage + '%';
      }
    });

    // 2️⃣ Global course summary widget (top/hero area)
    var summaryTextEl = document.getElementById('courseProgressSummaryText');
    var summaryBarFillEl = document.getElementById('courseProgressBarFill');

    if (summaryTextEl && totalExercisesAll > 0) {
      var overallPct = Math.round((totalViewedAll / totalExercisesAll) * 100);
      summaryTextEl.textContent =
        "You've viewed " +
        totalViewedAll +
        '/' +
        totalExercisesAll +
        ' solutions (' +
        overallPct +
        '% of these modules).';
    }

    if (summaryBarFillEl && totalExercisesAll > 0) {
      summaryBarFillEl.style.width =
        Math.min(100, (totalViewedAll / totalExercisesAll) * 100) + '%';
    }
  }

  global.initCourseProgress = initCourseProgress;
})(window);
