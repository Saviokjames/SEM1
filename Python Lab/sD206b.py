l=input("enter list elements with space")
l=l.split()
list=[int(i) for i in l]
print(list)
item=int(input("enter the item to search"))
if(item in list):
    print("available")
else:
    print("unavailable")
 
