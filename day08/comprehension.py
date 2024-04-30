# [0~100]까지 담긴 리스트 표현 방법

# numList = []
# for x in range(101):
#     numList.append(x)
# print(numList)

# a = [x for x in range(101)]
# print(a)


# "apple" => [a, p, p, l, e]

# List = []
# for x in "apple":
#     List.append(x)
# print(List)

# b = [x for x in "apple"]
# print(b)


# c = 0~10
# c = [x for x in range(11) if x % 2 ==0]
# print(c)

# 0~100 홀수만 리스트
# d = [x for x in range(101) if x % 2 == 1]
# print(d)

# 0~100 짝수의 제곱 형태 리스트
# e = [x**2 for x in range(101) if x % 2 == 0]
# print(e)

# 0~10 홀수에서 10을 더한 리스트
# f = [x+10 for x in range(11) if x % 2 == 1]
# print(f)

# => [5, 6, 4, 5, 6] 가 출력되도록 하기
# fruits = ["apple", "banana", "kiwi", "grape", "orange"]
# g = [len(x) for x in fruits]
# print(g)

# i가 포함된 단어의 음절 길이 알기
# fruits = ["apple", "banana", "kiwi", "grape", "orange"]
# h = [len(x) for x in fruits if 'i' in x]
# print(g)

# 매핑 컴프리헨션
# 홀수는 10 짝수는 20을 더하기
# i = [x + 10 if x % 2 == 1 else x + 20 for x in range(101)]
# print(h)

# 5글자 이하이면 글자의 길이로 나타내고 아니면 대문자화하기
# [5, BANANA, 4, 5, ORANGE]
fruits = ["apple", "banana", "kiwi", "grape", "orange"]
j = [len(x) if len(x) <= 5 else x.upper() for x in fruits]
print(j)