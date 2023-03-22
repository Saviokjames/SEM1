s=input("enter sentance")
li=[]
s=s.split()
for i in range(0,len(s)):
 c=s.count(s[i])
 li.append((s[i],c))
print(dict(li))
          
              
              
  
