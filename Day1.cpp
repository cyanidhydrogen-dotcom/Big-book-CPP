# 📖 The Big C++ Book — Day 1

## Chapter 1 — How a Program Works

A C++ program is written as source code (`.cpp` files). Before it can run, it must be translated into machine code by a **compiler**. The CPU cannot understand C++ directly—it only understands machine instructions.

```text
C++ Source Code (.cpp)
         │
     Compiler
         │
Machine Code (.exe)
         │
         CPU
```

---

## Chapter 2 — Your First Program

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello!" << std::endl;
    return 0;
}
```

### Explanation

- `#include <iostream>` includes the **iostream** library, which allows input and output.
- `int main()` is the entry point of every C++ program.
- `std::cout` displays text in the console.
- `std::endl` prints a new line.
- `return 0;` tells the operating system that the program finished successfully.

---

## Chapter 3 — Common Types of Errors

### Compilation Errors
These occur when the compiler finds invalid C++ syntax.

Example:

```cpp
std::cout << "Hello"
```

(Missing semicolon.)

### Runtime Errors
These happen while the program is running.

Examples:
- Dividing by zero
- Accessing invalid memory

### Logic Errors
The program compiles and runs correctly, but produces the wrong result because of incorrect logic.

Example:

```cpp
int age = 18;

if (age > 18)
{
    std::cout << "Adult";
}
```

This code does not display **Adult** when `age` is exactly `18`.

---

# 📝 Exercises

1. Display your first name.
2. Display three different lines of text.
3. Draw a simple ASCII house.
4. Modify the program to display your age.

Example:

```text
   /\
  /  \
 /____\
 | [] |
 |    |
 |____|
```
