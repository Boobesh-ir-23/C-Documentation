# Level 05 — For Loops

This level builds directly on Level 04. The same iteration patterns are now written with **`for`** loops instead of `goto` — introducing structured, counted repetition.

By the end of this level, you will be comfortable with:
- Writing `for` loops with ascending and descending counters
- Using a loop variable as an accumulator
- Stepping through a range with `i++`, `i--`, or `i += n`
- Combining `for` loops with `if` to filter or transform values
- Processing user input digit-by-digit inside a `for` loop

---

## Problems

### Group 1 — Basic Counting Loops

| # | Problem | Pattern | Key Technique |
|---|---------|---------|---------------|
| [01](./01_Print_1to5.c) | Print 1 to 5 | Ascending `for` | `for (int i = 1; i <= 5; i++)` |
| [02](./02_Print_5to1.c) | Print 5 to 1 | Descending `for` | `for (int i = 5; i >= 1; i--)` |

---

### Group 2 — Running Totals

| # | Problem | Pattern | Key Technique |
|---|---------|---------|---------------|
| [03](./03_Sum_of_1to5.c) | Sum of 1 to 5 | Accumulator | `sum = sum + i`, ascending loop |
| [04](./04_Sum_of_6to1.c) | Sum of 6 to 1 | Accumulator | `sum = sum + i`, descending loop |

---

### Group 3 — Filtered Output Inside a Loop

| # | Problem | Condition | Key Technique |
|---|---------|-----------|---------------|
| [05](./05_Print_odd_1to9.c) | Print odd numbers 1 to 9 | Skip evens | `i++` inside loop body |
| [06](./06_Two_digit_odd_below20.c) | Print two-digit odd numbers below 20 | `i` from 11, step by 2 | Range 11–19, `i++` after print |
| [07](./07_Two_digit_odd_sumofdigits_7.c) | Print two-digit odd numbers whose digit sum is 7 | `(x+y) == 7` | Extract digits, `i++` to skip evens |
| [08](./08_Two_digit_even_sumofdigits_6.c) | Print two-digit even numbers whose digit sum is 6 | `(x+y) == 6` | Extract digits, `i++` to stay on evens |

---

### Group 4 — Filtered Sums Inside a Loop

| # | Problem | Condition | Key Technique |
|---|---------|-----------|---------------|
| [09](./09_Sum_of_twodigit_whose_onedigit_5.c) | Sum two-digit numbers whose ones digit is 5 | `i` = 15, 25, … 95 | `i += 10` step pattern |
| [10](./10_Sum_of_twodigit_odd_whose_tendigit_7.c) | Sum two-digit odd numbers whose tens digit is 7 | `i` = 71, 73, … 79 | `i += 2` over 70s range |

---

### Group 5 — User Input and Digit Manipulation

| # | Problem | Pattern | Key Technique |
|---|---------|---------|---------------|
| [11](./11_Total_digits.c) | Count digits in a user-entered number | Digit strip loop | `x = x/10`, break with `i = 20` |
| [12](./12_Sum_of_digits.c) | Sum digits of a user-entered number | Digit strip loop | `sum = sum + (x%10)` |
| [13](./13_Reverse_the_number.c) | Reverse a user-entered number | Build reversed value | `sum = (sum + (x%10)) * 10` |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| `for` loop structure | 01 – 13 |
| Ascending counter | 01, 03, 05, 06 |
| Descending counter | 02, 04 |
| Running total accumulator | 03, 04, 09, 10 |
| Manual step control (`i++`, `i += 2`, `i += 10`) | 05 – 10 |
| `if` condition inside a `for` loop | 07, 08 |
| User input with `scanf` | 11 – 13 |
| Digit stripping loop (`x = x/10`) | 11, 12, 13 |
| Reverse number construction | 13 |

---

## How to Run

```bash
gcc 01_Print_1to5.c -o out.exe
out.exe
```

Replace the filename with any `.c` file in this folder.