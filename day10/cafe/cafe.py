# 안녕하세요
# 저희 카페 체인에서 사용할 새로운 판매 직원용 프로그램 개발을 요청 드립니다. 이 프로그램은 직원들이 효율적으로
# 커피 판매 관리를 할 수 있게 도와주는 도구입니다. 주요 기능은 커피 판매, 커피 메뉴 추가, 그리고 프로그램 종료 등으로
# 구성됩니다. 아래에 각 기능에 대한 상세 요구사항을 명시하오니, 참고하여 개발 부탁드립니다.

# 요구 사항
# 1. 커피 판매:
# # ● 직원이 사용자 인터페이스를 통해 판매할 커피를 선택할 수 있습니다
# 2. 커피 메뉴 추가:
# # ●
# 3. 프로그램 종료:
# # ● 사용자가 프로그램을 종료할 수 있는 기능을 포함합니다.

# ex)
# 1. 커피 판매
# -> 1. 아메리카노 2000원, 2. 라떼 2500원, 3. 바닐라라떼 3000원
# 2. 커피 메뉴 추가
# -> 2. 커피 이름: "" , 커피 가격: ""
# 3. 프로그램 종료


#
# coffeeList = [{'name': '아메리카노', 'price': 2000}, {'name': '라떼', 'price': 2500}, {'name': '바닐라라떼', 'price': 3000}]
# while True:
#     codeNumber = int(input("1. 커피 판매 2. 커피 추가 3. 프로그램 종료: "))
#     if codeNumber == 1:
#         for index, item in enumerate(coffeeList):
#             print(f"{index}. {item['name']} {item['price']}원")
#         coffeeNumber = int(input("번호 입력: "))
#     elif codeNumber == 2:
#         newCoffeeName = input("커피 이름: ")
#         newCoffePrice = int(input("커피 가격: "))
#         newCoffeeMenu = {'name':newCoffeeName, 'price':newCoffePrice}
#         coffeeList.append(newCoffeeMenu)
#         print(f"{newCoffeeName}이(가) 추가되었습니다.")
#     elif codeNumber == 3:
#         print("프로그램 종료")
#         break


from coffee import Coffee
coffeeList = [Coffee("아메리카노", 2000, 100), Coffee("라떼", 2500, 200), Coffee("바닐라라떼", 3000, 300)]
while True:
    codeNumber = int(input("1. 커피 판매 2. 커피 추가 3. 프로그램 종료: "))
    if codeNumber == 1:
        for index, item in enumerate(coffeeList):
            print(x.intro())
        coffeeNumber = int(input("번호 입력: "))
    elif codeNumber == 2:
        newCoffeeName = input("커피 이름: ")
        newCoffePrice = int(input("커피 가격: "))
        coffeeList.append(Coffee(newCoffeeName, newCoffeePrice))
        print(f"{newCoffeeName}이(가) 추가되었습니다.")
    elif codeNumber == 3:
        print("프로그램 종료")
        break