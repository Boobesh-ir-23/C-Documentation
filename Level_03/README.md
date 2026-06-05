# Level 03 — Conditionals

This level builds directly on Level 02. Instead of printing raw `1` or `0`, programs now use **`if`/`else`** to print human-readable output — `"Success"` when the condition holds, `"Failure"` when it doesn't.

By the end of this level, you will be comfortable with:
- Writing `if`/`else` blocks in C
- Translating a boolean condition into a string output
- Applying conditionals to both whole-number and digit-level comparisons

---

## Problems

### Group 1 — Comparing a Number to 50

| # | Problem | Condition | Output |
|---|---------|-----------|--------|
| [01](./01_Print_Success_if_Number_Equals_50.c) | Print Success if number equals 50 | `x == 50` | `"Success"` / `"Failure"` |
| [02](./02_Print_Failure_if_Number_Equals_50.c) | Print Failure if number equals 50 | `x == 50` | `"Failure"` / `"Success"` |
| [03](./03_Print_Success_if_Number_Less_Than_50.c) | Print Success if number is less than 50 | `x < 50` | `"Success"` / `"Failure"` |
| [04](./04_Print_Success_if_Number_Greater_Than_50.c) | Print Success if number is greater than 50 | `x > 50` | `"Success"` / `"Failure"` |
| [05](./05_Print_Success_if_Number_Less_Than_or_Equal_to_50.c) | Print Success if number is less than or equal to 50 | `x <= 50` | `"Success"` / `"Failure"` |
| [06](./06_Print_Success_if_Number_Greater_Than_or_Equal_to_50.c) | Print Success if number is greater than or equal to 50 | `x >= 50` | `"Success"` / `"Failure"` |

---

### Group 2 — Comparing Digits of a Number

| # | Problem | Condition | Key Technique |
|---|---------|-----------|---------------|
| [07](./07_Print_Success_if_Ones_and_Tens_Digits_are_Same.c) | Print Success if ones and tens digits are the same | `x%10 == x/10` | Extract digits, compare with `if` |
| [08](./08_Print_Failure_if_Ones_and_Tens_Digits_are_Same.c) | Print Failure if ones and tens digits are the same | `x%10 != x/10` | Inverted condition from 07 |
| [09](./09_Print_Success_if_Ones_Digit_Less_Than_Tens_Digit.c) | Print Success if ones digit is less than tens digit | `x%10 < x/10` | Digit comparison |
| [10](./10_Print_Success_if_Ones_Digit_Greater_Than_Tens_Digit.c) | Print Success if ones digit is greater than tens digit | `x%10 > x/10` | Digit comparison |
| [11](./11_Print_Success_if_Ones_Digit_Less_Than_or_Equal_to_Tens_Digit.c) | Print Success if ones digit is less than or equal to tens digit | `x%10 <= x/10` | Digit comparison |
| [12](./12_Print_Success_if_Ones_Digit_Greater_Than_or_Equal_to_Tens_Digit.c) | Print Success if ones digit is greater than or equal to tens digit | `x%10 >= x/10` | Digit comparison |
| [13](./13_Print_Success_if_Ones_and_Tens_are_Same_in_Four_Digit_Number.c) | Print Success if ones and tens digits are same in a four-digit number | `x%10 == (x/10)%10` | Tens digit extraction from multi-digit number |
| [14](./14_Print_Success_if_First_Two_and_Last_Two_Digits_are_Equal.c) | Print Success if first two and last two digits are equal | `x/100 == x%100` | Split four-digit number into halves |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| `if`/`else` basic structure | 01 – 14 |
| All relational operators (`==`, `!=`, `<`, `>`, `<=`, `>=`) | 01 – 12 |
| Digit extraction before conditional check | 07 – 14 |
| Inverted conditions (same logic, flipped output) | 07 – 08 |
| Multi-digit number decomposition | 13 – 14 |

---

## How to Run

```bash
gcc 01_Print_Success_if_Number_Equals_50.c -o out.exe
out.exe
```

Replace the filename with any `.c` file in this folder.
