<!--! [TOC] -->
<!-- https://www.doxygen.nl/manual/htmlcmds.html#htmltagcmds -->

![Doxygen GitHub Pages](https://github.com/MangaD/Doxygen-Playground/actions/workflows/doxygen-gh-pages.yml/badge.svg)

# Doxygen Playground

Welcome to the **Doxygen Playground**! This repository is designed to experiment with [Doxygen](https://www.doxygen.nl/) and Markdown-based documentation, with a focus on detecting bugs and testing documentation workflows.

---

## 🚀 Features

- Write documentation in Markdown (`.md`) files
- Automatic documentation generation with the latest Doxygen (via GitHub Actions)
- Continuous deployment to GitHub Pages
- Example usage and code snippets

---

## 📦 Getting Started

1. **Clone this repository**
   ```sh
   git clone https://github.com/MangaD/Doxygen-Playground.git
   cd Doxygen-Playground
   ```

2. **Add or edit Markdown files**
   - Place your documentation in `.md` files (e.g., `README.md`, `usage.md`).

3. **Generate documentation locally (optional)**
   - Make sure you have [Doxygen](https://www.doxygen.nl/download.html) installed.
   - Run:
     ```sh
     doxygen Doxyfile
     ```
   - The generated HTML will be in `docs/html`.

4. **Push changes to GitHub**
   - Documentation will be built and published automatically by GitHub Actions.

---

## 🛠️ Usage Example

See [usage.md](./usage.md) for usage instructions and code examples.

See [subdir/usage.md](./subdir/usage.md) for the same usage instructions and code examples.

---

## � Documentation Output

- **Local:** After running Doxygen, open `docs/html/index.html` in your browser.
- **Online:** The latest documentation is published at:

  👉 https://mangad.github.io/Doxygen-Playground

---

## 🤖 About This Repository

> **Note:** This repository is intended for experimenting with Doxygen in order to detect bugs and test documentation workflows. Feel free to open issues if you find any bugs or have suggestions!

---

## 📚 Resources

- [Doxygen Manual](https://www.doxygen.nl/manual/index.html)
- [Markdown Guide](https://www.markdownguide.org/)
- [GitHub Pages Documentation](https://docs.github.com/en/pages)
