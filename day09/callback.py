# def abc(x):
#     print("abc함수 실행")
#     x()
#
# def defg():
#     print("defg함수 실행")
#
# abc(defg)

def killing_monster(monster, event):
    print(f"{monster}를 처치했습니다.")
    event()

def getGold():
    print("골드 획득")
def getFood():
    print("음식 획득")

killing_monster("슬라임", getGold)
killing_monster("늑대", getFood)
