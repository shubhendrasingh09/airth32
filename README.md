# repolib
![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Open Source](https://badges.frapsoft.com/os/v1/open-source.svg)
![Made with VSCode](https://img.shields.io/badge/Made%20with-VSCode-1f425f.svg)

A simple C library providing basic arithmetic operations for 32-bit integers, with unit tests using the Unity framework.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Features](#features)
- [Building](#building)
- [Testing](#testing)
- [Installation](#installation)
- [License](#license)

## Introduction

**repolib** is a lightweight C library that implements basic arithmetic operations (addition, subtraction, multiplication, and division) for 32-bit integers. It is designed for educational purposes and as a starting point for more complex numerical libraries. The project includes comprehensive unit tests using the [Unity](https://www.throwtheswitch.org/unity) test framework.
It provides a simple API for performing arithmetic operations and ensures correctness through unit testing.

## Project Structure

```
.
├── build/              # Build artifacts (ignored by git)
├── doc/                # Documentation and logs
├── inc/                # Header files
│   └── arith32.h
├── lib/                # (Empty, for future use)
├── src/                # Source files
│   └── arith32.c
├── test/               # Unit tests and Unity framework
│   ├── test_arith32.c
│   └── unity/
│       ├── unity.c
│       ├── unity.h
│       └── unity_internals.h
├── CMakeLists.txt      # Build configuration
├── README.md           # Project documentation
```

## Features

- Addition, subtraction, multiplication, and division for 32-bit integers
- Simple API in [`inc/arith32.h`](inc/arith32.h)
- Unit tests with [Unity](https://www.throwtheswitch.org/unity)

## Building

1. Create a build directory:
    ```sh
    mkdir build && cd build
    ```
2. Run CMake and build:
    ```sh
    cmake ..
    make
    ```

## Testing

Run the tests from the `build` directory:
```sh
ctest
# or directly
./test_arith32
```

## Installation

To install the library and headers:
```sh
sudo make install
```
This will install `repolib.so` to `/usr/local/lib` and `arith32.h` to `/usr/local/include`.

## License

This project uses the MIT License. See [test/unity/unity.h](test/unity/unity.h) for Unity's license.

---

Author: Shubhendra Pratap Singh

[contact me](mailto:shubhendrasingh09@gmail.com)