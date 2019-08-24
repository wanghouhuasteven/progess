import turtle as tt
from random import choice as rdc
from random import randint as rdi
c = ["red","blue","indigo","white","orange"]
for i in range(rdi(100,200)):
	tt.left(89)
	pass
	tt.forward(i)
	tt.pensize(i/2)
	tt.pencolor(c[i%5])
