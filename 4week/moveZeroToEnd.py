def moveZerosToEnd (arr, n):
    count = 0;
    for i in range(0, n):
        if (arr[i] != 0):
            arr[count], arr[i] = arr[i], arr[count]
            count+=1
            
def printArray(arr, n):

	for i in range(0, n):
		print(arr[i],end=" ")

arr = [6, 0, 8, 2, 3, 0, 4, 0, 1]
n = len(arr)

moveZerosToEnd(arr, n)
printArray(arr, n)
