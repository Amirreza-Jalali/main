a,b,c=map(int,input().split())
sum=a+b+c
if(a==0 or b==0 or c==0) :
    print("No")
elif(sum==180) :
    print("Yes")
elif(sum!=180):
    print("No")

