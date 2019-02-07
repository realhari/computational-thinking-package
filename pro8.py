def hcf(m1,m2):
	while(m2!=0):
		t=m2
		m2=m1%m2
		m1=t
	return m1
def main():
	n,a=input().split()
	n=int(n)
	a=int(a)
	(l,r)=([],[])
	l=list(map(int,input().split()))
	for c in range(a):
		m1,m2=input().split()
		m1=int(m1)
		m2=int(m2)
		r.append(hcf(l[m1-1],l[m2-1]))
	for i in r:
		print(i)
try:
  main()
except:
  print('invalid')
