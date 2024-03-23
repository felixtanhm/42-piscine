# 42 Piscine

This repository serves as a compilation of my experience attending 42 @ SUTD's Piscine in March 2024.

42 is a global education initiative that implements a different approach to learning: no teachers, no lectures, students learning from their fellow students (peer to peer learning), with a methodology that develops both computing and life skills. 42 is free for whoever is approved in its selection process.

The **Piscine**, a 26-day C programming bootcamp, is the last stage in the selection process for becoming a 42 student.

1. [**Reflections and Thoughts**](#1-reflections-and-thoughts)
2. [**Projects**](#2-projects)
3. [**Piscine Tips**](#3-piscine-tips--tricks)

## 1. Reflections and Thoughts

Of the projects done, I'm particularly proud of being able to complete [**C11's ex05**](./c-projects/c11/ex05/) - to create a barebones calculator program in C. To me, the ability to build a simple program represents the culmination of the 26 days in which I was a part of the program and served as a good wrap up to everything I've learnt about C.

Another highlight was [**C09's ex00**](./c-projects/c09/ex00/), where the functions I wrote to replicate existing C library functions could be compiled into a library, and exported to be used elsewhere. Being able to create libraries was a little mindblowing to me.

## 2. Projects

| Projects |             Solutions             |         Concepts          |
| :------: | :-------------------------------: | :-----------------------: |
| Shell00  | [100%](./shell-projects/shell00/) |       Shell Basics        |
| Shell01  | [70%](./shell-projects/shell01/)  |       Shell Basics        |
|   C00    |     [85%](./c-projects/c00/)      |        Intro to C         |
|   C01    |     [100%](./c-projects/c01/)     |         Pointers          |
|   C02    |     [85%](./c-projects/c02/)      |     Strings & Arrays      |
|   C03    |     [100%](./c-projects/c03/)     |    String Manipulation    |
|   C04    |     [100%](./c-projects/c04/)     |     Integers & Bases      |
|   C05    |     [80%](./c-projects/c05/)      |   Iteration & Recursion   |
|   C06    |     [100%](./c-projects/c06/)     |        Argc & Argv        |
|   C07    |     [60%](./c-projects/c07/)      |     Memory Allocation     |
|   C08    |     [100%](./c-projects/c08/)     | Headers, Macros & Structs |
|   C09    |     [100%](./c-projects/c09/)     |   Libraries & MakeFile    |
|   C10    |               N.A.                |    Recreating Programs    |
|   C11    |     [100%](./c-projects/c11/)     |     Function Pointers     |
|   C12    |               N.A.                |       Linked Lists        |
|   C13    |               N.A.                |    Binary Search Trees    |

My solutions for projects in 42 Piscine. Please open an issue in this repository if you spot any errors.

## 3. Piscine Tips & Tricks

### **Timeline Pacing**

#### **Week1:** Shell00, Shell01, C00, C01

- Open your evaluation slots immediately!!! This allows you to meet people, evaluate their code (which helps you get answers too), and allows you to earn points which you will need to submit your own projects.
- `C00` will be available on the 3rd day of the Piscine. Start work on it immediately as `Exam00`, the first exam, will be on the C language.
- If you have not finished `Shell01` by the 3rd day, skip it and work on it when you have spare time. Focus on `C00` and `C01`.
- **Do `Rush 00`**. You have to participate in at least one Rush during the Piscine to qualify for the program and the rest of the Rushes are very difficult.

#### **Week2:** C02, C03, C04, C06

- Leave `C05` for Week 3. It's better to work on `C06` as the concepts in `C06`(Argc and Argv) are part of `Exam01`.
- If you managed to finish `C06` comfortably during the 2nd week, you can give `Rush01` a try. It's an interesting problem and a potential programming interview problem.
- Otherwise, it's perfectly fine to skip `Rush01` if you've already done `Rush00`.

#### **Week3:** C05, C07, C08, C09

- If you did not participate in any other Rush, you have to do `Rush02`.
- It's fairly possible to finish this week's topics ahead of time, especially if you skipped `Rush01`. With your spare time, you can move ahead and try `C11`, or try to get 100% in previous Projects.
- Skip `C10`, as it's very difficult.

#### **Week4:** C11

- Focus on `C11` and finishing the previous Projects with 100%.
- When you're done, you can try to do `C10`. Without finishing `C10`, `C12` and `C13` won't be available to you.
- Remember to allocate time to prepare for the final exam.

### **Exam Tips**

#### **Exam Registration**

- You need to register for the Exam Event **BEFORE** the exam. Failure to do so will result in a default fail for the exam.
- During the exam, you have 10 minutes to log in to your `examshell`. Failure to do so will result in a default fail for the exam.
- To log in, type `exam` as the username and password, instead of your normal username and password.
- Open your Terminal, and type in `examshell`.
- Log in with your normal username and password.

#### **Exam Topics**

- **Exam00**: Functions, Loops, Conditionals, Arrays and Strings
- **Exam01**: ArgC & ArgV and everything from Exam00
- **Exam02**: Malloc, Free and everything from Exam01
- **Exam03**: Headers, Libraries, Makefile, Function Pointers and everything from previous exams.

#### **Taking the Exam**

- You do **not** need to `norminette` your exam solutions.
- You do **not** need to have the `42 Header` in your solution file, unlike your day to day projects.
- You **do** need to pay attention to what the exam question is asking for. Remove any unnneccesary testing functions, libraries, and files.
- Before submission, commit and push your code to the `rendu/<test question>` directory.
- To submit, type `grademe` in the examshell and wait for your results.
- Upon each submission, there are `traces` that will be saved to your `traces` folder. These traces can help you debug what went wrong with your solution.
- `traces` might not always be available, depending on the exam.
- Depending on your machine, VSCode might or might not be installed. Don't rely on it and learn how to use VIM well enough that you can do the exam with it.
