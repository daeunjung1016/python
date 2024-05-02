# map (how, target: target을 바꿔주기
numList = [ i for i in range(101)]
# [100, 101, 102, 103, ...200]
map(lambda x:x+100,numList)

numList = [x for x in range(10)]
result = list(map(lambda x: x * 2, numList))
print(result)

#filter: target을 필터링
result1 = list(filter(lambda x: x % 2 == 0,numList))
print(result1)

# 5글자 이하인 글자만 출력해 줘
fruits = ["apple", "banana", "cherry", "kiwi"]
result2 = list(filter(lambda x: len(x) <= 5, fruits))
print(result2)

# 알파벳 a가 포함되어 있는 것만 살려 줘
result3 = list(filter(lambda x: 'a' in x, fruits))
print(result3)

# map > 유저 아이디로 바꾸기
emailList = ["abc@naver.com", "mega@gmail.com", "korea@daum.net"]
result4 = list(map(lambda x: x.split("@")[0], emailList))
print(result4)