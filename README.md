# Systems Programming

Course workspace for **Systems Programming — Fall Semester 2026**, Faculty of Informatics, Università della Svizzera italiana (USI).

The repository contains personal notes, exercises, and build setups developed throughout the course. All code, build configurations, and ignore rules are written manually to gain a solid understanding of C, POSIX interfaces, memory models, compilation units, and Unix build systems.

## Prerequisites

- macOS or a POSIX-compatible Linux environment
- Clang (`clang` and, for C++, `clang++`)
- A debugger such as LLDB or GDB
- Make (`make`)
- Basic familiarity with a terminal and shell commands

Verify the core toolchain:

```sh
clang --version
make --version
lldb --version
```

## Repository layout

```sh
systems-programming/
├── 01-introduction/
│   ├── notes/
│   ├── slides/
│   └── exercises/
├── 02-basics/
├── 03-memory-model-and-pointers/
├── 04-data-structures/
├── 05-expressions-and-their-semantics/
├── 06-program-structure-and-symbols/
├── 07-pointers-to-function-modularization-and-oop/
├── 08-introduction-to-posix-system-interface/
├── 09-debugging/
├── 10-building-with-make/
├── 11-introduction-to-cpp/
├── 12-exams/
├── build/
├── .gitignore
└── README.md
```



