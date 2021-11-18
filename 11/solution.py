# 배열의 모든 왼쪽 값은 자신의 값보다 작고, 모든 오른쪽 값은 자신의값보다 큰 항목 찾기 프로그램 작성

arr = list(map(int, input().split()))
n = len(arr)

def findElement(arr, n):

	leftMax = [None] * n
	leftMax[0] = arr[0]

	for i in range(1, n):
		leftMax[i] = max(leftMax[i-1], arr[i-1])

	rightMin = [None]*n
	rightMin[n-1] = arr[n-1]

	for i in range(n-2, -1, -1):
		rightMin[i] = min(rightMin[i+1], arr[i])
	for i in range(1, n-1):
		if leftMax[i-1] <= arr[i] and arr[i] <= rightMin[i+1]:
			return i

	return -1

print("Index of the element is", findElement(arr, n))
