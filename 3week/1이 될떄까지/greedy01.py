n, k = map(int, input().split())
result = 0

while True:
    # N이 K로 나누어 떨어지는 수가 될 때까지 1씩 빼기
    target = (n // k) * k # K로 나누어 떨어지는 수
    result += (n - target) # target 까지 가기위해 1빼기 진행
    n = target
    if n < k:
        break # 못 나누는 경우 break
    result += 1 # 2번 연산 (나누기) 수행 한번 했으니 +1
    n //= k 

result += (n - 1) # 1이 될 때까지 빼야하므로.
print(result)
