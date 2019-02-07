w=list(input())
b=list(input())
c=len(w)
d=0
i=0
while c>0:
    d=d+(ord(b[i])-ord(w[i]))
    i=i+1
    c=c-1
print(d)
