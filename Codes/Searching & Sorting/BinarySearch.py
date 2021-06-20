def BinarySearch(list, key):
    startIndex =0
    endIndex = len(list) -1
    while(startIndex<= endIndex):
        mid = (startIndex + endIndex) // 2
        if(list[mid] == key):
            return True
        elif (list[mid] > key):
            endIndex = mid -1  #here we are doing mid-1 becoz we already know from line 6 that mid element is the key hence we are skipping mid.
        else:
            startIndex = mid + 1 #here we are doing mid+1 becoz we already know from line 6 that mid element is the key hence we are skipping mid.

    return True

if __name__ == '__main__':
    array = [int(x) for x in input("Enter space separeted values:").split()]
    key = int(input("Enter the key: "))
    if(BinarySearch(array,key)):
        print("Key in present in given array ")
    else:
        print("Key is not present in the given array")



