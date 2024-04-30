# 양의 정수 n을 입력으로 받아들여 n의 홀짝성에 따라 다른 계산을 수행하는 프로그램을 작성하세요
# 만약 n이 홀수라면 n 이하의 모든 홀수의 합을 반환합니다. 반면 n이 짝수라면 n 이하의 모든 짝수의
# 제곱의 합을 반환합니다
# ex) 입력: n = 5 / 결과: 9 (1 + 3 + 5)
# ex) 입력: n = 6 / 결과: 56 (2^2 + 4^2 + 6^2)

# num = int(input("입력: "))
# result = 0
# if num % 2 ==  1:
#     for x in range(num+1):
#         if x % 2 == 1:
#             result += x
# else:
#     for x in range(num+1):
#         if x % 2 == 0:
#             result += x ** 2
# print(result)

# 정수 배열 arr와 자연수 k가 주어집니다. 이때 k의 홀짝성에 따라 배열에 다른 연산을 적용합니다
# 만약 k가 홀수라면 배열 arr의 모든 원소에 k를 곱하고, k가 짝수라면 모든 원소에 k를 더합니다
# ex) 입력: arr = [1, 2, 3], k = 3 / 결과: [3, 6, 9] 모든 원소에 3을 곱함
# ex) 입력: arr = [1, 2, 3], k = 2 / 결과: [3, 4, 5] 모든 원소에 2를 더함

# arr = [1, 2, 3]
# k = int(input("입력: "))
# newList = []
# if k % 2 == 1:
#     for x in arr:
#         newList.append(x * k)
# else:
#     for x in arr:
#         newList.append(x + k)
# print(newList)
