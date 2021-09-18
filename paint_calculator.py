# You are painting a wall. The instructions on the paint can says that 1 can of paint can cover
# 5 square meters of wall. Given a random height and width of wall,
#  calculate how many cans of paint you'll need to buy.
# defining a function called paint_cal
import math

test_h = int(input("Height of wall in metre: "))
test_w = int(input("Width of wall in metre: "))
coverage = 5


def paint_cal(height, width, cover):
    area = height * width
    number_of_can = math.ceil(area / cover)
    print(f"Area of wall is: {area}")

    print(f"Number_of_can be used to paint the wall is {number_of_can}")


paint_cal(height=test_h, width=test_w, cover=coverage)
