import random



bool playAgain=True

while playAgain:
    print("\nEnter What you want to choose")
    userInput=input("Enter 'R' to choose rock, Enter 'P' to choose paper or Enter 'S' to choose scissors\n")


play=int(input("Enter 1 to play again or 0 to quit"))
if play==0:
playAgain=False