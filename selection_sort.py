def find_smallest(arr):
    smallest=arr[0]
    smallest_idx=0
    for i in range(1,len(arr)):
        if arr[i]<smallest:
            smallest=arr[i]
            smallest_idx=i
    return smallest_idx

def selection_sort(arr):
    new_arr=[]
    for i in range(len(arr)):
        smallest=find_smallest(arr)
        new_arr.append(arr.pop(smallest))
    return new_arr
print(selection_sort([5,4,1,7,9]))

