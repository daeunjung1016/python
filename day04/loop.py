# 반복문 (loop)
# for 반복문
# for 미지수 in range(n번):
# range(n): 0~n-1까지 순회해 줘
# for와 in 사이의 변수 x의 이름은 변수명 규칙에 의거해 자유롭게 수정 가능 (x가 아니어도 됨)
# 해당 변수는 숫자가 'range(n)'<< 0부터 n번까지 반복된다는 것을 가능하게 하는 무의미한 음절(그러나 필요)
# for x in range(10):
#     print(f"{x}. hello world!")

# num = int(input("몇번 실행할까요: "))
# for x in range(num):
#     print(f"{x}. hello world!")

# 0~200까지 표기하는 프로그램을 만드세요
# for x in range(201):
#     print(x)

# 0~200까지 짝수만 표기하는 프로그램을 만드세요
# for x in range(201):
#     if x % 2 == 0:
#         print(x)

#0부터 1000까지 3의 배수만 표기하는 프로그램을 만드세요
# for x in range(1001):
#     if x % 3 == 0:
#         print(x)

# 구구단 / 유저에게 몇 단의 구구단을 표기할지 입력 받으면 해당 단을 모두(9까지) 보여 주는 프로그램
# num = int(input("몇 단: "))
# for x in range(10):
#     print(num * x)