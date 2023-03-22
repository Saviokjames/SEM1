n=[input("enter intiger  collection 1 : ").split()]
m=[input("enter intiger 2 : ").split()]
if len(n)==len(m):
 print("same length")
else:
 print("different len")
print("sum  of 1st=",sum(n))
print("sum  of 2nd=",sum(m))
if sum(n)==sum(m):
    print("same sum")
else:
    print("different sum")
if set(n)&set(m):
    print("same values occur")
else:
    print("no common")
