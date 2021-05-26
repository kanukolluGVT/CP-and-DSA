def binary_search(list,item):
    low=0
    high=len(list)-1
    #mid=(low+high)//2
    while low<=high:
        mid=(low+high)//2
        if list[mid]==item:
            return mid
        if list[mid]>item:
            high-=1
        else:
            low+=1
    return None

my_list=[1,2,3,5,6,9]
print(binary_search(my_list,6))