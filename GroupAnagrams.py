#Grouping Anagrams together


c = ['star','dog','car','rats','arc','god','hi','ogd']
d={}
for i in c:
	s=sum(ord(k) for k in i)	
	if not d.get(s):
		d[s]=[i]
	else:
		temp=d.get(s)
		temp.append(i)
		d[s]=temp



print d.values()
