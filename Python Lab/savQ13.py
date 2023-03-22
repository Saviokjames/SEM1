n=int(input("no"))
dict1={}
for i in range(n):
 k=input("enter key ")
 v=input("enter values")
 dict1[k]=v
print(sorted(dict1.items()))
