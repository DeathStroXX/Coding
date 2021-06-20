def Factorial(n):

	
	if(n ==0):
		return 1
		
	return n*Factorial(n-1)

	# print(fact)


n = int(input("Enter "));

print(Factorial(n))