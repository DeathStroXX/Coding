def bubbleSort(list):
    for i in range( len(list)-1, 0, -1):
        for j in range(i):
            if(list[j]> list[j+1]):
                temp = list[j]
                list[j] =list[j+1]
                list[j+1] = temp

    return list

if __name__  == '__main__':
    array = [int(x) for x in input("Provide the elements of Array:").split()]
    sortedList = bubbleSort(array)
    print(sortedList)
