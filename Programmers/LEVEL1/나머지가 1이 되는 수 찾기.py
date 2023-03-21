def solution(n):
    x = 1
    while True:
        if n % x == 1:
            return x
        x = x + 1

# 자연수 n 
# n / x ... 1 이 되는 가장 작은 자연수 x 
# 10 / 3 .. 1
