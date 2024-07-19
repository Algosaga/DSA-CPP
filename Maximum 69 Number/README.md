# Maximum 69 Number

## Description

This repository contains a C++ solution to the problem of maximizing a number by changing at most one digit from `6` to `9`. The problem is a common Leetcode and interview question and tests understanding of digit manipulation and integer operations.

## Problem Statement

You are given a positive integer `num` that contains only the digits `6` and `9`. Your task is to find the maximum number possible by changing at most one digit from `6` to `9`. Return the maximum number that can be obtained.

## Explanation

1. Digit Extraction:

The digits of the number are extracted and stored in a vector by repeatedly taking the remainder of num when divided by 10. This process continues until num becomes 0.

2. Reversing Digits:

The digits are reversed to restore their original order since they were initially extracted in reverse.

3. Modification:

Traverse the digits to find the first occurrence of the digit 6 and change it to 9. This change is made to maximize the number.

4. Reconstruction:

The modified digits are used to reconstruct the number. The number is built by iterating through the digits and adjusting the value of maxNum accordingly.
