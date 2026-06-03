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
| [07](./07_Print_Success_if_Ones_and_Tens_Digits_are_Same.c) | Print Success if ones and tens digits are the same | `x/10 == x%10` | Extract digits, compare with `if` |

---

## Concepts at a Glance

| Concept | Problems |
|---------|----------|
| `if`/`else` basic structure | 01 – 07 |
| All relational operators (`==`, `<`, `>`, `<=`, `>=`) | 01 – 06 |
| Digit extraction before conditional check | 07 |

---

## How to Run

```bash
gcc 01_Print_Success_if_Number_Equals_50.c -o out.exe
out.exe
```

Replace the filename with any `.c` file in this folder.
