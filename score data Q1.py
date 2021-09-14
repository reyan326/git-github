# The following pseudocode is executed using the “Scores” dataset.
# Step 1 : Arrange all cards in a single pile called Pile 1
# Step 2 : Initialize variables A and B to 0
# Step 3 : If Pile 1 is empty then stop the iteration
# Step 4 : Read the top card in Pile 1
# Step 5 : If Mathematics marks > A then store Mathematics marks in A
# Step 6 : If Physics marks > B then store Physics marks in B
# Step 7 : Move the current card to another pile called Pile 2 and repeat from step 3.

math_marks = [68, 62, 57, 42, 87, 71, 81, 84, 74, 63, 64, 97, 52, 65, 89, 76, 87, 62, 72, 56, 93, 78, 62, 97, 44, 87,
              74, 81, 74, 72]

physics_marks = [64, 45, 54, 53, 64, 92, 82, 92, 64, 88, 72, 92, 64, 73, 62, 58, 86, 81, 92, 78, 68, 69, 62, 91, 72, 75,
                 71, 76, 83, 66]

A: int = 0
B = 0

for math in math_marks:
    if math > A:
        A = math
for physics in physics_marks:

    if physics > B:
        B = physics


print(A)
print(B)
