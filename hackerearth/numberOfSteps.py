n= int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
i=0
count=0
while(i<n-1):
    for j in range(n):
        if a[i]!=a[i+1]:
            if(a[j]>=b[j]):
                a[j]=a[j]-b[j]
        count+=1
    if a[i]!=a[i+1] and a[i]<b[i]:
        i=i+1;
print(a,'',b)
for i in range(n-1):
    if a[i]!=a[i+1]:
        print("-1")
        break
    else:
        print(count)
