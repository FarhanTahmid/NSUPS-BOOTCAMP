import datetime
for t in range(int(input())):
    y=int(input())
    d=datetime.datetime(y,1,1)
    print(d.strftime("%A").lower())