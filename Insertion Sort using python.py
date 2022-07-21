def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while (j >= 0 and arr[j] > key):
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key
    print("Sorted Array: ")
    print(arr)


n = int(input("Enter Size: "))
arr = []
print("Enter Elements: ")
for i in range(0, n):
    x = int(input())
    arr.append(x)
insertionSort(arr)
