a1=int(input("Enter the x component's magnitude of first vector :"))
b1=int(input("Enter the y component's magnitude of first vector :"))
a2=int(input("Enter the x component's magnitude of second vector :"))
b2=int(input("Enter the y component's magnitude of second vector :"))


vector1 = (a1,b1)
vector2 = (a2,b2)

operator=input("Enter the operator you wanna use (+ for addition , - for subtraction , . for dot product and X for cross product) :")

if operator=="+" :
    x=a1+a2
    y=b1+b2
    print(f"The resultant vector is {x}i+{y}j")

elif operator=="-":
    x=a1-a2
    y=b1-b2
    print(f"The resultant vector is {x}i+{y}j")

elif operator==".":
    x=(a1*a2)+(b1*b2)
    
    print(f"The resultant vector is {x}")

elif operator=="X":
    x=(a1*b2)-(a2*b1)
    
    print(f"The resultant vector is {x}k")

else :
    while operator not in ["+","-",".","X"]:
        print("Invalid operator!!")
        operator=input("Enter a valid operator again :")

        