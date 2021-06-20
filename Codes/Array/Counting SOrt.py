def CountingSort(array):
	size = len(array)
	output = [0]* size


#driver code
if __name__ == '__main__':
	data = [4,2,2,3,3,4,8]
	CountingSort(data)
	print("Sorted Array in ascending order: ")
	print(data)