s = "aabbaccc"

def solution(s):
    if len(s) == 0 or len(s) == 1:
        return len(s)
    answer = len(s)
    for l in range(1, len(s) + 1):
        last = (0, "")
        temp = ""
        for i in range(0, len(s), l):
            t = s[i:i+l]
            if t == last[1]:
                last = (last[0] + 1, t)
            else:
                if last[0] != 0:
                    temp += "%d%s" % last if last[0] > 1 else last[1]
                last = (1, t)
        if last[0] > 0:
            temp += "%d%s" % last if last[0] > 1 else last[1]
        answer = min(answer , len(temp))
    return answer
  
  print(solution(s))
