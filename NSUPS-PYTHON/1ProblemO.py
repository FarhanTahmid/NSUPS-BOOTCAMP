number=list((map(int,input().split())))
j=0
for i in range(len(number)):
    count=number.count(number[i])
    if(number[i]==number[i+1]):
        continue
    print("{} {}".format(number[i],count))

