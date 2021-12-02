arr1 = [9, 20, 28, 18, 11]
arr2 = [30, 1, 21, 17, 28]
n = len(arr1)


def solution(n, arr1, arr2):
    answer = []
    for i in range(len(arr1)):
        temp1 = bin(arr1[i] | arr2[i])[2:]
        temp2 = "0" * (n - len(temp1)) + temp1
        temp2 = temp2.replace("0", " ")
        temp2 = temp2.replace("1", "#")
        answer.append(temp2)
    return answer


print(solution(n, arr1, arr2))
