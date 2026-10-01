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
```

## Complexity

- Time Complexity: O(N)
- Space Complexity: O(1)

## Alternative Approach

The numbers can be sorted and the first four and last four numbers can be added. However, sorting takes O(N log N), so finding the minimum, maximum, and total in one pass is more efficient.

---

# 2. Birthday Cake Candles

## Problem

Find how many candles have the maximum height.

## Approach

Traverse the array and keep track of the maximum height and the number of times it occurs.

If a larger height is found, update the maximum and reset the count.

If the height is equal to the maximum, increase the count.

## Complexity

- Time Complexity: O(N)
- Space Complexity: O(1)

## Alternative Approach

The array could be sorted first and the largest value could then be counted. This would take O(N log N), so a single traversal is more efficient.

---

# 3. Insertion Sort - Part 1

## Problem

Insert the last element of the array into its correct position in the sorted portion of the array.

## Approach

Store the last element.

Compare it with the elements before it.

Move larger elements one position to the right until the correct position is found.

Then insert the stored element.

## Complexity

- Best-case Time Complexity: O(N)
- Worst-case Time Complexity: O(N²)
- Space Complexity: O(1)

## Alternative Approach

A complete sorting function could be used, but the problem is designed to demonstrate the insertion process, so manual shifting is used.

---

# 4. Binary Search

## HackerRank Problem

[Intro to Tutorial Challenges](https://www.hackerrank.com/challenges/tutorial-intro/problem)

## Problem

Find the position of a target value in a sorted array using binary search.

## Approach

Binary search checks the middle element of the search range.

If the target is equal to the middle element, its position is returned.

If the target is larger, search the right half.

If the target is smaller, search the left half.

The search continues until the element is found.

## Complexity

- Time Complexity: O(log N)
- Space Complexity: O(1)

## Alternative Approach

Linear search can check every element one by one, but it takes O(N) time. Binary search is faster for sorted arrays.

---

# 5. Mark and Toys

## Problem

Find the maximum number of toys that can be purchased with a given amount of money.

## Approach

Sort all toy prices in ascending order.

Buy the cheapest toys first while staying within the available budget.

This allows the maximum number of toys to be purchased.

## Complexity

- Time Complexity: O(N log N)
- Space Complexity: O(log N)

## Alternative Approach

A frequency-based approach can be used when the price range is small, but sorting provides a simple solution for general input.

---

# Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
└── 05-Mark-and-Toys/
    └── solution.cpp
```

---

# HackerRank Links

1. [Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem)
2. [Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)
3. [Insertion Sort - Part 1](https://www.hackerrank.com/challenges/insertionsort1/problem)
4. [Intro to Tutorial Challenges](https://www.hackerrank.com/challenges/tutorial-intro/problem)
5. [Mark and Toys](https://www.hackerrank.com/challenges/mark-and-toys/problem)

---

# Complexity Summary

| Problem | Time Complexity | Space Complexity |
|---|---|---|
| Mini-Max Sum | O(N) | O(1) |
| Birthday Cake Candles | O(N) | O(1) |
| Insertion Sort - Part 1 | O(N²) | O(1) |
| Binary Search | O(log N) | O(1) |
| Mark and Toys | O(N log N) | O(log N) |

---

# Learning Outcomes

Through this activity, I learned and practiced:

- C++ programming
- Array traversal
- Minimum and maximum tracking
- Counting
- Insertion Sort
- Binary Search
- Sorting
- Greedy algorithms
- Time complexity
- Space complexity
- HackerRank problem solving
- GitHub repository management

---

# Evidence of Completion

The five algorithm problems were solved and submitted on HackerRank.

The accepted submission screenshots can be added to the repository as evidence.

Recommended folder:

```text
evidence/
├── 01-Mini-Max-Sum-Accepted.png
├── 02-Birthday-Cake-Candles-Accepted.png
├── 03-Insertion-Sort-Part-1-Accepted.png
├── 04-Binary-Search-Accepted.png
└── 05-Mark-and-Toys-Accepted.png
```

---

# Reflection

This activity helped me improve my understanding of algorithms and problem solving. I learned how to choose efficient approaches for different programming problems.

The Mini-Max Sum and Birthday Cake Candles problems helped me understand single-pass array traversal. Insertion Sort helped me understand how elements are shifted to their correct positions. Binary Search showed how a sorted array can be searched efficiently by repeatedly dividing the search range. Mark and Toys helped me understand sorting and greedy algorithms.

I also learned the importance of analyzing time and space complexity when solving programming problems. Uploading the solutions to GitHub helped me organize my work and build a coding portfolio.

Overall, this activity improved my C++ programming, algorithmic thinking, problem-solving skills, and understanding of efficient algorithms.

---

# Conclusion

This portfolio contains five HackerRank algorithm solutions implemented in C++.

The problems demonstrate important concepts including arrays, sorting, searching, counting, insertion sort, binary search, greedy algorithms, and complexity analysis.

The solutions and supporting information are organized in this GitHub repository as part of my 3rd Semester Computer Science and Engineering activity.

---

## Status

**5 / 5 Problems Completed**

**Language:** C++

**Semester:** 3rd Semester

**Student:** Prayag Kishore
