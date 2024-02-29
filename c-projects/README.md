# C Information 🔽

## 42 C Projects

All C projects at 42 require you to have a header on-top of your .c file that looks something like this:

![Screenshot (39)](https://user-images.githubusercontent.com/58959408/152627996-b8e25390-63e6-4829-93b7-461692788f06.png)

To create this header, you can follow the below instructions:

- VSCode
- Vim

## C Libraries 📚

This Github Repo uses only 3 C System Standard Libraries:

- `#include <unistd.h>` - for the `write` function. <br>

- `#include <stdio.h>` - for the `printf` function. <br>

- `#include <stdlib.h>` - for the `NULL` function.

## ASCII Table 🔡

When looking for characters and symbols in C, you can use decimals to locate them in your .c program/function.

![unknown](https://user-images.githubusercontent.com/82299698/152664282-eb24f09b-4061-470b-8269-47b56efc8682.png)

## Comments 🗒️

In C, you can comment in your code if you want to leave any notes/information in the code. The program/function will skip over your notes and not
run it when it complies. <br>

To comment your code, you can do either of the following: <br>

`// <your comment>` - double stroke (//) is for commenting single lines. <br>
`/* <your comment> */` - (/\* \*/) is for commenting multiple lines.

## Submission 📟

To compile your program/function, be in the folder of your program/function and type in the following:

- `gcc 'filename.c'`

then type the following if its a function (e.g. ft_putchar.c):

- `./a.out`

or type the following if its a program (e.g. int main(int argc, char \*\*argv)):

- `./a.out 'str1' 'str2'`
