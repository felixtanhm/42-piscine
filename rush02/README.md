# Rush02

Piscine Rush 02 Project

## Usage

```
make fclean
make
./rush-02 <number>
```

## Examples

```
$> ./rush-02 42 | cat -e
forty two$
$> ./rush-02 0 | cat -e
zero$
$> ./rush-02 10.4 | cat -e
Error$
$> ./rush-02 100000 | cat -e
one hundred thousand$
$> grep "20" numbers.dict | cat -e 20 : hey everybody !$
$> ./rush-02 20 | cat -e
hey everybody !$
```
