# length
# len: 문자열 또는 리스트의 길이를 알려 주는 기능
# print(len("hello"))
# print(len("python"))
# print(len([2, 4, 6, 8, 10]))
#
# # max, min
# print(max([2, 12, 3, 51, 23, 312, 3312, 11]))
# print(min([2, 12, 3, 51, 23, 312, 3312, 11]))
#
# # sum
# print(sum([1, 2, 3, 4, 5]))

# 영어 기사를 스크랩해 오고, 단어 길이가 6글자 이상인 단어들만 출력하기
# hint) "hello world".split() => ["hello", "world"]
# news = """"His Beijing Cyclones teammate Henry Mu sprints to the corner for the catch, his studs thudding off the AstroTurf as he jumps for the ball.
#
# I was so surprised to find American football here, says Henry as he catches his breath. It's very tough, physically and mentally, you must defeat your fear."""
# word = news.split()
# print(word)
# for x in word:
#     if len(x) >= 6:
#         print(x)

fruits = ["apple", "banana", "kiwi", "mango", "strawberry", "pineapple", "melon"]
# 문자 길이가 5글자 이하이고 알파벳 a, e가 포함되면 대문자로 출력하고
# 그게 아니면 그 과일의 문자 길이를 출력하는 프로그램
# -> APPLE, 6, 4, MANGO, ...
for x in fruits:
    if len(x) <= 5 and ("a" in x or "e" in x):
        print(x.upper())
    else:
        print(len(x))