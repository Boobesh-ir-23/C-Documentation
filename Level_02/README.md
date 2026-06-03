# Level 02 — Boolean & Comparison Logic

This level focuses on **relational operators** and how C evaluates comparisons as `1` (true) or `0` (false). Every problem prints either `1` or `0` — no `if` statements, no text — just the raw boolean result of a condition.

By the end of this level, you will be comfortable with:
- All relational operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- How C treats comparison results as integers (`1` or `0`)
- Applying comparisons to extracted digits, not just whole numbers

---

## Problems

### Group 1 — Comparing a Number to 50

| # | Problem | Operator | Key Technique |
|---|---------|----------|---------------|
| [01](./01_Print_1_if_Number_Equals_50.c) | Print 1 if number equals 50 | `==` | `y = (x == 50)` |
| [02](./02_Print_0_if_Number_Equals_50.c) | Print 0 if number equals 50 | `!=` | `y = (x != 50)` |
| [03](./03_Print_1_if_Number_Less_Than_50.c) | Print 1 if number is less than 50 | `<` | `y = (x < 50)` |
| [04](./04_Print_0_if_Number_Less_Than_50.c) | Print 0 if number is less than 50 | `>=` | `y = (x >= 50)` |
| [05](./05_Print_1_if_Number_Less_Than_or_Equal_to_50.c) | Print 1 if number is less than or equal to 50 | `<=` | `y = (x <= 50)` |
| [06](./06_Print_1_if_Number_Greater_Than_or_Equal_to_50.c) | Print 1 if number is greater than or equal to 50 | `>=` | `y = (x >= 50)` |

---

### Group 2 — Comparing Digits of a Two-Digit Number

| # | Problem | Operator | Key Technique |
|---|---------|----------|---------------|
| [07](./07_Print_1_if_Tens_and_Ones_Digits_are_Identical.c) | Print 1 if tens and ones digits are identical | `==` | `(x/10) == (x%10)` |
| [08](./08_Print_0_if_Tens_and_Ones_Digits_are_Identical.c) | Print 0 if tens and ones digits are identical | `!=` | `(x/10) != (x%10)` |
| [09](./09_Print_1_if_Ones_Digit_Less_Than_Tens_Digit.c) | Print 1 if ones digit is less than tens digit | `<` | `(x%10) < (x/10)` |
| [10](./10_Print_1_if_Ones_Digit_Greater_Than_Tens_Digit.c) | Print 1 if ones digit is greater than tens digit | `>` | `(x%10) > (x/10)` |
| [11](./11_Print_1_if_Ones_Digit_Less_Than_or_Equal_to_Tens_Digit.c) | Print 1 if ones digit is less than or equal to tens digit | `<=` | `(x%10) <= (x/10)` |
| [12](./12_Print_1_if_Ones_Digit_Greater_Than_or_Equal_to_Tens_Digit.c) | Print 1 if ones digit is greater than or equal to tens digit | `>=` | `(x%10) >= (x/10)` |

---

### Group 3 — Comparing Digits of a Four-Digit Number

| # | Problem | Key Technique |
|---|---------|---------------|
| [13](./13_Print_1_if_Ones_and_Tens_are_Same_in_Four_Digit_Number.c) | Print 1 if ones and tens digits are the same | `(x%10) == ((x/10)%10)` |
| [14](./14_Print_1_if_First_Two_and_Last_Two_Digits_are_Same.c) | Print 1 if first two and last two digits are the same | `(x/100) == (x%100)` |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| Equality & inequality (`==`, `!=`) | 01 – 02, 07 – 08, 13 – 14 |
| Less than / greater than (`<`, `>`) | 03 – 04, 09 – 10 |
| Less/greater than or equal (`<=`, `>=`) | 05 – 06, 11 – 12 |
| Digit extraction before comparison | 07 – 14 |

---

## How to Run

```bash
gcc 01_Print_1_if_Number_Equals_50.c -o out.exe
out.exe
```

Replace the filename with any `.c` file in this folder.
