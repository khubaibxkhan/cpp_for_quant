# C++ for Quant Engineering

> My journey of learning Modern C++ for Quant Engineering, Competitive Programming, and Software Engineering.

![GitHub last commit](https://img.shields.io/github/last-commit/khubaibxkhan/cpp_for_quant)
![GitHub repo size](https://img.shields.io/github/repo-size/khubaibxkhan/cpp_for_quant)
![GitHub stars](https://img.shields.io/github/stars/khubaibxkhan/cpp_for_quant?style=social)

---

## About

This repository documents my complete journey of learning **Modern C++** from scratch.

Rather than simply following tutorials, I use this repository to:

- Learn Modern C++
- Build strong problem-solving skills
- Master Data Structures & Algorithms
- Prepare for Quant Engineering interviews
- Prepare for Software Engineering interviews

Every chapter contains lecture code, my own practice, notes, assignments, and mentor reviews.

---

## Course

- **Course:** Complete C++ Course (31 Hours)
- **Instructor:** Frank Mitropoulos
- **Platform:** freeCodeCamp.org

---

## Repository Structure

```text
cpp_for_quant
│
├── 00_Setup
├── 01_Basics
├── 02_Variables_and_Data_Types
├── 03_Operations_on_Data
├── 04_Flow_Control
├── 05_Loops
├── 06_Arrays
├── 07_Pointers
├── 08_References
├── 09_Strings
├── 10_Functions
├── 11_Returning_From_Functions
├── 12_Function_Overloading
├── 13_Lambda_Functions
├── 14_Function_Templates
├── 15_CPP20_Concepts
├── 16_Classes
├── 17_Inheritance
├── 18_Polymorphism
│
├── Notes
└── Resources
```

---

## Progress

| Chapter | Status | Review |
|----------|--------|--------|
| Setup | 🟩 | ⭐ **10.0 / 10** |
| Diving In | 🟩 | ⭐ **9.2 / 10** |
| Variables & Data Types | 🟩 | ⭐ **9.5 / 10** |
| Operations on Data | 🟩 | ⭐ **9.7 / 10** |
| Flow Control | 🟩 | ⭐ **9.8 / 10** |
| Loops | 🟩 | ⭐ **9.8 / 10** |
| Arrays | 🟩 | ⭐ **9.7 / 10** |
| Pointers | 🟨 | Pending |
| References | ⬜ | - |
| Strings | ⬜ | - |
| Functions | ⬜ | - |
| Returning from Functions | ⬜ | - |
| Function Overloading | ⬜ | - |
| Lambda Functions | ⬜ | - |
| Function Templates | ⬜ | - |
| C++20 Concepts | ⬜ | - |
| Classes | ⬜ | - |
| Inheritance | ⬜ | - |
| Polymorphism | ⬜ | - |

> 🟩 Completed &nbsp;&nbsp; 🟨 In Progress &nbsp;&nbsp; ⬜ Not Started

---

## Chapter Reviews

### ⭐ Setup

**Score:** **10.0 / 10**

**Review:**
- Development environment configured successfully.
- Compiler and VS Code setup completed correctly.
- Build and execution workflow verified.
- Ready to begin learning Modern C++.

---

### ⭐ Chapter 1 | Diving In

**Score:** **9.2 / 10**

#### Strengths

- Excellent use of functions instead of placing all logic inside `main()`.
- Clear and descriptive variable names.
- Clean code formatting and readability.
- Correct usage of `std::` instead of `using namespace std;`.
- Good separation of logic across different problems.
- Demonstrated good understanding of basic input/output and function decomposition.

#### Areas for Improvement

- Integer division affects the Quotient and Celsius-to-Fahrenheit conversion.
- `std::getline()` will be preferred later for multi-word input.
- Some helper functions can directly return expressions instead of storing them in temporary variables.
- Swap without a third variable still needs to be implemented.

#### Overall Feedback

A very strong start for an introductory chapter. The code is clean, organized, and demonstrates good programming habits. The emphasis on functions, readability, and explicit namespace usage provides a solid foundation for upcoming topics such as pointers, memory management, and object-oriented programming.

---

### ⭐ Chapter 2 | Variables & Data Types

**Score:** ⭐ **9.5 / 10**

#### Strengths

- Strong understanding of C++ primitive data types.
- Correct usage of uniform initialization (`{}`).
- Used `static_cast` instead of C-style casting.
- Demonstrated good understanding of ASCII conversions.
- Used `std::getline()` correctly for full-name input.
- Clean function decomposition and consistent formatting.
- Proper use of `std::boolalpha` for boolean output.

#### Areas for Improvement

- The ASCII reverse question should accept an integer input instead of a character.

#### Overall Feedback

Excellent progress compared to the previous chapter. The code is becoming cleaner, more idiomatic, and better organized. The use of Modern C++ features such as uniform initialization, `static_cast`, and `std::getline()` demonstrates growing confidence with the language. The foundation for upcoming topics like operators, pointers, and memory management is now solid.

---

### ⭐ Chapter 3 | Operations on Data

**Score:** ⭐ **9.7 / 10**

#### Strengths

- Excellent understanding of arithmetic, relational, and logical operators.
- Clean function decomposition for calculator operations.
- Correct reasoning about operator precedence and associativity.
- Good use of `<limits>` and `<cmath>`.
- Consistent code formatting and descriptive variable names.
- Strong improvement in problem-solving approach.

#### Areas for Improvement

- Remember that integer division truncates before returning a `double`.
- Handle edge cases such as division by zero.
- Use `std::fixed` with `std::setprecision()` for formatted floating-point output.
- Continue improving interactive program design (e.g., menu-driven calculators).

#### Overall Feedback

This chapter shows noticeable growth in coding maturity. Programs are becoming more modular, readable, and easier to maintain. The understanding of operators and expression evaluation is solid, providing an excellent foundation for conditional statements, loops, and future DSA problems.

---

### ⭐ Chapter 4 | Flow Control

**Score:** ⭐ **9.8 / 10**

#### Strengths

- Strong understanding of conditional programming using `if`, `else if`, `switch`, and the ternary operator.
- Excellent use of functions to organize logic.
- Clean and readable code with meaningful variable and function names.
- Successfully implemented practical programs such as ATM menu, calculator, grade generator, and leap year checker.
- Demonstrates good logical thinking and consistent coding style.

#### Areas for Improvement

- Validate user input (e.g., marks outside 0–100, division by zero, insufficient account balance).
- Handle all edge cases when classifying characters and comparing values.
- Continue improving program robustness by considering unexpected inputs.

#### Overall Feedback

This chapter reflects a clear improvement in programming maturity. Code is modular, readable, and well-structured. Conditional logic is now becoming second nature, providing a strong foundation for loops, arrays, and more advanced algorithmic problem solving.

---

### ⭐ Chapter 5 | Loops

**Score:** ⭐ **9.8 / 10**

#### Strengths

- Strong understanding of `for`, `while`, and `do-while` loops.
- Correct selection of loop types based on the problem.
- Well-structured solutions with clean formatting and modular functions.
- Successfully implemented practical programs including ATM, Fibonacci series, prime checker, and number manipulation problems.
- Demonstrates improved problem-solving ability and attention to program structure.

#### Areas for Improvement

- Be cautious when using `size_t` in decrementing loops.
- Consider edge cases such as `0`, `1`, and invalid inputs.
- Continue practicing input validation and overflow awareness.

#### Overall Feedback

This chapter demonstrates a significant improvement in logical thinking. Loop selection feels natural, programs are modular, and code readability continues to improve. The foundation for arrays, STL containers, and algorithmic programming is now very solid.

---

### ⭐ Chapter 6 | Arrays

**Score:** ⭐ **9.7 / 10**

#### Strengths

- Strong understanding of array declaration, traversal, and indexing.
- Successfully implemented searching, reversing, rotation, statistics, and array manipulation problems.
- Comfortable using loops with arrays and writing clean, readable code.
- Demonstrates good logical thinking by combining multiple operations into single traversals where appropriate.
- Shows willingness to tackle more challenging array problems beyond the lecture content.

#### Areas for Improvement

- Avoid Variable Length Arrays (`int array[n]`) in standard C++.
- Continue practicing nested-loop problems such as frequency counting and duplicate handling.
- Develop habit of considering time complexity while solving array problems.
- Explore in-place algorithms instead of relying on additional arrays when possible.

#### Overall Feedback

This chapter marks an important milestone. Arrays are the first real data structure in C++, and you've built a solid foundation. While some advanced problems required guidance, your understanding of indexing, traversal, searching, and basic manipulation is strong. You're ready to move on to pointers, where arrays will become even more meaningful.

---

## Learning Workflow

Each chapter generally contains:

```text
Chapter_Name/
│
├── lecture.cpp
├── practice/
└── assignments/
```

---

## Tech Stack

- Modern C++ (C++17 / C++20)
- GCC / MSVC
- Visual Studio Code
- Git
- GitHub

---

## Goals

- Learn Modern C++
- Master STL
- Build strong DSA skills
- Solve 500+ coding problems
- Prepare for Quant Engineering interviews
- Build high-performance C++ applications

---

## Started

**July 2026**

This repository will continuously evolve as I learn new concepts, solve problems, and build projects.

---

If you're also learning C++, feel free to explore the repository and follow along.