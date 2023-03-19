def solution(n):
    answer = 0
    while True:
        if n < 10: 
            answer += n
            break
        answer += n % 10
        n //= 10
    return answer
