class cl(object):
    N = 0

class cash(cl):

    def top_up(self, X): 
        self.N += X
    def count_1000(self):
        print("Целых тысяч:", self.N // 1000)
    def take_away(self, X):
        if self.N>X:
            self.N -= X
        else:
            print("Ошибка, недостаточно денег в кассе.")
        
money = cash()
money.top_up(float(input("Сколько денег вы хотите внести  ")))
print(money.N)
money.count_1000()
money.take_away(float(input("Сколько денег вы хотите забрать?    ")))
print(money.N)