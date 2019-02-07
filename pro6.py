def triplet(tot,l):
	a=len(l)
	for i in range(a-2):
		for j in range(i+1,a-1):
			for k in range(j+1,a):
				if l[i]+l[j]+l[k]==tot:
					return l[i],l[j],l[k]

	return 'none'
  
def main():
	a=int(input())
	l=[]
	for i in range(a):
		l.append(int(input()))
	tot=int(input())
	print(triplet(tot,l))
try:
  main()
except:
  print('invalid')
  p
