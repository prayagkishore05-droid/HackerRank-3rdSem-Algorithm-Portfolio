# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

| Details | Information |
|---|---|
| **Student Name** | Prayag Kishore |
| **Student ID / USN** | R25EF198 |
| **Program** | B.Tech Computer Science & Engineering |
| **Semester** | 3rd Semester |
| **Programming Language** | C++ |
| **HackerRank Profile** | [Prayag Kishore](https://www.hackerrank.com/profile/prayagkishore05) |
| **GitHub Repository** | [HackerRank-3rdSem-Algorithm-Portfolio](https://github.com/prayagkishore05-droid/HackerRank-3rdSem-Algorithm-Portfolio) |

---

## About This Portfolio

This repository contains my solutions to five HackerRank algorithm problems completed as part of my 3rd Semester Computer Science and Engineering activity.

The problems cover arrays, sorting, searching, counting, and greedy algorithms.

## Objectives

- Improve problem-solving skills.
- Practice C++ programming.
- Understand algorithms.
- Analyze time and space complexity.
- Practice sorting and searching.
- Maintain a coding portfolio on GitHub.

---

# Problems Completed

| No. | Problem | Technique | Time Complexity | Space |
|---|---|---|---|---|
| 1 | [Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem) | Minimum and Maximum Tracking | O(N) | O(1) |
| 2 | [Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem) | Maximum and Counting | O(N) | O(1) |
| 3 | [Insertion Sort - Part 1](https://www.hackerrank.com/challenges/insertionsort1/problem) | Insertion Sort | O(N²) | O(1) |
| 4 | [Intro to Tutorial Challenges](https://www.hackerrank.com/challenges/tutorial-intro/problem) | Binary Search | O(log N) | O(1) |
| 5 | [Mark and Toys](https://www.hackerrank.com/challenges/mark-and-toys/problem) | Sorting and Greedy | O(N log N) | O(log N) |

---

# 1. Mini-Max Sum

## Problem

Given five integers, find the minimum and maximum sum that can be obtained by adding four of the five integers.

## Approach

Calculate the total sum of all numbers.

The minimum sum is obtained by removing the largest number.

The maximum sum is obtained by removing the smallest number.

```text
Minimum Sum = Total Sum - Maximum
Maximum Sum = Total Sum - Minimum

