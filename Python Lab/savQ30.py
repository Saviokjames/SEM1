import math
n1=int(input("enter start limit"))
n2=int(input("enter end limit"))
for i in range(n1,n2):
    for c in str(i):
        if(int(c)%2==1):
           break
    else:
         a=int(math.sqrt(i));
         if a*a==i:
             print(i)
