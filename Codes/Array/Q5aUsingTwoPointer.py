def NumberOfTriangles(array):
    n = len(array)
    array.sort()
    print(array)
    count = 0
    for i in range(n-1,0,-1):
        l = 0  # This is the beginning pointer.
        r = i - 1  # this is the pointer just before the end pointer.
        while l < r:
            if array[l] + array[r] > array[i]:
                count += r - l  # for explanation of this if forget must see the video again.
                r = r-1 # Checking for more values by decreasing the 2nd last pointer.

            else:
                l+=1 # If not found result then increasing the value of the starting pointer
    print("Number of possible Triangles: ",count)
        
array = [4, 6, 3, 7]
NumberOfTriangles(array)

# [a,b,c,d]
# 1< 5> 2 <4>3
# def findA(arr):
#     n=len(arr)
#     mid=n//2+1
#     for i in range(0,n):+
#         if a[i]>a[i+1]:
#             a[i+1],a[i]=a[i],a[i+1]
#         if i+1<n:
#             if a[i]<a[i+1]:
#                 a[i+1],a[i]=a[i],a[i+1]
# array = [2,3,4,5,6,8,9]
# findA(array)