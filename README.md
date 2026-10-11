#  Atestat Informatică — Recursivitate

##  About the Project

- **Theory** a detailed explanation of recursion as a programming concept (what it is, how the call stack works, conditions for termination, advantages, and pitfalls)
- **7 Solved Problems** — each problem is shown both as annotated source code and as a live running demo from within the application

The program reads its content (theory text and problem source code) from `.in` data files at runtime and displays them formatted in the console.

##  Repository Structure

```
Atestat-Info/
└── AtestatCraciunDenisGabriel/
    ├── main.cpp                                   # Main C++ application
    ├── teorie.in                                  # Theory text on recursion
    ├── p1.in  →  p7.in                            # Problem source code files
    └── Craciun Denis Gabriel Atestat final.docx   # Written documentation
```

---

##  Problems Covered

| # | Problem | Concept |
| 1 | **Greatest Common Divisor (GCD)** | Classic recursive Euclid's algorithm |
| 2 | **Read & Display a Matrix** | Recursive matrix traversal |
| 3 | **Sum of digits by position in a vector** | Recursive vector operations |
| 4 | **Count distinct digits in a number** | Recursive digit extraction |
| 5 | **Draw shapes using `*`** | Recursive pattern printing |
| 6 | **Decompose number into sums of powers of 2** | Recursive decomposition |
| 7 | **Split a vector into odd/even sub-vectors** | Recursive partitioning |

Each problem is accessible from the main menu in two modes:
- **Source view** — displays the C++ source code
- **Problem demo** — runs the problem with example input

---

##  Application Menu

The console application presents a numbered menu with **15 options**:

```
(1)  Theory  Basic concepts of recursion
(2)  Problem 1  GCD (source)
(3)  Problem 1  GCD (demo)
(4)  Problem 2  Matrix read/display (source)
(5)  Problem 2  Matrix read/display (demo)
...
(15) Problem 7  Vector partitioning (demo)
(0)  Exit
```

---

##  How to Build & Run

### Requirements
- A C++ compiler (e.g. `g++`, MinGW, or MSVC)
- Windows OS (the program uses `system("CLS")` for screen clearing)
- All `.in` files must be in the **same directory** as the compiled executable

### Compile

```bash
g++ main.cpp -o atestat.exe
```

### Run

```bash
./atestat.exe
```

>  The program uses `system("CLS")` and a busy-wait `sleep()` function — these are Windows-specific and intended for the original exam environment.


##  Theory Highlights

The `teorie.in` file contains a full explanation of recursion in Romanian, including:

- Definition of a recursive notion / recursive function
- Direct vs. indirect recursion
- How the **call stack** works (parameters, local variables, return address per stack frame)
- Stack overflow risks
- The equivalence between recursive and iterative algorithms
- Real-world analogies (e.g. a camera filming a TV displaying its own feed)

