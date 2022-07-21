# searching-sorting
Searching and Sorting Algorithms in different languages.  
It also discuss about their **working principles**, **pseudo code**, **analysis of algorithms**  
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
