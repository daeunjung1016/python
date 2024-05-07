# 변수들 + 함수들
class Dog:
    def __init__(self, a, b):
        self.name = a
        self.breed = b
        self.happiness = 0
    def intro(self):
        print(f"나는 {self.name} 견종은 {self.breed} 행복도는 {self.happiness}")
    def eating(self):
        print("식사합니다")
        self.happiness += 10

a = Dog("제니", "푸들")
a.intro()
b = Dog("초코", "치와와")
b.intro()
c = Dog("뽀삐", "요크셔테리어")
c.intro()

for x in range(10):
    a.eating()
a.intro()
b.intro()
c.intro()