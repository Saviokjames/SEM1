n=int(input("enter step no:"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print(i*j,end=' ');
        j+=1;
    print("")
