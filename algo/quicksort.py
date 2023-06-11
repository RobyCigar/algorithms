def quicksort(arr):
    if len(arr) <= 1:
        return arr
    else:
        pivot = arr[0]
        smaller = [x for x in arr[1:] if x <= pivot]
        greater = [x for x in arr[1:] if x > pivot]
        return quicksort(smaller) + [pivot] + quicksort(greater)


# Test the algorithm
arr = [64, 25, 12, 22, 11]
print("Original array:", arr)
sorted_arr = quicksort(arr)
print("Sorted array:", sorted_arr)
