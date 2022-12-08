import random #Модуль random предоставляет функции для генерации случайных чисел
class Rectangle: #класс задающий прямоугольник
    def __init__(self,a,b): #инициализация экземпляров класса 
        self.a=a #сторона а
        self.b=b #сторона b
    def s(self):
        return self.a*self.b #возвращает площадь
    def p(self):
        return 2*(self.a+self.b) #возвращает периметр
    def __str__(self):
        return 'пр-ник со сторонами '+str(self.a)+' и '+str(self.b) #метод возвращает строковое представление объекта
    def __eq__(self,other):
        return self.a==other.a and self.b==other.b # проверка на равенство
class Parall(Rectangle): #класс унаследованный от класса rectangle
    def __init__(self,a,b,h):
        super().__init__(a,b)
        self.h=h
    def s(self):
        return 2*(self.a*self.b+self.a*self.h+self.b*self.h)
    def p(self):
        return 4*(self.a+self.b+self.b)
    def __str__(self):
        return 'парал-д с ребрами '+str(self.a)+', '+str(self.b)+\
               ' и '+str(self.h)
    def __eq__(self,other):
        return self.a==other.a and self.b==other.b \
               and self.h==other.h
    def v(self):
        return self.a*self.b*self.h
class Pyramid(Parall): #унаследуем класс также от Parall для четырёхугольной пирамиды
    def __init__(self,a,b,h): #h будет высотой перпендикулярной основанию
        super().__init__(a,b,h)
    #    self.h=h
    #def s(self):
        #return 2*(self.a*self.b+self.a*self.h+self.b*self.h)
        #super().s
    def p(self):
        return 4*(self.a+self.b+self.b)
    def __str__(self):
        return '4х угольная пирамида (длина осн., ширина осн., высота) '+str(self.a)+', '+str(self.b)+\
               ' и '+str(self.h)
    def __eq__(self,other):
        return self.a==other.a and self.b==other.b \
               and self.h==other.h
    def v(self):
        return self.a*self.b*self.h/3  #V=1/3S*H Объём пирамиды равен трети произведения площади основания на высоту
figures=[] #массив фигур
n=int(input('Кол-во фигур '))
for i in range(n):        
    x=random.randint(1,3)#10
    y=random.randint(1,3)
    t=random.randint(0,2) #случайная фигура, либо прям-к, либо пар-д, либо 4х уг. пирамида
    if t==0:
        figures.append(Rectangle(x,y)) #append() в Python добавляет элемент в конец.
    if t==1:
        figures.append(Parall(x,y,random.randint(1,3))) #параллелограмм
    if t==2:
        figures.append(Pyramid(x,y,random.randint(1,3))) #пирамида
##for i in range(len(figures)):
##    print(figures[i])
for f in figures:
    print(f)
kr=kp=kpyr=0 #добавим сюда кол-во пирамид kpyr=0
for f in figures:
    #if isinstance(f,Parall): #!!
    if f.__class__==Rectangle:
        kr+=1
    if f.__class__==Parall:
        kp+=1
    if f.__class__==Pyramid:
        kpyr+=1
print('Прямоугольников %d, параллелепипедов %d, 4-х угольных пирамид %d'%(kr,kp,kpyr))
#Самый маленький по площади прямоугольник
minS=10**9
for f in figures:
    if f.__class__==Rectangle and f.s()<minS:
        minS=f.s()
        minR=f
if minS!=10**9:
    print('мин ',minR,' с площадью',minR.s())
#Самый Большой по объему параллелепипед
maxV=0
for f in figures:
    if isinstance(f,Parall) and f.v()>maxV:
        maxV=f.v()
        maxP=f
if maxV!=0:
    print('макс',maxP,'с объемом',maxP.v())
#Самая большая по объему пирамида
maxV=0
for f in figures:
    if isinstance(f,Pyramid) and f.v()>maxV:
        maxV=f.v()
        maxP=f
if maxV!=0:
    print('макс',maxP,'с объемом',maxP.v())
#кол-во равных фигур
k=0
print('равные фигуры:')
for i in range(len(figures)):
    for j in range(i+1,len(figures)):
        if figures[i].__class__==figures[j].__class__ \
           and figures[i]==figures[j]:
            print(figures[i],figures[j])
            k+=1
print(k)
            
        
        



    
        
