list = [][]
i = int(input("Enter the first number: "))
j = int(input("Enter the second number: "))
for row in range(i):
	for col in range(j):
		list[i][j] = i*j
print(list)

