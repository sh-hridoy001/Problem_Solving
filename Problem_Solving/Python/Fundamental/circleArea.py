import math
class Circle:
    def __init__(self,radius):
        self.radius = radius
    def area(self):
        return math.pi*(self.radius**2)
radius = float(input("Enter the radius of the cirlcle:"))
circle = Circle(radius)
print(f"the area of the circle is:{circle.area()}")
