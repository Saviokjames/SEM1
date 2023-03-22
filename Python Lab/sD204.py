a=input("enter string")
if(len(a)>2):
    print("new word=",a[0:2]+a[-2:])
elif(len(a)<=2):
     print("new word=",a[0:2]+a[0:2])
else:
     print("")
