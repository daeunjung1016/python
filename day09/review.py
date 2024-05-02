# variable (변수)
# data type (데이터 타입)
# # ** 기본 타입: int[2^31], float, bool, str, ...
# # ** 참조(동적) 타입: list[], dict[], set, ...
# # 컴퓨터 프로그래밍: [cpu <-> ram]
# operator(연산자): +, -. *, in, ...
# condition(조건문): if, elif, else
# loop(반복문): for, while
# def(함수) abc(): return

def greet(name):
    return f"Hello, {name}!"

# 함수 호출
message = greet("alice")

# 결과 출력
print(message)

# 매개변수가 여러 개인 함수
def add(a, b):
    return a + b

# 함수 호출 및 결과 출력
sum = add(3, 4)
print(f"The sum is {sum}.")