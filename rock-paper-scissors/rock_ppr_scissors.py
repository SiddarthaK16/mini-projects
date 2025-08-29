def win(a,b):
   print(f"Computer choose {change[a]}")
   print("Congratulations you beat the computer!!!")

def loss(a,b):
   print(f"Computer choose {change[a]}")
   print("You loose!!")


import random

x=random.randint(0,2)

change = {
    0 : "Rock" ,
    1 : "Paper" ,
    2 : "Scissors"
}

print("Welcome to the game!!!")

while(1):
   
 y=int(input("Choose 0 for Rock , 1 for paper & 2 for scissors :"))

 if(y>2 or y<0):
    print("Invalid!! Try again!!")

    if(y==0 or y==1 or y==2):
       break
 elif(x==y):
    print("Match tied.. Try again!!")

    if(x!=y):
       break

 else:
      break 

if((x==0 and y==1)  or (x==1 and y==2) or (x==2 and y==0) ):
    win(x,y)

else:
   loss(x,y)

print("Thank you for playing!!!")


   