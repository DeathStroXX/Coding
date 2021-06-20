# Ques.24.Roman to integer conversion
def romanToInteger(Roman):
	valueDiction ={   						#intializing the dictionary to store key value pair 
	'I':1,
	'V':5,
	'X':10,
	'L':50,
	'C':100,
	'D':500,
	'M':1000
	}
	preChar=0
	ans=0
	n= len(Roman)
	for i in range(n-1,-1,-1): 				#Traversing the given from right to left 
		
		if(preChar<=valueDiction[Roman[i]]): #If previous character is less than current character 
			ans+= valueDiction[Roman[i]]#Then we add the value of the character from dictionary in the answer
			
		else:								#If previous character is greater than current character.
			ans-= valueDiction[Roman[i]]	   #Then we add the value of the character from dictionary in the answer
		prechar= valueDiction[Roman[i]]		# Always remember use [] while accessing Dic
	
	return ans 

if __name__ == '__main__':
	GivenRoman='MCMIV'
	n= len(GivenRoman)
	result=romanToInteger(GivenRoman)
	
	print(GivenRoman,"-",result)
# romanToInteger('MCMIV')


