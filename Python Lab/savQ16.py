s=input("enter word")
li=[]
s=list(s)
for i in range(0,len(s)):
 c=s.count(s[i])
 li.append((s[i],c))
print(dict(li))
