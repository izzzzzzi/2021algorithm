number = int(input())

def solution(num):
    answer = ["Even", "Odd"][num & 1]
    return answer
    
print(solution(number))
