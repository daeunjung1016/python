# 함수는 input을 넣으면 output을 만들어 주는 것 / input [int, str, [], None] -> output
# f(x) => len(x), str(x), int(x), print(x), input(x) ...

# def = 정의할게
# def koreaIt(x):
#     return x + "코리아아이티"
# a = koreaIt("인천점 ")
# print(a)

# def add(x,y):
#     return x+y
# b = add(1, 5)
# print(b)

# 어떠한 단어를 넣었을 때 그 단어가 5글자 이상이면 "글자가 길어요", 이하면 "글자가 짧아요!" 출력
# def isWordLong(x):
#     if len(x) >= 5:
#         return "글자가 길어요"
#     else:
#         return "글자가 짧아요"

# 함수: input -> [로직] -> output

# abc(5, '😋')
# ['😋', '😋', '😋' '😋', '😋']

# def abc(x, y):
#     return [y for x in range(x)]

# 🥚🐣🐥🐔🍗
# 🥚 -> 🐣
# 🐣 -> 🐥
# 🐥 -> 🐔
# 🐔 -> 🍗

# def fried(x):
#     if x == '🥚':
#         return '🐣'
#     elif x == '🐣':
#         return '🐥'
#     elif x == '🐥':
#         return '🐔'
#     elif x == '🐔':
#         return '🍗'
#     else:
#         return "에러"
# print(fried("🐔"))

# def fried(x):
#     dictChange = {
#         '🥚' : '🐣',
#         '🐣' : '🐥',
#         '🐥' : '🐔',
#         '🐔' : '🍗',
#     }