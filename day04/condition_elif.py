# # condition_elif.py
# num = int(input("점수 입력: "))
# if num >= 90:
#     print("A등급")
# elif num >= 80:
#     print("B등급")
# elif num >= 70:
#     print("C등급")
# else:
#     print("과락입니다")

# 국, 영, 수 점수를 3개 입력받고 평균이 90점 이상 'A', 80점 이상 'B', 70점 이상 'C', 60점 이상 'D'
# 나머지는 F로 나타내는 프로그램 작성

# kor = int(input("국어 점수 입력: "))
# eng = int(input("영어 점수 입력: "))
# math = int(input("수학 점수 입력: "))
# average = (kor + eng + math) / 3
# if average >= 90:
#     print('A')
# elif average >= 80:
#     print('B')
# elif average >= 70:
#     print('C')
# elif average >= 60:
#     print('D')
# else:
#     print('F')

# nested condition
# if문의 depth는 2번까지 지향하는 걸로!
score = int(input("점수 입력: "))
if score > 60:
    if score == 100:
        print("만점입니다!")
    else:
        print("합격입니다!")
else:
    if score == 0:
        print("빵점입니다!")
    else:
        print("불합격입니다")