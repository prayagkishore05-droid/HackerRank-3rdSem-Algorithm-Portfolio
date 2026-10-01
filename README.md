
# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

| Details | Information |
|---|---|
| **Student Name** | Prayag Kishore |
| **Student ID / USN** | R25EF198 |
| **Program** | B.Tech Computer Science & Engineering |
| **Semester** | 3rd Semester |
| **Programming Language** | C++ |
| **HackerRank Profile** | [Prayag Kishore - HackerRank](https://www.hackerrank.com/profile/prayagkishore05) |
| **GitHub Repository** | [HackerRank-3rdSem-Algorithm-Portfolio](https://github.com/prayagkishore05-droid/HackerRank-3rdSem-Algorithm-Portfolio) |

---

## About This Portfolio

This repository contains my solutions to five mandatory HackerRank algorithmic problems completed as part of the 3rd Semester Computer Science and Engineering studio activity.

The problems cover important algorithmic techniques including arrays, minimum and maximum tracking, counting, insertion sort, binary search, sorting, and greedy algorithms.

The main objectives of this portfolio are:

- Develop algorithmic problem-solving skills.
- Implement solutions using C++.
- Understand and apply efficient algorithms.
- Analyze Time and Space Complexity.
- Practice sorting, searching, and greedy techniques.
- Maintain a structured public GitHub coding portfolio.
- Demonstrate successful HackerRank problem-solving progress.

---

## Problems Completed

| No. | Problem | Technique | Time Complexity | Auxiliary Space |
|---|---|---|---|---|
| 1 | [Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem) | Minimum/Maximum Tracking | O(N) | O(1) |
| 2 | [Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem) | Maximum and Counting | O(N) | O(1) |
| 3 | [Insertion Sort - Part 1](https://www.hackerrank.com/challenges/insertionsort1/problem) | Insertion Sort / Shifting | O(N²) | O(1) |
| 4 | [Binary Search / Intro to Tutorial Challenges](https://www.hackerrank.com/challenges/tutorial-intro/problem) | Binary Search | O(log N) | O(1) |
| 5 | [Mark and Toys](https://www.hackerrank.com/challenges/mark-and-toys/problem) | Sorting + Greedy | O(N log N) | O(log N) |

---

# 1. Mini-Max Sum

### Problem Summary

Given five positive integers, calculate the minimum and maximum values that can be obtained by summing exactly four of the five integers.

### Approach

Instead of calculating all possible combinations, the program calculates the total sum of all five numbers.

The minimum sum is obtained by excluding the largest number.

The maximum sum is obtained by excluding the smallest number.

Therefore:

```text
Minimum Sum = Total Sum - Maximum Element
Maximum Sum = Total Sum - Minimum Element
