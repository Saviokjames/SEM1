a=input("enter string")
b=a.split()
b.sort(key = len)
print(b)
print(b[-1],"length of longest word=",len(b[-1]))
if(len(b[-1])==len(b[-2])):
    print("BINGO")



 
