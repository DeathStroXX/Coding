# Ques.23a.Finding the length of longest common prefix in a given set of strings. 

def CountPrefixUntill(str1, str2):
	result= ""						#Here we are taking an empty string for string the value of result

	n1= len(str1)
	n2= len(str2)

	i=0
	j=0
	while(i<n1 and j<n2):
		if(str1[i]!=str2[j]):
			break
		else:
			result+= str1[i]
			i+=1
			j+=1
	return result

def CommonPrefix(arr,n):
	prefix = arr[0]
	for i in range(1,n):
		prefix = CountPrefixUntill(prefix,arr[i])
	return prefix

#driver code
if __name__ =="__main__":
	arr = ["studygeek","study","stud","studygeekcompany","studydsa"]
	n = len(arr)
	result = CommonPrefix(arr, n) 			#this result variablr will store the commonprefix
	length_result = len(result) 			#But we are asked to give the length of the longest prefix

	if(length_result!=0):
		print("The prefix length is:",length_result)
		print(result)

	else:
		print("No common prefix exist")

		