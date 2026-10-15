# ⭐ STAR

## Description

**STAR** is one of the very first C projects of the Epitech first year.  
The goal is to write a function `star(unsigned int size)` that draws an **ASCII-art star** of a given size in the terminal, using **only `my_putchar`** (no `printf`).

This project focuses on **loops**, **pattern logic**, and **thinking in rows and columns** to build a shape that scales with its size.

---

## 🧩 Features

- Draws a six-pointed star of **any size ≥ 1**
- Special hand-crafted shape for `size = 1`
- Output built character by character with `my_putchar`
- Clean **Makefile** build system

---

## ⚙️ Usage

### Compilation

```bash
make
```

Other rules:
```bash
make re      # Rebuild everything
make clean   # Remove object files
make fclean  # Remove binaries and object files
```

---

### Execution

```bash
./star <size>
```

#### Example:
```
$ ./star 1
   *
*** ***
 *   *
*** ***
   *

$ ./star 3
        *
       * *
      *   *
*******   *******
 *             *
  *           *
   *         *
  *           *
 *             *
*******   *******
      *   *
       * *
        *
```

---

## 🗂️ Project Structure

| File | Description |
|------|-------------|
| `main.c` | Entry point: parses the size and calls `star()` |
| `fonction_star.c` | `star()`, top/bottom points and the `size = 1` case |
| `star.c` | Horizontal lines and the middle diagonals |
| `star.h` | Prototypes |

---

## 🎯 Learning Objectives

- Master nested loops
- Translate a visual pattern into an algorithm
- Write output without the standard library
