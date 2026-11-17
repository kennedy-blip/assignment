# C++ Code Repository

This repository contains several C++ programs demonstrating various algorithms and data structures:

## Programs

### 1. **array.c++**
Implements a heap sort algorithm to sort an array of integers.

### 2. **foodrating.c++**
Implements a food rating system with the following features:
- Stores food names, their cuisines, and ratings
- Maintains foods sorted by cuisine, rating (descending), and name (ascending)
- Supports changing food ratings
- Can find the highest-rated food for a given cuisine

### 3. **palindrone.c++**
Checks if an integer is a palindrome (reads the same forwards and backwards).

### 4. **reverse.c++**
Reverses an integer's digits.

## Building and Running

All programs can be compiled with g++ and run directly:

```bash
# Compile all programs
g++ -o array array.c++
g++ -o foodrating foodrating.c++
g++ -o palindrone palindrone.c++
g++ -o reverse reverse.c++

# Run the programs
./array
./foodrating
./palindrone
./reverse
```

## Usage

Each program demonstrates a specific algorithmic concept:
- **array.c++**: Heap sort implementation
- **foodrating.c++**: Data structure for food rating management
- **palindrone.c++**: Palindrome number checking
- **reverse.c++**: Integer digit reversal

## Testing

Each program includes a `main()` function that demonstrates its functionality with sample inputs.

## Notes

- All programs are written in C++11
- The code follows standard C++ conventions
- Each program is self-contained and can be compiled and run independently