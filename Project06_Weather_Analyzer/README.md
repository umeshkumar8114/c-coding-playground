
# Assignment 6 - COP 3514

Reads temperature and rainfall data from text files and analyzes it using structs.

## 1. weatherStats.c
Processes monthly high/low temperatures and rainfall data from external files.
- Stores data in an array of structs
- Calculates and displays:
  - Highest & lowest temperatures
  - Highest & lowest rainfall
  - Total and average annual rainfall

**Required Input Files:**  
- `hightemps.txt`  
- `lowtemps.txt`  
- `rainfall.txt`

## Compile and Run:
```bash
gcc weatherStats.c -o weatherStats
./weatherStats
```
Ensure the three `.txt` files are in the same directory when running the program.
