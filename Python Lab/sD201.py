s=input('enter string')
if(s.endswith('ing')):
   s+='ly';
elif(s.endswith('ly')):
   s+='zzz'
else:
   s+='ing'
print("new string=",s)   
