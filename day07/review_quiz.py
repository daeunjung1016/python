# 주어진 문자열 word의 각 문자를 정수 n만큼 반복하여 새로운 문자열을 생성하는 프로그램 작성
# ex) 입력: word = "abc", n = 3 / 결과:"aaabbbccc"
# hint) "kiwi" * 2 = kiwikiwi

# word = input("단어 입력: ")
# count = int(input("횟수 입력: "))
# newWord = ""
# for x in "abc":
#     newWord += x * 3
# print(newWord)

# 사용자로부터 문자열을 입력받아 그 문자열 내의 모든 모음 (a, e, i, o, u)만 대문자로 변환하는
# 프로그램을 작성하세요. 다른 문자들은 원래의 상태를 유지합니다.
# 이 프로그램은 문자열을 처리하여 모음만을 강조하는 방법을 보여 줍니다.
# ex) 입력: hello world / 결과: hEllO wOrld
# hint) in 연산자, 문자열.upper()

# newWord =""
# word = input("문장을 입력하세요: ")
# for x in word:
#     if x in "aeiou":
#         newWord += x.upper()
#     else:
#         newWord += x
# print(newWord)

# ex) 입력: 'cccCCC' / 출력: 'CCCccc'
# ex) 입력: 'abCdEfghIJ' / 출력: 'ABcDeFGHij'
# hint) isUpper or isLower > upper(), lower()

# word = input("단어 입력")
# newWord = ""
# for x in word:
#     if x.isupper():
#         newWord += x.lower()
#     else:
#         newWord += x.upper()
# print(newWord)

# 단어를 입력했을 때 자음은 대문자화해서 출력하기

newWord = ""
word = input("단어를 입력하세요: ")
for x in word:
    if not x in 'aeiou':
        newWord += x.upper()
    else:
        newWord += x
print(newWord)