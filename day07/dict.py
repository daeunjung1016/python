# list[], set{}, dict{} > 새로운 타입
# dict: key[str, int] and 중복 불가 - value (anyType .. 아무거나~)
lecture = {
    "java": 1,
    "python": 2,
    "c": 3,
    "javascript": 4
}
print(lecture["java"])

coffeeShopMenu = {
    "starbucks":[{"name":"아메리카노"},{"name":"라떼"}],
    "megacoffee":[{"name":"메가리카노","price":2000},{"name":"메가라떼","price":3000}]
}
print(coffeeShopMenu["megacoffee"])