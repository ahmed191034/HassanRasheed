# GPA Calculator (C)

A command-line CGPA calculator written in C. Takes per-semester credit hours and GPA for up to 8 semesters, computes the cumulative GPA, and maps it to a letter grade band.

**Tools:** C

---

## What It Does

1. `Credit_hour()` — prompts for credit hours across up to 8 semesters and prints the total.
2. `Gpa_Calculator()` — prompts for GPA per semester (enter 0 for semesters not yet completed) and the number of semesters completed so far, computes the average, and prints a letter grade (`A++` down to a fail message) based on the result.

## How to Build & Run

```bash
gcc Gpa_Calculator.c -o gpa_calculator
./gpa_calculator
```

(A compiled `.exe` was previously committed alongside the source — removed, since build artifacts shouldn't live in source control. Compile locally with the command above instead.)

## Known Issues

Left visible rather than silently fixed, since this reflects the actual state of the code:

- The GPA average is always divided by all 8 semester entries' worth of prompts rather than stopping at the semester count entered — always answer all 8 prompts (using `0` for future semesters) to get a correct average.
- Two grade bands (`2.76–3.0`) are duplicated in the `if`/`else if` chain — the second is unreachable dead code.
- `Credit_hour()`'s eighth prompt writes into variable `g` instead of `h` (a copy-paste artifact), so the 7th and 8th semester credit hours are combined rather than tracked separately.

## What I'd Add Next

- Fix the semester-count bug so `Total` divides only by completed semesters
- Fix the `g`/`h` variable bug in `Credit_hour()`
- Replace the fixed 8-semester prompt structure with a loop driven by the semester count the user enters

## Contact

**Muhammad Ahmed Jawaid**
[LinkedIn](https://www.linkedin.com/in/m-ahmed-jawaid-416662253/) · ahmedjawaid513@outlook.com
