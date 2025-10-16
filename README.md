# C Memory Management & Garbage Collector Implementation

This project is a deep dive into manual memory management, data structures, and the implementation of garbage collection algorithms in C. It follows the principles taught in C Programming and Memory Management, resulting in a simple object system for a custom language ("Sea") with two distinct garbage collectors.

The core of this project is to build an understanding of how high-level language features, like automatic memory management, are implemented at a lower level.

## Features

-   **Custom Object System:** A C-based object system that can represent different data types (integers, floats, strings) and container types (vectors, dynamic arrays).
-   **Generic Stack Data Structure:** A dynamic stack implementation using `void*` pointers to handle generic data types.
-   **Reference Counting Garbage Collector (Ref-Counting GC):** A first implementation of a garbage collector where each object tracks the number of references pointing to it. An object is freed when its reference count drops to zero.
-   **Mark and Sweep Garbage Collector (Mark & Sweep GC):** A more advanced garbage collector implementation capable of handling cyclical references. The algorithm works in two phases:
    1.  **Mark Phase:** Traverses all reachable objects from a set of roots (e.g., stack frames) and marks them as "live."
    2.  **Sweep Phase:** Iterates through all objects, freeing any object that was not marked.
-   **Simple Virtual Machine (VM) Simulation:** A basic VM structure to manage stack frames and object allocation, providing the necessary foundation for the Mark & Sweep GC.

## Learning Outcomes & Concepts Explored

This project was a practical exercise in understanding:

-   **Manual Memory Management:** Direct use of `malloc`, `realloc`, `calloc`, and `free` to manage memory on the heap.
-   **Pointers and Pointer Arithmetic:** Extensive use of pointers, including pointer-to-pointers (`**`) and generic (`void*`) pointers for building flexible data structures.
-   **Data Structures in C:** Building structs, unions, and enums to create a complex, composite object system.
-   **Garbage Collection Algorithms:** The fundamental logic, advantages, and disadvantages of both Reference Counting and Mark & Sweep garbage collectors.
-   **Simulating High-Level Concepts:** Understanding how to simulate object-oriented and dynamic language features in a low-level, procedural language like C.
-   **Memory Safety:** Gaining an appreciation for the complexities of memory management and the sources of common bugs like memory leaks and use-after-free errors.

## How to Build and Run

The project is written in standard C. You can compile the source files using a C compiler like GCC.

```bash
# Compile all .c files and link them into an executable named 'main'
gcc -o main *.c -std=c11 -Wall

# Run the executable
./main
