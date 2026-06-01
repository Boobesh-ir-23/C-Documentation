# Level 01 — Arithmetic & Digit Manipulation

This level covers the foundational building blocks of C: arithmetic operators, the modulo operation, and digit-level number manipulation — all **without using any conditional statements (`if`/`else`)**.

By the end of this level, you will be comfortable with:
- All five arithmetic operators (`+`, `-`, `*`, `/`, `%`)
- Isolating individual digits of a number using division and modulo
- Reversing and swapping digits purely through arithmetic
- Branchless conditional logic using `%` and multiplication tricks
- The digital root algorithm using `goto`

---

## Problems

### Group 1 — Basic Arithmetic Operators

| # | Problem | Key Technique |
|---|---------|---------------|
| [01](./01_Add_2_to_Given_Number.c) | Add 2 to a given number | `x + 2` |
| [02](./02_Subtract_5_from_Given_Number.c) | Subtract 5 from a given number | `x - 5` |
| [03](./03_Multiply_Given_Number_by_3.c) | Multiply a given number by 3 | `x * 3` |
| [04](./04_Divide_Given_Number_by_6.c) | Divide a given number by 6 | `x / 6` |
| [05](./05_Print_Remainder_When_Divided_by_8.c) | Print remainder when divided by 8 | `x % 8` |

---

### Group 2 — Digit Extraction

Isolating individual digits using integer division (`/`) and modulo (`%`).

| # | Problem | Key Technique |
|---|---------|---------------|
| [06](./06_Print_Ones_Digit_of_Two_Digit_Number.c) | Ones digit of a 2-digit number | `x % 10` |
| [07](./07_Print_Tens_Digit_of_Two_Digit_Number.c) | Tens digit of a 2-digit number | `x / 10` |
| [08](./08_Print_Ones_Digit_of_Three_Digit_Number.c) | Ones digit of a 3-digit number | `x % 10` |
| [09](./09_Print_Hundreds_Digit_of_Three_Digit_Number.c) | Hundreds digit of a 3-digit number | `x / 100` |
| [10](./10_Print_Tens_Digit_of_Three_Digit_Number.c) | Tens digit of a 3-digit number | `(x / 10) % 10` |

---

### Group 3 — Sum of Digits

| # | Problem | Key Technique |
|---|---------|---------------|
| [11](./11_Sum_of_Digits_of_Two_Digit_Number.c) | Sum of digits of a 2-digit number | `(x/10) + (x%10)` |
| [12](./12_Sum_of_Digits_of_Three_Digit_Number.c) | Sum of digits of a 3-digit number | `(x/100) + (x/10)%10 + (x%10)` |

---

### Group 4 — Number Reversal

| # | Problem | Key Technique |
|---|---------|---------------|
| [13](./13_Reverse_Two_Digit_Number.c) | Reverse a 2-digit number | Swap ones & tens using `%` and `/` |
| [14](./14_Reverse_Three_Digit_Number.c) | Reverse a 3-digit number | Reconstruct in reverse positional order |

---

### Group 5 — Digit Swapping

| # | Problem | Key Technique |
|---|---------|---------------|
| [15](./15_Swap_Ones_and_Tens_of_Four_Digit_Number.c) | Swap ones & tens digits of a 4-digit number | Strip, swap, and reconstruct |
| [16](./16_Swap_Thousands_and_Hundreds_of_Four_Digit_Number.c) | Swap thousands & hundreds digits of a 4-digit number | Isolate upper two digits and swap positions |

---

### Group 6 — Digit Replacement

Replacing a specific digit of a number with a fixed value.

| # | Problem | Key Technique |
|---|---------|---------------|
| [17](./17_Set_Ones_Digit_to_0_in_Two_Digit_Number.c) | Set ones digit to 0 in a 2-digit number | `(x / 10) * 10` |
| [18](./18_Set_Tens_Digit_to_1_in_Two_Digit_Number.c) | Set tens digit to 1 in a 2-digit number | `10 + (x % 10)` |
| [19](./19_Set_Ones_Digit_to_2_in_Three_Digit_Number.c) | Set ones digit to 2 in a 3-digit number | Strip ones, add `2` |
| [20](./20_Set_Tens_Digit_to_0.c) | Set tens digit to 0 in a 3-digit number | Strip tens, preserve rest |

---

### Group 7 — Branchless Conditionals (Without `if`)

Applying a subtraction of 5 **only when a condition is true** — without using any `if` statement. The trick: `condition % 2` returns `1` (true) or `0` (false), which is then multiplied by 5.

| # | Problem | Condition | Key Technique |
|---|---------|-----------|---------------|
| [21](./21_Subtract_5_if_Number_is_Odd_Without_If.c) | Subtract 5 if the number is odd | `x % 2 == 1` | `x - (x%2) * 5` |
| [22](./22_Subtract_5_if_Tens_Digit_is_Odd_Without_If.c) | Subtract 5 if the tens digit is odd | `(x/10) % 2 == 1` | Isolate tens → apply trick |
| [23](./23_Subtract_5_if_Digit_Sum_is_Odd_Without_If.c) | Subtract 5 if the digit sum is odd | `(ones + tens) % 2 == 1` | Sum digits first, then apply trick |
| [24](./24_Subtract_5_if_Ones_and_Hundreds_are_Odd_Without_If.c) | Subtract 5 if **both** ones and hundreds digits are odd | Both digits odd simultaneously | `(m%2) * (n%2) * 5` — multiplies two conditions |

---

### Group 8 — Digital Root

| # | Problem | Key Technique |
|---|---------|---------------|
| [25](./25_Digital_Root_Sum_Until_Single_Digit.c) | Reduce a number to its digital root | Repeatedly sum digits using `goto` until result is single-digit |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| Arithmetic operators (`+` `-` `*` `/` `%`) | 01 – 05 |
| Digit extraction via `/` and `%` | 06 – 10 |
| Multi-digit summation | 11 – 12 |
| Number reversal by reconstruction | 13 – 14 |
| Digit swapping | 15 – 16 |
| Digit replacement | 17 – 20 |
| Branchless logic (`%` + multiplication) | 21 – 24 |
| `goto`-based loop + convergence | 25 |

---

## How to Run

```bash
gcc 01_Add_2_to_Given_Number.c -o add
./add
```

Replace the filename with any `.c` file in this folder.
