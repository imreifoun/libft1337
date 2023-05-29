# Libft MY FIRST PROJECT IN 42 NETWORK

![License](https://img.shields.io/badge/license-MIT-blue.svg)

Welcome to Libft! This project is part of the curriculum at 42 Network and aims to provide you with a library of essential C functions that will be useful throughout your programming journey. The name "libft" stands for "library functions."

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Introduction

Libft is a library that contains a set of functions commonly used in C programming. It provides an opportunity to practice coding and to consolidate your understanding of fundamental concepts. With this library, you can easily perform tasks such as manipulating strings, working with linked lists, and handling memory allocation.

## Features

Libft includes the following key features:

- **String Manipulation:** Functions for copying, concatenating, searching, and manipulating strings.
- **Memory Management:** Functions for memory allocation, deallocation, and manipulation.
- **Linked List Operations:** Functions for creating, modifying, and traversing linked lists.
- **Character Manipulation:** Functions for classifying characters, converting cases, and performing character-based operations.
- **Mathematical Operations:** Functions for basic mathematical operations and checking properties of numbers.
- **Input/Output:** Functions for reading from and writing to files and standard input/output.

## Installation

To use the Libft library in your project, follow these steps:

1. Clone the repository to your local machine.
   ```shell
   git clone https://github.com/imreifoun/libft.git
   ```

2. Change to the project directory.
   ```shell
   cd libft
   ```

3. Compile the library using the provided Makefile.
   ```shell
   make
   ```

4. Link the library to your project during compilation.
   ```shell
   gcc -o my_program my_program.c -L. -lft
   ```

## Usage

Using the functions from the Libft library is straightforward. Include the `libft.h` header file in your project, and you're ready to go!

```c
#include "libft.h"

int main(void) {
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    ft_putstr("The length of the string is: ");
    ft_putnbr(len);
    ft_putchar('\n');
    return 0;
}
```

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code for your own purposes.

---

📧 Thank you for using Libft, and happy coding!
