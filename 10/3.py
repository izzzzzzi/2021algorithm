import math

n = int(input())

def SetBit(n):
	return int(math.log2(n&-n)+1)

def UnsetBit(n):
	if (n == 0):
		return 1
	if ((n & (n + 1)) == 0):
		return n

	pos = SetBit(~n)
	return ((1 << (pos - 1)) | n)

print(UnsetBit(n))
