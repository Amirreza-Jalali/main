def solve(n):
    i=0
    power=0
    while(power<n):
        power=pow(2,i)
        i+=1
    print(power)

n=int(input())
solve(n)


q
