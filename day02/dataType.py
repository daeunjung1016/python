# 변수: 저장하는 공간
# 2 + 3 = 5 인간: 연산 + 기억 [뇌]
# 2 + 3 = 5 컴퓨터: 연산[CPU] + 기억[RAM]
# a = 2 + 3 [숫자]
# a = "안녕하세요" [문자]
# 데이터 타입

# 인간: 연산[뇌] + 기억[뇌]
# 컴퓨터: 연산[CPU] + 기억[RAM] (폰노이만 구조)

# 변수: RAM에 저장하는 공간
# 데이터 타입에 따라서 차지하는 RAM 공간이 다름
# a = 2 + 3 [숫자 타입]
# a = "안녕" [문자 타입]

# 데이터 타입 종류
a1 = 1 #정수형 타입
a2 = 3.14 #실수형 타입
a3 = "3.14" #문자형 타입
a4 = True #불리언형 타입 [yes or no]
a5 = False #불리언형 타입 [yes or no]
a6 = None #None형 타입 [없음]

# 정수형 and 실수형 타입
# 사칙연산이 적용됨
b = 2 + 3.14
print(b)

# 문자형 타입
# 연결 연산
c = "300" + "100"
print(c)
# = 300100

# 반복 연산
c1 = "300" * 5
print(c1)

# print: 출력 기능
# input: 입력 기능
# type: 타입을 알려 주는 기능
# print(type(1))
# print(type("1"))
# print(type(True))
# print(type(None))

# type-casting [타입 변환]
# 정수화: int()
d = int("100")
d1 = int(3.14)
print(d1)

# 실수화: float()
e = float("3.14")
print(e)

# 문자화: str()
# ex) str(123), str(True)..
f = str(3.14)
print(f)

# 불리언화 해 주는 기능
bool(123) # True or False
