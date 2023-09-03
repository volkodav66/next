class turtle(object):
    x = 0
    y = 0
    s = 1

    a = 0
    b = 0
    c = 0
    d = 0
    t = 0
    f = 0
    h = 0

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
        if self.s>0:
            self.s -= 1
        else:
            print("Error")
    def count_moves(self, x2,y2):
        if abs(x2-self.x)>=abs(y2-self.y):
            self.d = t1.xr(x2,y2)
            print(self.d)
        
        

    def xr(self, x2, y2):    
        if x2 != self.x:
            list_a = []
            list_b = []
            list_c = []
            list_t = []
            list_f = []
            list_h = []
            for i in range(abs(x2-self.x)):
                if (abs(x2-self.x)%self.s) == 0:
                    self.b = abs(x2-self.x)//self.s + i
                    list_b.append(self.b)
                else:
                    self.c = abs(x2-self.x)//self.s + abs(x2-self.x)%self.s + i
                    list_c.append(self.c)
                    
                if (abs(y2-self.y)%self.s) == 0:
                    self.t = abs(y2-self.y)//self.s 
                    list_t.append(self.t)
                else:
                    self.f = abs(y2-self.y)//self.s + abs(y2-self.y)%self.s 
                    list_f.append(self.f)
                self.a += 1
                self.b +=1
                self.c +=1
                t1.evolve()
            list_a.append(self.a)
            self.a = 0
            self.b = 0
            self.c = 0
            
            self.d = min(min(list_a),min(list_b),min(list_c)) + min(min(list_f),min(list_t))
            return(self.d)
        else:
            self.d = 0
            return(self.d)

    def yr(self, y2): 
        if y2 != self.y:
            list_a = []
            list_b = []
            list_c = []
            for i in range(abs(y2-self.y)):
                
                self.a += 1
                self.b +=1
                self.c +=1
                t1.evolve()
            list_a.append(self.a)
            self.a = 0
            self.b = 0
            self.c = 0
            while self.s>1:
                if (abs(y2-self.y)%self.s) == 0:
                     self.b = abs(y2-self.y)//self.s + i
                     list_b.append(self.b)
                else:
                    self.c = abs(y2-self.y)//self.s + abs(y2-self.y)%self.s + i
                    list_c.append(self.c)
                self.a += 1
                self.b +=1
                self.c +=1
                t1.degrade()
            list_a.append(self.a)
            self.d = min(min(list_a),min(list_b),min(list_c))
            return(self.d)
        else:
            self.d = 0
            return(self.d)    


t1 = turtle()
t1.count_moves(21,20)