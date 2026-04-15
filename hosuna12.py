#Author: Hugo Osuna
#Date: 04-14-26

import math

def areaRect(base, height):
    return base * height
def areaCirc(radius):
    return math.pi * radius ** 2


b = int(input("Enter the base for the Rectangle:\n"))
h = int(input("Enter the height for the Rectangle: \n"))
rectArea = areaRect(b, h)
print(f"The resulting area of the rectangle is: {rectArea:.2f} \n")

r = int(input("Enter the radius for the Circle: \n"))
circArea = areaCirc(r)
print(f"The resulting area of the rectangle is: {circArea:.2f} \n")

