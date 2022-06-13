# we take the dimension of the matrix from the user, since we are able to work with 2x2 matrixes of 3x3 matrixes

dimension = int(input(""""Pick the dimension of your matrix
1. 2x2
2. 3x3
"""))
# once we have the dimension, we filter it with an if and elif, depending on the user´s choice

if dimension == 1:
    print("Please type in 4 values (it is only allowed 2x2 matrixes)")
    a11 = int(input("Enter the first value: "))
    a12 = int(input("Enter the second value: "))
    a21 = int(input("Enter the third value: "))
    a22 = int(input("Enter the fourth value: "))

# to work with a 2x2 matrix we take the values from the user and then proceed to use the formula for the determinant 

    determinant = (a11*a22) - (a21*a12)
    print(determinant) # we print the result 
    
# in case the dimension is 3x3 we do run the following instructions
elif dimension == 2:
    print("Please type in your 9 values") # we take the values for the matrix
    a1 = int(input("Enter the first value: "))
    a2 = int(input("Enter the second value: "))
    a3 = int(input("Enter the third value: "))
    b1 = int(input("Enter the fourth value: "))
    b2 = int(input("Enter the fifth value: "))
    b3 = int(input("Enter the sixth value: "))
    c1 = int(input("Enter the seventh value: "))
    c2 = int(input("Enter the eighth value: "))
    c3 = int(input("Enter the nineth value: "))
    
    # once we have the values to work with we can use the formula for the determinant of a 3x3 matrix
    
    determinant3 = (((a1) * ((b2 * c3) - (b3 * c2))) - ((a2) * ((b1 * c3) - (b3 * c1))) + ((a3) * ((b1 * c2) - (b2 * c1))))
    print(determinant3) # we print the result