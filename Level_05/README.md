# Level 05 — For Loops

This level builds directly on Level 04. The same iteration patterns are now written with **`for`** loops instead of `goto` — introducing structured, counted repetition.

By the end of this level, you will be comfortable with:
- Writing `for` loops with ascending and descending counters
- Using a loop variable as an accumulator
- Stepping through a range with `i++`, `i--`, or `i += n`
- Combining `for` loops with `if` to filter or transform values
- Processing user input digit-by-digit inside a `for` loop
- Checking primality and counting digit properties with loops
- Using nested `for` loops for repeated sub-computations

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
| [14](./14_Interchange_firstlast_digits.c) | Interchange first and last digits | Power-of-10 scaling | `sum = sum * 10`, recombine digits |
| [15](./15_Sub1_if_MSB_isodd.c) | Subtract 1 from MSB if number is odd | Conditional + digit loop | Isolate MSB place value, subtract |

---

### Group 6 — Prime Checks

| # | Problem | Target | Key Technique |
|---|---------|--------|---------------|
| [16](./16_Prime_or_not.c) | Check if a number is prime | Whole number | Trial division with `for` |
| [17](./17_Prime_and_Sumofdigit_is14_or_not.c) | Check prime status and digit sum 14 | Combined conditions | Digit-sum loop + prime loop |
| [18](./18_First_two_digit_prime_or_not.c) | Check if last two digits form a prime | `x % 100` | Extract suffix, trial division |
| [19](./19_Middle_two_digits_prime_or_not.c) | Check if middle two digits form a prime | `(x/10) % 100` | Multi-digit extraction, trial division |

---

### Group 7 — Counting with Loops

| # | Problem | What it counts | Key Technique |
|---|---------|----------------|---------------|
| [20](./20_Single_digit_prime.c) | Count single-digit primes (2–9) | Primes in 2–9 | Nested `for` loops |
| [21](./21_No_of_odd_digits.c) | Count odd digits in a number | Per-digit parity | `x%10`, strip with `x/10` |
| [22](./22_Two_digit_odd.c) | Count two-digit odd values in a number | `x%100` pairs | Strip two digits at a time |
| [23](./23_Single_digit_perfect_square.c) | Count single-digit perfect squares in a number | Digits 1, 4, 9 | Digit strip + match |
| [24](./24_Two_digit_perfect_sqaure.c) | Count two-digit perfect squares in a number | `j*j == temp` | Nested loop over 1–9 |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| `for` loop structure | 01 – 24 |
| Ascending counter | 01, 03, 05, 06 |
| Descending counter | 02, 04 |
| Running total accumulator | 03, 04, 09, 10 |
| Manual step control (`i++`, `i += 2`, `i += 10`) | 05 – 10 |
| `if` condition inside a `for` loop | 07, 08, 15 – 24 |
| User input with `scanf` | 11 – 24 |
| Digit stripping loop (`x = x/10`) | 11 – 15, 21 – 24 |
| Reverse number construction | 13 |
| First/last digit interchange | 14 |
| Prime check via trial division | 16 – 19 |
| Nested `for` loops | 20, 24 |
| Digit property counting | 21 – 24 |

---

## How to Run

```bash
gcc 01_Print_1to5.c -o out.exe
out.exe
```

Replace the filename with any `.c` file in this folder.