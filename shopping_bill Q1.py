# Q. 1. What will be the values of A, B and C after execution of the following procedure using the
# “Shopping Bills” dataset?

# This is shopping bill data set.
# Arrange all cards in a single pile called Pile 1
# Step 2 : Initialize variables A, B, and C to 0
# Step 3 : If Pile 1 is empty then stop the iteration
# Step 4 : Read the top card in Pile 1
# Step 5 : If total bill amount ≥ 1000 then increment A
# Step 6 : If total bill amount < 1000 and total bill amount ≥ 500 then increment B
# Step 7 : If total bill amount < 500 then increment C
# Step 8 : Move the current card to another pile called Pile 2 and repeat from step 3

bill_amount = [567, 1525, 1341, 123, 4174, 354, 96, 3132, 595, 378, 893, 186, 3060, 656, 229, 187, 187, 279, 603, 592,
               662, 128, 315, 888, 92, 1364, 276, 340, 514, 106, 798]

# assigning three variable

# print(len(bill_amount))

a = 0
b = 0
c = 0

# loop until all list are empty

bill: int = 0

while bill < len(bill_amount):
    bills = bill_amount[bill]
    # print(bills)
    # bill = bill + 1

    if bills >= 1000:
        a = a + 1
    # print(a)

    elif 1000 > bills > 500:
        b = b + 1

        # print(b)

    elif bills < 500:
        c = c + 1
        # print(c)
    bill = bill + 1

# value of a, b and c

print(f"a = {a}")

print(f"b = {b}")

print(f"c = {c}")
