listofSymbols=['v','<','^','>']
firstPos,lastPos=input().split()
numberOfSpin=int(input())
indexForFirstPos=0
indexForSecondPos=0
list2=[]
if(numberOfSpin<len(listofSymbols)):
    
    while(indexForFirstPos<len(listofSymbols)):
        if listofSymbols[indexForFirstPos]==firstPos:
            list2.append(listofSymbols[indexForFirstPos:])
        indexForFirstPos+=indexForFirstPos
        print(indexForFirstPos)
print(firstPos)
print(lastPos)
print(list2)
        

    
        