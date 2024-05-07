# 0. apple, 1. orange, 2. mango
# fruits = ["apple", "orange", "mango"]
# number = 0
# for x in fruits:
#     print(f"{number}. {x}")
#     number += 1
# ▲ 이것을 조금 더 쉽게 표현하는 것 = enumrate(열거하다)
# fruits = ["apple", "orange", "mango"]
# for index, item in enumerate(fruits):
#     print(f"{index}. {item}")

# dict 활용법
# coffees = [{'name':'아메리카노'}, {'name':'라떼'}]
# for index, item in enumerate(coffees):
#     print(f"{index}. {item}")

coffees1 = [{'name':'아메리카노','price':2000}, {'name':'라떼','price':3000}]
for index, item in enumerate(coffees1):
    print(f"{index}. {item['name']} {item['price']}원")
