# Usage Instructions & Markdown Feature Tests

This file is designed to test Doxygen's Markdown and documentation parsing capabilities. It includes a variety of Markdown features and Doxygen-specific syntax.

---

## 1. Headings

# H1 Heading
## H2 Heading
### H3 Heading
#### H4 Heading

---

## 2. Lists

### Unordered List
- Item 1
- Item 2
  - Subitem 2.1
  - Subitem 2.2

### Ordered List
1. First
2. Second
   1. Subsecond
   2. Subthird

---

## 3. Links & Images

- [Doxygen Website](https://www.doxygen.nl/)
- ![Doxygen Logo](https://www.doxygen.nl/images/doxygen_logo.png)

---

## 4. Code Blocks

### C++ Example
```cpp
// Example C++ code block
#include <iostream>
int main() {
    std::cout << "Hello, Doxygen!" << std::endl;
    return 0;
}
```

### Python Example
```python
def hello():
    print("Hello, Doxygen!")
```

---

## 5. Tables

| Feature      | Supported |
|--------------|-----------|
| Headings     | Yes       |
| Lists        | Yes       |
| Code Blocks  | Yes       |
| Tables       | Yes       |
| Images       | Yes       |

---

## 6. Blockquotes & Admonitions

> This is a blockquote. Use it for notes or tips.

---

## 7. Inline Formatting

*Italic*, **Bold**, `Inline code`, ~~Strikethrough~~

---

## 8. Doxygen Commands in Markdown

\brief This is a brief description in a code block
\param x The first parameter
\return The result

---

## 9. Cross-References

See the [main page](README.md) for an overview.

---

## 10. HTML in Markdown

<details>
<summary>Click to expand</summary>

This section uses raw HTML for collapsible content.

</details>

---

## 11. Math (if enabled)

Inline math: $E=mc^2$

Block math:

$$
\int_0^\infty e^{-x} dx = 1
$$

---

## 12. Custom Grouping

\addtogroup usage
More content for the usage group.

---

You can add more Markdown files as needed to further test Doxygen's capabilities.
