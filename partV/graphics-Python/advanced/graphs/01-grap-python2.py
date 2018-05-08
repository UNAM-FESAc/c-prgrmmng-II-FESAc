from visual import *

r = vector(-5, -1, 3)
bola=sphere(pos=r,radius=2,color=color.green)

while r.x<4:
    rate(10)
    bola.pos = r
    r.x += r.x





