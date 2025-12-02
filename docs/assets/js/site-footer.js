// assets/js/site-footer.js
// Universal theme-aware footer custom element.
//
// Usage:
// <script src="/assets/js/site-footer.js" defer></script>
// <site-footer module="7" updated="November 2025" course="Module label"
//   author-name="..." author-github="..." author-linkedin="..." author-img1="..." author-img2="..."
//   maint-name="..." maint-github="..." maint-img1="..." maint-img2="..."></site-footer>

(function () {
  if (customElements.get('site-footer')) return;

  class SiteFooter extends HTMLElement {
    constructor() {
      super();
      this.attachShadow({ mode: 'open' });
    }

    connectedCallback() {
      // read attributes with defaults
      const moduleNum = this.getAttribute('module') || '';
      const updated = this.getAttribute('updated') || '';
      const course = this.getAttribute('course') || 'Basic C Programming Course';

      const author = {
        name: this.getAttribute('author-name') || 'Author',
        github: this.getAttribute('author-github') || '#',
        linkedin: this.getAttribute('author-linkedin') || '#',
        img1: this.getAttribute('author-img1') || '',
        img2: this.getAttribute('author-img2') || ''
      };

      const maint = {
        name: this.getAttribute('maint-name') || 'Maintainer',
        github: this.getAttribute('maint-github') || '#',
        img1: this.getAttribute('maint-img1') || '',
        img2: this.getAttribute('maint-img2') || ''
      };

      // Build template
      this.shadowRoot.innerHTML = `
        <style>
          :host{
            --primary: var(--primary, #8b5cf6);
            --accent: var(--accent, #ef4444);
            --muted:  var(--muted, #9fb3d9);
            --panel:  var(--panel, rgba(255,255,255,0.04));
            --fg:     var(--fg, #f8fafc);
            display: block;
            margin: 28px auto 36px;
            max-width: 1200px;
            font-family: Inter, system-ui, -apple-system, "Segoe UI", Roboto, "Helvetica Neue", Arial;
          }

          /* container */
          .footer {
            background: linear-gradient(135deg, color-mix(in srgb, var(--primary) 60%, #000 0%), color-mix(in srgb, var(--accent) 70%, #000 0%));
            border-radius: 16px;
            padding: 18px;
            color: white;
            box-shadow: 0 18px 60px rgba(2,6,23,0.35);
            overflow: hidden;
          }

          /* layout */
          .inner {
            display: flex;
            gap: 20px;
            align-items: flex-start;
            justify-content: space-between;
            flex-wrap: wrap;
          }

          .people {
            display:flex;
            gap:14px;
            align-items:center;
            flex-wrap:wrap;
            min-width: 240px;
          }

          .person {
            display:flex;
            gap:12px;
            align-items:center;
            text-decoration:none;
            color:inherit;
            padding:6px 8px;
            border-radius:10px;
            transition: transform .18s ease, background .18s ease;
          }
          .person:hover { transform: translateY(-4px); background: rgba(255,255,255,0.06); }

          .avatar {
            width:56px;height:56px;border-radius:999px;overflow:hidden;position:relative;border:2px solid rgba(255,255,255,0.16);
            flex-shrink:0;
          }
          .avatar img { width:100%;height:100%;object-fit:cover;display:block;transition:opacity .22s ease; }
          .avatar .img-hover{ position:absolute; inset:0; opacity:0; }
          .avatar:hover .img-hover{ opacity:1; }
          .avatar:hover .img-base{ opacity:0; }

          .meta { display:flex;flex-direction:column; gap:2px; }
          .name { font-weight:700; font-size:0.98rem; line-height:1; }
          .role { font-size:0.82rem; opacity:0.95; }

          .info {
            text-align:right;
            min-width:260px;
            display:flex;
            flex-direction:column;
            gap:8px;
            align-items:flex-end;
          }
          .title {
            display:inline-flex;
            gap:8px;
            align-items:center;
            font-weight:700;
            font-size:1rem;
            text-shadow: 0 2px 8px rgba(0,0,0,0.18);
          }
          .title i{ background: rgba(255,255,255,0.12); padding:6px;border-radius:8px;color:var(--accent); }

          .sub { font-size:0.88rem; opacity:0.95; color: rgba(255,255,255,0.94); }
          .links { display:flex; gap:8px; flex-wrap:wrap; justify-content:flex-end; }
          .pill {
            display:inline-flex; gap:8px; align-items:center;
            background: rgba(255,255,255,0.08);
            color: #fff;
            padding:6px 10px;
            border-radius:10px;
            text-decoration:none;
            font-weight:600;
            transition: transform .16s ease, background .16s ease;
          }
          .pill:hover { transform: translateY(-3px); background: rgba(255,255,255,0.12); }

          /* small screen adjustments */
          @media (max-width:880px){
            .info { text-align:left; align-items:flex-start; min-width:unset; }
            .inner { gap:12px; }
          }

          /* subtle decorative bar at bottom (theme accent) */
          .accent-bar {
            height:6px;
            margin-top:12px;
            border-radius:6px;
            background: linear-gradient(90deg, rgba(255,255,255,0.12), rgba(255,255,255,0.03));
            box-shadow: inset 0 1px 0 rgba(255,255,255,0.06);
          }

          /* Focus states */
          a:focus { outline: 3px solid rgba(255,255,255,0.12); outline-offset:4px; border-radius:8px; }
        </style>

        <footer class="footer" part="footer" aria-labelledby="footer-heading">
          <div class="inner">
            <div class="people" part="people">
              <a class="person" part="person-author" href="${escapeHtml(author.github)}" target="_blank" rel="noopener noreferrer" title="Author: ${escapeHtml(author.name)} (GitHub)">
                <div class="avatar" aria-hidden="true">
                  ${author.img1 ? `<img loading="lazy" class="img-base" src="${escapeHtml(author.img1)}" alt="${escapeHtml(author.name)}">` : `<div style="width:100%;height:100%;background:rgba(255,255,255,0.08)"></div>`}
                  ${author.img2 ? `<img loading="lazy" class="img-hover" src="${escapeHtml(author.img2)}" alt="${escapeHtml(author.name)} (hover)">` : ''}
                </div>
                <div class="meta">
                  <div class="name">${escapeHtml(author.name)}</div>
                  <div class="role">Author</div>
                </div>
              </a>

              <a class="person" part="person-maint" href="${escapeHtml(maint.github)}" target="_blank" rel="noopener noreferrer" title="Maintainer: ${escapeHtml(maint.name)} (GitHub)">
                <div class="avatar" aria-hidden="true">
                  ${maint.img1 ? `<img loading="lazy" class="img-base" src="${escapeHtml(maint.img1)}" alt="${escapeHtml(maint.name)}">` : `<div style="width:100%;height:100%;background:rgba(255,255,255,0.08)"></div>`}
                  ${maint.img2 ? `<img loading="lazy" class="img-hover" src="${escapeHtml(maint.img2)}" alt="${escapeHtml(maint.name)} (hover)">` : ''}
                </div>
                <div class="meta">
                  <div class="name">${escapeHtml(maint.name)}</div>
                  <div class="role">Maintainer & Contributor</div>
                </div>
              </a>
            </div>

            <div class="info" part="info">
              <div class="title"><i class="fa-solid fa-heart"></i> Crafted with passion for learners</div>
              <div class="sub">Last updated: <strong>${escapeHtml(updated)}</strong> · ${escapeHtml(course)}</div>

              <div class="links" role="navigation" aria-label="Footer links">
                <a class="pill" href="${escapeHtml(author.linkedin)}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-linkedin" aria-hidden="true"></i> Author LinkedIn</a>
                <a class="pill" href="${escapeHtml(author.github)}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-github" aria-hidden="true"></i> Author GitHub</a>
                <a class="pill" href="${escapeHtml(maint.github)}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-github" aria-hidden="true"></i> Maint. GitHub</a>
              </div>
            </div>
          </div>

          <div class="accent-bar" aria-hidden="true"></div>
        </footer>
      `;

      // Ensure fontawesome works inside shadowRoot by letting page include FA globally.
      // If FA isn't available then icons will simply not render — OK.

      // helper: if certain links equal '#', hide them gracefully
      this._cleanupEmptyLinks();

      // small accessibility: add id to heading (if needed)
      // nothing else to do
    }

    _cleanupEmptyLinks() {
      // hide pills where href is '#'
      const pills = this.shadowRoot.querySelectorAll('.pill');
      pills.forEach(p => {
        try {
          const href = p.getAttribute('href');
          if (!href || href === '#' || href.trim() === '') p.style.display = 'none';
        } catch (e) { /* ignore */ }
      });
    }
  }

  // helper escape to avoid XSS (since we put attributes into the template)
  function escapeHtml(s) {
    if (!s) return '';
    return String(s)
      .replaceAll('&', '&amp;')
      .replaceAll('<', '&lt;')
      .replaceAll('>', '&gt;')
      .replaceAll('"', '&quot;')
      .replaceAll("'", '&#39;');
  }

  customElements.define('site-footer', SiteFooter);
})();
