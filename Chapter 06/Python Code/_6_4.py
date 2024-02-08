x=input("Enter first sign of the game ")
y=input("Enter second sign of the game ")
if (x== "scissor" and y== "paper") or (x== "stone" and y== "scissor") or (x== "paper" and y== "stone"):
    print( "x is the winner")
if (y== "scissor" and x== "paper") or (y== "stone" and x== "scissor") or (y== "paper" and x== "stone") :
    print("y is the winner")
if (x== "scissor" and y== "scissor") or (x== "stone" and y== "stone") or (x== "paper" and y== "paper"):
    print( "There is a tie")
