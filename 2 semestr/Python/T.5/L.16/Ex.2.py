class Turtle(object):
    x = 0
    y = 0
    s = 0

    def __init__(self,x,y,s):
        self.x = x
        self.y = y
        self.s = s
    def go_up(self, s):
        self.y  += s
    def go_down(self, s):
        self.y  -= s
    def go_left(self,s):  
        self.x  -= s
    def go_right(self,s):
        self.x  += s
    def evolve(self):
        self.s += 1
    def degrade(self):
        if self.s>1:
            self.s -= 1
        else:
            print("Error")

    def count_moves(self,x2,y2):
        a = 0
        c = 0
        if  abs(x2-self.x)%self.s == 0:
                c += abs(x2-self.x)//self.s
        else:
            a = 1
            print("It is not possible to hit the given X point with the given value <<evolve>> or <<degrade>>")

        if abs(y2-self.y)%self.s == 0:
                c += abs(y2-self.y)//self.s
        else:
            a = 1
            print("It is not possible to hit the given Y point with the given value <<evolve>> or <<degrade>>")    

        if a == 0:
            print(f"You need {c} steps.")
        

t1 = Turtle(0,0,1)
t1.count_moves(3,-3)