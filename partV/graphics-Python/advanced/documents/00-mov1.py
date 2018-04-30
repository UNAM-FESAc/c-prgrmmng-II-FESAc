import turtle

def drawSquare(t, sz):
    """Make turtle t draw a square of with side sz."""

    for i in range(4):
        t.forward(sz)
        t.left(90)


wn = turtle.Screen()          # Set up the window and its attributes
wn.bgcolor("lightgreen")

javo = turtle.Turtle()        # modified Javo
drawSquare(javo, 50)          # Call the function to draw the square

javo.penup()
javo.goto(100,100)
javo.pendown()

drawSquare(javo,75)           # Draw another square

wn.exitonclick()
