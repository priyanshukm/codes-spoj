t=int(input())
for i in range(t):
	a=input()
	string=input()
	string=string.split()
	for j in range(5):
		if 'machula' in string[j]:
			if j==4:
				string[j]=str(int(string[0])+int(string[2]))
			elif j==0:
				string[j]=str(int(string[4])-int(string[2]))
			elif j==2:
				string[j]=str(int(string[4])-int(string[0]))
	string=' '.join(string)
	print(string)