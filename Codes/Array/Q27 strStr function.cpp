def isSubstring(s1, s2):
	l1= len(s1)
	l2 = len(s2)

	for i in range(l1-l2+1):

		for j in range(l2):
			if(s2[i+j] != s1[j]):
				break

		if(j+1 == M):
			return i

	return -1

#driver code
if __name__ == '__main__':
 s1 = "dyge" 
 s2 = "studygeeks"
 res = isSubstring(s1,s2)
 if(res == -1):
 	