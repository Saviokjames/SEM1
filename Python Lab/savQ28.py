a,b=0,1
n=int(input("enter limit"))
for i in range(n):
    print(a,end='\t')
    a,b=b,a+b
