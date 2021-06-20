"""  Ques. 26 Remove the duplicate character from the given string without spaces lec 8 """ 



def RemoveDuplicate(string):
	array =[]
	array[:0]=string

	hash_map = [0]*256
	start=0  			#Starting index
	resultant = 0		#ending index
	temp=''				#taking an empty string
	size = len(array)

	while(start != size):
		temp = array[start]
		if(hash_map[ord(temp)]==0):
			hash_map[ord(temp)] =1
			array[resultant]= array[start]  #very very important line it removing duplicates-- 
			                                #--in place without using an extra space 


			resultant+=1
		start+=1
	ans = ''.join(array[0:resultant]) #here coverting list back to string
	return ans

#driver code
if __name__ == '__main__':
	string='absddbssdbyu'
	output = RemoveDuplicate(string)
	print(output)