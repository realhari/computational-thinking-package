x=int(input())
print("0" if x>0 and (x & (x-1))==0 else "1")
