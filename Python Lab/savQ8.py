list=[]
n=int(input("enter limit"))
for i in range (0,n):
    a=int(input())
    list.append(a)
    
print("question a="[list[i] for i in range(0,n)if (list[i]>0)])
print([list[i] for i in range(0,n)])
