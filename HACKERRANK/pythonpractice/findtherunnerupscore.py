# Enter your code here. Read input from STDIN. Print output to STDOUT
i=int(input())
lis=list(map(int,input().strip().split()))
z=max(lis)
while(max(lis)==z):
    lis.remove(max(lis))
    
print (max(lis))
