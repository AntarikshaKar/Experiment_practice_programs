a=[0,1,2,3,4,5,6]

sum1=3 #search pair for sum 5

kc=[]
final=[]
for i in a:
	for j in a[1:]:
		kc=[i,j]

		if sum(kc)==sum1:
			final.append(kc)

print(final)






















