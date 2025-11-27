// =========================
// UNIVERSAL MODULE JS
// Works for all modules if:
// - Search input has id="exerciseSearch" (optional)
// - Exercises have class="exercise-item"
// - Quick nav links have class="nav-link" inside .quick-nav
// =========================

// ---------- SEARCH ----------
(function () {
  const searchInput = document.getElementById('exerciseSearch');
  const exerciseItems = document.querySelectorAll('.exercise-item');

  if (!searchInput || exerciseItems.length === 0) return;

  searchInput.addEventListener('input', function () {
    const query = this.value.toLowerCase().trim();

    exerciseItems.forEach(item => {
      const text = item.innerText.toLowerCase();
      // Use flex by default as your layout is flex-based
      item.style.display = (!query || text.includes(query)) ? 'flex' : 'none';
    });
  });
})();

// ---------- QUICK NAV + ACTIVE HIGHLIGHT ----------
(function () {
  const navLinks = document.querySelectorAll('.quick-nav .nav-link');
  if (navLinks.length === 0) return;

  // Build sections list from nav hrefs (like #intro-arrays)
  const sections = Array.from(navLinks)
    .map(link => {
      const href = link.getAttribute('href');
      if (!href || !href.startsWith('#')) return null;
      const target = document.querySelector(href);
      return target || null;
    })
    .filter(Boolean);

  if (sections.length === 0) return;

  // Smooth scroll for nav links
  navLinks.forEach(link => {
    link.addEventListener('click', function (e) {
      const href = this.getAttribute('href');
      if (!href || !href.startsWith('#')) return;

      const target = document.querySelector(href);
      if (!target) return;

      e.preventDefault();
      const offset = 80; // header height offset
      const top = target.getBoundingClientRect().top + window.scrollY - offset;

      window.scrollTo({
        top,
        behavior: 'smooth'
      });
    });
  });

  // Scroll spy: highlight active section
  function updateActiveNav() {
    const scrollPos = window.scrollY + 140; // adjust for fixed header
    let currentId = null;

    sections.forEach(sec => {
      if (sec.offsetTop <= scrollPos) {
        currentId = sec.id;
      }
    });

    if (!currentId) return;

    navLinks.forEach(link => {
      const href = link.getAttribute('href');
      const isActive = href === '#' + currentId;
      link.classList.toggle('active', isActive);
    });
  }

  window.addEventListener('scroll', updateActiveNav);
  // Initial call (in case user loads mid-page)
  updateActiveNav();
})();
