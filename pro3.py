x=list(input())
b=list(input())
d=len(x)
e=len(b)
i=0
j=0
c=[]
while d>0:
    if x[i]==b[j]:
        c.append(x[i])
    j=j+1
    i=i+1
    d=d-1
print(e-len(c))
