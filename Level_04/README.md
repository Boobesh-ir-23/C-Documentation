# Level 04 — Loops

This level builds directly on Level 03. Programs now repeat work using **`goto`** and labeled **`if`** blocks — introducing iteration before `for` or `while` loops.

By the end of this level, you will be comfortable with:
- Writing repeating logic with `goto` and a loop label
- Counting up and down with a loop counter
- Accumulating a running total inside a loop
- Combining loops with `if` to filter which values get printed

---

## Problems

### Group 1 — Basic Counting Loops

| # | Problem | Pattern | Key Technique |
|---|---------|---------|---------------|
| [01](./01_Print_01_to_05.c) | Print 1 to 5 | Ascending counter | `x++`, `goto loop` |
| [02](./02_Print_05_to_01.c) | Print 5 to 1 | Descending counter | `x--`, `goto loop` |

---

### Group 2 — Running Totals

| # | Problem | Pattern | Key Technique |
|---|---------|---------|---------------|
| [03](./03_Sum_of_1to5_.c) | Sum of 1 to 5 | Accumulator | `sum = sum + x`, ascending loop |
| [04](./04_Sum_of_6to1.c) | Sum of 6 to 1 | Accumulator | `sum = sum + x`, descending loop |

---

### Group 3 — Filtered Output Inside a Loop

| # | Problem | Condition | Key Technique |
|---|---------|-----------|---------------|
| [05](./05_Print_odd_numbers_1to9.c) | Print odd numbers 1 to 9 | `x % 2 == 1` | `if` inside loop |
| [06](./06_Print_twodigit_odd_below20.c) | Print two-digit odd numbers below 20 | `x % 2 == 1` | Loop over range 10–19 |
| [07](./07_Twodigit_odd_Sumofdigits_7.c) | Print two-digit odd numbers whose digit sum is 7 | `(x/10)+(x%10) == 7` | Digit sum filter, step by 2 |
| [08](./08_Twodigit_even_Sumofdigits_6.c) | Print two-digit even numbers whose digit sum is 6 | `(x/10)+(x%10) == 6` | Digit sum filter, step by 2 |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| `goto` loop structure | 01 – 08 |
| Ascending counter (`x++`) | 01, 03, 05, 06 |
| Descending counter (`x--`) | 02, 04 |
| Running total accumulator | 03, 04 |
| `if` condition inside a loop | 05 – 08 |
| Digit sum extraction `(x/10)+(x%10)` | 07, 08 |

---

## How to Run

```bash
gcc 01_Print_01_to_05.c -o out.exe
out.exe
```

Replace the filename with any `.c` file in this folder.

---

> Problems 09 – 16 (accumulating sums inside loops, digit operations, and prime checks) are in progress.