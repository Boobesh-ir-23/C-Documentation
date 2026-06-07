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

### Group 4 — Filtered Sums Inside a Loop

| # | Problem | Condition | Key Technique |
|---|---------|-----------|---------------|
| [09](./09_Sumof_twodigit_even_sumofdigits_6.c) | Sum two-digit even numbers whose digit sum is 6 | `(x/10)+(x%10) == 6` | Accumulator + filter inside loop |
| [10](./10_Sumof_twodigit_odd_ten'sdigit_7.c) | Sum two-digit odd numbers whose tens digit is 7 | `x/10 == 7` | Tens-digit filter, step by 2 |

---

### Group 5 — User Input and Digit Manipulation

| # | Problem | Pattern | Key Technique |
|---|---------|---------|---------------|
| [11](./11_Print_total_no_ofdigits.c) | Count digits in a user-entered number | Digit strip loop | `x = x/10`, counter increment |
| [12](./12_Print_sumof_digits.c) | Sum digits of a user-entered number | Digit strip loop | `sum = sum + (x%10)` |
| [13](./13_Reverse_the_number.c) | Reverse a user-entered number | Build reversed value | `sum = (sum*10) + (x%10)` |
| [14](./14_Interchnage_firstlast.c) | Interchange first and last digits | Power-of-10 scaling | `dig = dig*10`, recombine digits |
| [15](./15_If_odd_sub1_from_MSB.c) | Subtract 1 from MSB if number is odd | Conditional + digit loop | Isolate MSB, subtract `z` |
| [16](./16_Prime_or_not.c) | Check if a number is prime | Trial division loop | Test divisors from 2 upward |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| `goto` loop structure | 01 – 16 |
| Ascending counter (`x++`) | 01, 03, 05, 06 |
| Descending counter (`x--`) | 02, 04 |
| Running total accumulator | 03, 04, 09, 10 |
| `if` condition inside a loop | 05 – 10 |
| Digit sum extraction `(x/10)+(x%10)` | 07 – 09 |
| User input with `scanf` | 11 – 16 |
| Digit stripping loop (`x = x/10`) | 11, 12, 13 |
| Reverse number construction | 13 |
| First/last digit interchange | 14 |
| Prime check via trial division | 16 |

---

## How to Run

```bash
gcc 01_Print_01_to_05.c -o out.exe
out.exe
```

Replace the filename with any `.c` file in this folder.