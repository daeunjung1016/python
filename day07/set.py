# data-type: int, str, float, bool, list
# set (집합 개념)
# 중복이 허용되지 않는 타입
a = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}
burgerking = {"새우와퍼", "불고기와퍼", "치즈와퍼", "스테이크와퍼"}
momstouch = {"새우와퍼", "치즈와퍼", "싸이버거", "불고기버거"}
# x = burgerking.intersection(momstouch)
# print(x)

# 합집합 (|)
union = burgerking | momstouch

# 교집합 (&)
intersection = burgerking & momstouch
# = intersection = burgerking.intersection(momstouch) (구버전 문법)

# 차집합 (-)
difference = burgerking - momstouch

print(union)
print(intersection)
print(difference)

# 추가
burgerking.add("갈릭와퍼")

# 삭제
# burgerking.remove("새우와퍼") (구버전 문법, 없는 요소 빼면 에러 발생)
# burgerking.discard("새우와퍼") (신버전 문법, 없는 요소 빼도 에러 발생 안 함)

# 전체삭제
burgerking.clear()

# set() > 세트'화' 시켜 줘 ★중요
# result = set([1, 2 ,3, 1, 2, 3,])
# print(list(result))

news = """Here, men and women play together in a team sport that you'd associate more with Baltimore than Beijing.
For many Americans, this is more than just a game - it is an expression of their national identity. For this Chinese team, it is something new - there are only a few thousand players in China, but millions of fans."""
wordList = news.split()
noDuplicationWords = list(set(wordList))
noDuplicationWords.sort()
print(noDuplicationWords)