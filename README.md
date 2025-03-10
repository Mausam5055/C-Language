# C Language Full Course

Welcome to the **C Language Full Course**! This repository contains the full materials and code examples you'll need to learn C programming from scratch. Whether you're a beginner or looking to refresh your knowledge, you'll find a variety of tutorials and exercises.

## Table of Contents

1. [Course Overview](#course-overview)
2. [Prerequisites](#prerequisites)
3. [Installation](#installation)
4. [Course Structure](#course-structure)
5. [Code Examples](#code-examples)
6. [Exercises](#exercises)
7. [License](#license)

---

## Course Overview

This repository is designed for learning C programming. It covers the following topics:

- Introduction to C programming
- Variables, data types, and operators
- Control structures (if, loops, switch)
- Functions
- Arrays
- Pointers
- Structures
- File I/O
- Dynamic Memory Allocation
- Linked Lists
- Recursion
- Advanced topics (e.g., bitwise operations, multi-threading)

Each section includes code examples with detailed explanations and exercises to test your knowledge.

---

## Prerequisites

Before starting this course, you should have the following:

- A basic understanding of how computers work
- Basic knowledge of mathematics
- A text editor (e.g., VS Code, Sublime Text, etc.)
- A C compiler (e.g., GCC or Clang) installed on your machine

---

## Installation

1. **Clone the repository** to your local machine:

    ```bash
    git clone https://github.com/yourusername/c-language-course.git
    ```

2. Navigate to the cloned directory:

    ```bash
    cd c-language-course
    ```

3. Compile the C code examples (for example, `hello_world.c`):

    ```bash
    gcc hello_world.c -o hello_world
    ```

4. Run the compiled program:

    ```bash
    ./hello_world
    ```

---

## Course Structure

The course is structured into individual topics and each topic contains multiple files. Here’s the general structure:

```
c-language-course/
│
├── 01_hello_world/
│   └── hello_world.c
├── 02_variables/
│   └── variables.c
├── 03_control_structures/
│   ├── if_else.c
│   ├── loops.c
│   └── switch_case.c
├── 04_functions/
│   └── functions.c
├── 05_arrays/
│   └── arrays.c
├── 06_pointers/
│   └── pointers.c
├── 07_structures/
│   └── structures.c
├── 08_file_io/
│   └── file_io.c
├── 09_dynamic_memory_allocation/
│   └── dynamic_memory.c
├── 10_linked_lists/
│   └── linked_list.c
└── 11_advanced_topics/
    └── bitwise_operations.c
```

---

## Code Examples

Here’s an example of how to get started with your C programming journey:

### 1. Hello World (hello_world.c)

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

#### Running the example:
1. Open the `hello_world.c` file.
2. Compile using `gcc hello_world.c -o hello_world`.
3. Run the program with `./hello_world`.

---

### 2. Variables and Data Types (variables.c)

```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

---

## Exercises

After going through each section, practice with these exercises:

1. **Write a program that prints your name.**
2. **Create a program that accepts two numbers and prints their sum.**
3. **Implement a program using loops that prints the Fibonacci sequence up to 100.**
4. **Write a function to calculate the factorial of a number using recursion.**

---

## License

This repository is open-source and available under the MIT License. You can freely use, modify, and distribute the code, but please attribute it to the author.

---

Happy learning and coding! 🚀

---

This template gives you a full structure for a GitHub repository, with a clear and accessible README file that includes everything from installation to exercises. The course content is broken into sections with simple code examples to guide learners through the topics step-by-step.
