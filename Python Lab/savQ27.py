n=int(input("enter number to find the factorial"))
fact=1
for i in range(1,n+1):
    fact*=i
print("factorial of ",n,"=",fact)
