# 어떠한 타입.그 관련된 기능 < 기능 추가 시의 기본형
# list_type '[]'
soccerPlayer = ["손흥민", "황희찬", "김민재", "이강인"]
# print(soccerPlayer)

#리스트 중 세 번째를 추출하고 싶은 경우
# print(soccerPlayer[2])

#리스트 기능 (append는 '추가하겠다'는 기능)
soccerPlayer.append("이재성")
# print(soccerPlayer)

#리스트 기능 (sort는 '정렬하겠다'는 기능 / ㄱㄴㄷ순)
soccerPlayer.sort()
print(soccerPlayer)

#리스트와 문자(str)는 엄연히 다른 개체이므로 기능도 다르다

# 유저에게 과일을 영어로 3개 입력받고, 대문자화 시키고 과일 리스트를 만들어 오름차순으로 보여주기
# kiwi, apple, mango
# a = input("과일을 입력하세요: ")
# upperA = a.upper()
# b = input("과일을 입력하세요: ")
# upperB = b.upper()
# c = input("과일을 입력하세요: ")
# upperC = c.upper()
# fruit = []
# fruit.append(upperA)
# fruit.append(upperB)
# fruit.append(upperC)
# fruit.sort()
# print(fruit)