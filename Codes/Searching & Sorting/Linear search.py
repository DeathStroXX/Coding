def linearSearch(list, key):

    for i in range(0, len(list)):

        if(list[i] == key):
            return True

    return False


if __name__ == '__main__':

    array = [int(x) for x in input("Enter the values of array separated by comma:").split()]
    key = 8
    if(linearSearch(array, key)):
        print("Key is present in the given array")
    else:
        print("Key is not present in the array")
