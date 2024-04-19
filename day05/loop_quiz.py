#1. 1~100까지의 총합을 나타내는 프로그램
# total = 0
# for x in range(1,101):
#     total += x
# print(total)

#2. 유저에게 과일을 입력 받고 모음을 제거한 단어로 나타내기!
# ex) apple > ppl, banana > bnn, grape > grp
# Hint1 for x in ""
# Hint2 word = "a" # "a"
#       word += "b" # "ba"
fruit = input("과일을 입력하세요: ")
word = ""
for x in fruit:
    # (아래 코드의 초급 버전) if x != 'a' and x != 'e' and x != 'o' and x != 'u' and x != 'i':
    if not x in 'aeiou':
        word += x
print(word)