#1. 정수를 입력받고 양의 홀수, 양의 짝수, 0, 음의 홀수, 음의 짝수를 판별해 주는 프로그램을 작성
# ex) -5: 음의 홀수, 0: 0, 3: 양의 홀수

# 첫 번째 방법
# num = int(input("숫자 입력: "))
# if num > 0 and num % 2 == 0:
#     print("양의 짝수")
# elif num > 0 and num % 2 == 1:
#     print("양의 홀수")
# elif num < 0 and num % 2 == 0:
#     print("음의 짝수")
# elif num < 0 and num % 2 == 1:
#     print("음의 홀수")
# else:
#     print("0")

# 두 번째 방법
# num = int(input("숫자 입력: "))
# if num > 0:
#     if num % 2 == 1:
#         print("양의 홀수")
#     else:
#         print("양의 짝수")
# elif num == 0:
#     print("0")
# else:
#     if num % 2 == 1:
#         print("음의 홀수")
#     else:
#         print("음의 짝수")

# 세 번째 방법
# num = int(input("숫자 입력: "))
# isPositive = num > 0
# isNegative = num < 0
# isOdd = num % 2 == 1
# isEven = num % 2 == 0
# if isPositive and isOdd:
#     print("양의 홀수")
# elif isPositive and isEven:
#     print("양의 짝수")
# elif isNegative and isOdd:
#     print("음의 홀수")
# elif isNegative and isEven:
#     print("음의 짝수")
# else:
#     print("0")

# 사용자로부터 x축과 y축의 좌표값 x와 y를 입력받아 해당 좌표가 좌표 평면의 어느 사분면에 위치하는지
# 판별하는 프로그램을 만들어 보세요 좌표가 각각의 사분면에 위치하는 경우
# '입력하신 좌표는 제1사분면에 위치합니다' 등과 같이 출력하고, 좌표가 축 위에 있는 경우는
# x축 위에 위치합니다', '원점에 위치합니다' 등과 같이 구체적으로 알려주는 프로그램을 작성해 보세요
# ex) 사용자 입력: 2, 3 / 프로그램 출력: "입력하신 좌표는 제1사분면에 위치합니다"
# x = int(input("x축: "))
# y = int(input("y축: "))
# isXPositive = x > 0
# isXNegative = x < 0
# isXZero = x == 0
# isYPositive = y > 0
# isYNegative = y < 0
# isYZero = y == 0
# if isXZero and isYZero:
#     print("원점에 위치합니다")
# elif isYZero:
#     print("x축 위에 존재합니다")
# elif isXZero:
#     print("y축 위에 존재합니다")
# elif isXPositive and isYPositive:
#     print("입력하신 좌표는 제1사분면에 위치합니다")
# elif isXNegative and isYPositive:
#     print("입력하신 좌표는 제2사분면에 위치합니다")
# elif isXNegative and isYNegative:
#     print("입력하신 좌표는 제3사분면에 위치합니다")
# else:
#     print("입력하신 좌표는 제4사분면에 위치합니다")

#사용자로부터 마트에서 구매한 총 금액을 입력받아, 그 금액에 따라 할인율을 적용하는 프로그램을 만드세요
# 구매 금액이 5만원 이상이면 5%, 10만원 이상이면 10%, 20만원 이상이면 20% 할인율이 적용됩니다
# 사용자가 입력한 금액에 따라 적용된 할인율과 할인된 금액을 계산하여
# "구매 금액은 [원 금액]원, 할인율은 [할인율]%, 할인 금액은 [할인 금액]원, 최종 결제 금액은 [최종금액]원입니다'
# 라고 결과를 출력하는 프로그램을 작성해 보세요
# ex) 사용자 입력: 15만원
# ex) 프로그램 출력: "구매 금액은 15만원, 할인율은 10%, 할인 금액은 1.5만원, 최종 결제 금액은 13.5만원입니다"

price = int(input("구매 금액: "))
if price >= 200000:
    print(f"구매 금액은 {price}원, 할인율은 {20}%, 할인 금액은 {price*0.2}원, 최종 금액은 {price-price*0.2}원입니다.")
elif price >= 100000:
    print(f"구매 금액은 {price}원, 할인율은 {10}%, 할인 금액은 {price*0.1}원, 최종 금액은 {price-price*0.1}원입니다.")
elif price >= 50000:
    print(f"구매 금액은 {price}원, 할인율은 {5}%, 할인 금액은 {price*0.05}원, 최종 금액은 {price-price*0.05}원입니다.")
else:
    print(f"구매 금액은 {price}원, 할인율은 {0}%, 할인 금액은 {price*0}원, 최종 금액은 {price-price*0}원입니다.")


