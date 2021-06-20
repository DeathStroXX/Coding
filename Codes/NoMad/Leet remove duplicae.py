def removeDuplicate(nums, val):
	numsLength = len(nums)
	count = numsLength
	for i in range(numsLength):
		if(nums[i] == val ):
			nums[i] = 0
			count -=1
	return nums


#driver
if __name__ == '__main__':
	nums=[3,2,2,3]
	val=3
	res = removeDuplicate(nums,val)
	print(res)