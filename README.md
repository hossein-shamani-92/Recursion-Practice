# Recursion Practice

A collection of C++ recursion and backtracking exercises focused on recursive problem solving, path counting, combination generation, and applying constraints.

## Description

This repository contains four C++ practice projects designed to strengthen understanding of recursion and backtracking.

The projects cover different recursive problem-solving techniques:

- **Score Path Counter** — counts the number of ways to reach a target score using moves of `2` or `3`.
- **Staircase Path Counter** — counts the number of ways to reach a target position using steps of `1` or `2`.
- **Recursive Combination Generator** — generates combinations of `k` numbers from `1` to `n` while preventing consecutive numbers and applying a specific selection rule.
- **Constrained Combination Generator** — generates combinations of `k` numbers from `1` to `n` while preventing consecutive numbers and requiring the first selected number to be `1` or the last selected number to be `n`.

These exercises helped me practice recursive branching, base cases, backtracking, state management, and constraint checking.

## Projects

### 1. Score Path Counter

This program starts from score `0` and recursively explores two possible moves:

```text
+2
+3
