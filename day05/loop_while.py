# while문
# x = 10
# while x > 0:
#     print("안녕하세요?")
#     x -= 1

# break문
# while True:
#     x = int(input("숫자 0을 넣어야 멈춤: "))
#     if x == 0:
#         break

# 0: 멈춤 / 1: 아이스 아메리카노 / 2: 아이스 카페라떼
# while True:
#     x = int(input("0 넣어야 멈춤! "))
#     if x == 0:
#         break
#     elif x == 1:
#         print("아이스 아메리카노")
#     elif x == 2:
#         print("아이스 카페라떼")

#유저에게 언어를 고르는 지문 입력 (1.python, 2. java, 3. c++)
#1. python
#2. java
#3. c++
#4. 프로그램 종료
#외의 숫자는 "잘못된 숫자를 입력하였습니다"
# while True:
#     x = int(input("언어를 선택하세요"))
#     if x == 1:
#         print("1. python")
#     elif x == 2:
#         print("2. java")
#     elif x == 3:
#         print("3. c++")
#     elif x == 4:
#         print("프로그램 종료")
#         break
#     else:
#         print("잘못된 숫자를 입력하였습니다")

# 계산기 프로그램
# 유저에게 0.프로그램 종료, 1.더하기, 2.빼기, 3.곱하기, 4.제곱, 5.나누기(몫)
# .그 외 번호는 번호 입력 오류 > 다시 묻기
# ex) 1번: 두 정수를 입력하고 더한 결과값이 나옴
# ex) 2번: 두 정수를 입력하고 뺀 결과값이 나옴


while True:
    num1 = int(input("첫 번째 정수를 입력하세요: "))
    num2 = int(input("두 번째 정수를 입력하세요: "))
    x = int(input("연산 번호를 입력하세요(0.종료, 1.더하기, 2.빼기, 3.곱하기, 4.제곱, 5.나누기: "))
    if x == 0:
        print("프로그램 종료")
    elif x == 1:
        print(num1+num2)
    elif x == 2:
        print(num1-num2)
    elif x == 3:
        print(num1*num2)
    elif x == 4:
        print(num1**num2)
    elif x == 5:
        print(num1/num2)
    else:
        print("잘못된 연산 번호를 입력하였습니다.")