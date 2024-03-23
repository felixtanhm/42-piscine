# C11 Ex05: Do-Op 🧮

A simple calculator program that can be executed in the terminal.

A restriction placed on the exercise was that an array of function pointers needs to be used in constructing operators of the program. It also has `atoi` implemented to take into account inputs such as `42amis - --+-20toto12`.

## 🚨 Usage

**Setup**

```bash
cd 42-piscine/c-projects/c11/ex05
make
```

**Usage**

```bash
./do-op 21 + 21
42
./do-op 64 - 22
42
./do-op 21 "*" 2
42
./do-op 84 / 2
42
./do-op 142 % 100
42
```

Note the restriction on the `*` operator, as `*` is a special character in shell. To perform multiplication, use `"`, like so: `"*"`.

**Clean**

```bash
make clean
```
