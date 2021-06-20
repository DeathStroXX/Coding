#Q.23.b.Another approach for finding the longest common prefix
def maxLengthOfPrefix(arr,n):
	current = len(arr[0])
	for i in range(1,n):
		if(len(arr[i])<current):
			current=len(arr[i])
	return current

def CommonPrefix(arr,n):
	n1= maxLengthOfPrefix(arr,n)
	result=""
	for i in range(n1):			#here 'n1' represent number of characters of each word present in the array to be---
		current = arr[0][i]		#---traversed to be find common characters
		
		for j in range(1,n):	#Here 'j' is repersenting the index of the given array arr[indexPosition][characterPosition] at that index 
			if(arr[j][i]!=current):		#Here if this condition is true then the result which is store till now in 'result' will be printed
				return result 	#here if 
			
		result += current		#if the (i)th character is same in the (j)th indexes of the given set of strings
	return result


#driver code
if __name__ == '__main__':
	arr = ["studygeek","study","stud","studygeekcompany","studydsa"]
	n = len(arr)
	result = CommonPrefix(arr, n) 			#this result variable will store the commonprefix
	length_result = len(result) 			#But we are asked to give the length of the longest prefix

	if(length_result!=0):
		print("The prefix length is:",length_result)
		print(result)

	else:
		print("No common prefix exist")
