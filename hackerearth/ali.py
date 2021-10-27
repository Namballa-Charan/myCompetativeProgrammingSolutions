string = input()
temp=[];
flag=0
vowels=['A','E','I','O','U','Y']
for i in vowels:
    if(string[2]==i):
        flag=1
        break
if flag!=1:
    a=(int(string[0])+int(string[1]))%2
    b=(int(string[3])+int(string[4]))%2
    c=(int(string[4])+int(string[5]))%2
    d=(int(string[7])+int(string[8]))%2
    #print(a,"\t",b,"\t",c,"\t",d,"\t")
    if a!=0 or b!=0 or c!=0 or d!=0:
        flag=1;
    else:
        flag=0
    if(flag==1):
        print("invalid")
    else:
        print("valid")
else:
    print("invalid")
