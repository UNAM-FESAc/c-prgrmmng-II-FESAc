from visual import *

scene.width = 600
scene.height = 600


r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.green, opacity = 0.3)

while r.x<4:
    rate(5)
    bola.pos = r
    r.x += r.x




