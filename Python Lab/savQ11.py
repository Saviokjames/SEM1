s=input("enter names")
s=s.split()
a=[s for s in s if s.startswith('a')]
print(len(a))

