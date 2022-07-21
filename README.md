# searching-sorting
## Abstract
Searching and Sorting Algorithms in different programming languages. Mostly in ***C++*** & ***Python.***  
It also discusses about their ***working principles, pseudo code, analysis of algorithms.***  
## Table of Contents
- [Abstract](#abstract)
- [Introduction](#introduction)
- [Insertion Sort](#insertion-sort)
## Introduction
### Q: What is Searching?  
Searching is the approach to find out an element from a data structure.  
### Q: What is Sorting?
Sorting is the process of arranging elements of a data structure.
### Q: Are these that important to think about?
Yes! No Doubt!  
We do a lot of searching and sorting in our daily life. From searching our favourite T-shirt from drawer to searching a product in an online store. Have you ever wondered about having a sweet dish after the dinner why not erlier? Who can forget the struggle behind arranging those extra papers in exams?
## Insertion Sort
### General Working Princple
- Considers the whole array as sorted and unsorted sub-array
- Pick up the first element from unsorted sub-array
- Compare the element with the elements of sorted sub-array
- Find out the desired position
- Move all the later elements from that position to the next index
- Insert that element into that desired position.
### Pseudo Code
```
INSERTION-SORT(A)
1.  for i = 1 to A.length
2.      key = A[i]
3.      //Insert A[i] into the sorted sequence A[0 .. i - 1]
4.      j = i - 1
5.      while j >= 0 and A[j] > key
6.            A[j + 1] = A[j]
7.            j = j - 1
8.      A[j + 1] = key
```
