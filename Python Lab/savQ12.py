n=int(input("no"))
dict1={}
for i in range(n):
 k=input("enter key ")
 v=input("enter values")
 dict1[k]=v
print(dict1)
dict2={}
for i in range(n):
 k2=input("enter key ")
 v2=input("enter values")
 dict2[k2]=v2
print(dict2)
dict1.update(dict2)
print(dict1)

