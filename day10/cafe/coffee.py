coffeeList = [{'name': '아메리카노', 'price': 2000}, {'name': '라떼', 'price': 2500}, {'name': '바닐라라떼', 'price': 3000}]
class Cofee:
    def __init__(self, a, b, c):
        self.name = a
        self.price = b
        self.caffein = c

    def intro(self):
        return f"{self.caffein} {self.name} {self.price}원"

    def nameFixed(self, a):
        self.name = a