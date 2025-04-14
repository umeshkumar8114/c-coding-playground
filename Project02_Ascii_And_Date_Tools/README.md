
# Assignment 2 - COP 3514

This assignment contains three small C programs that demonstrate fundamental programming concepts such as input validation, conditionals, arithmetic operations, nested loops, and ASCII character handling.

## 🔤 1. Character Lookup

**File:** `character_lookup.c`  
**Description:**  
Prompts the user to enter an integer between 32 and 126 and displays the corresponding ASCII character.

**Concepts Used:**  
- Input validation using `while` loops  
- ASCII table lookup using `char` type  
- Formatted I/O with `printf` and `scanf`

**Compile and Run:**  
```bash
gcc character_lookup.c -o character_lookup
./character_lookup
```

---

## 📆 2. Future Dates

**File:** `future_dates.c`  
**Description:**  
Calculates the future day of the week based on the current day (0 = Sunday, ..., 6 = Saturday) and a number of days ahead entered by the user.

**Concepts Used:**  
- Input validation with loops  
- `switch` statements for weekday names  
- Modulo arithmetic for date cycling  

**Compile and Run:**  
```bash
gcc future_dates.c -o future_dates
./future_dates
```

---

## 📐 3. Pythagorean Triple Finder

**File:** `pythagorean_triple.c`  
**Description:**  
Finds and displays all Pythagorean triples up to a user-defined maximum hypotenuse length using a brute-force method with nested loops.

**Concepts Used:**  
- Triple nested loops  
- Use of `pow()` function from `math.h`  
- Conditional logic for Pythagorean theorem  
- Basic performance tracking (counting valid triples)

**Compile and Run:**  
```bash
gcc pythagorean_triple.c -lm -o pythagorean_triple
./pythagorean_triple
```

---

## 🛠 Additional Notes

- All programs follow proper formatting and include comments for readability.
- Input validation is used where applicable to ensure robustness.

