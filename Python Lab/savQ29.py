item=[]
n=int(input("enter limit"))
for j in range(0,n):
    x=int(input())
    item.append(x)
sum=0
for i in item:
 sum+=i
print("sum of list=",sum)
