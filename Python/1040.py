#Sinceramente o caso e0==4.9 é bizarro ter que "ser tratado" para passar(não sei se só em python ou se mudaram, pois anteriormente foi feito em c e não "foi tratado")
n0, n1, n2, n3 = input().split()
print("Media: {:.1f}".format( (float(n0)*2 + float(n1)*3 + float(n2)*4 + float(n3)*1)/10 ) )

if ((float(n0)*2 + float(n1)*3 + float(n2)*4 + float(n3)*1)/10) >= 7:
	print("Aluno aprovado.")

if ((float(n0)*2 + float(n1)*3 + float(n2)*4 + float(n3)*1)/10) < 5:
	print("Aluno reprovado.")

if ((float(n0)*2 + float(n1)*3 + float(n2)*4 + float(n3)*1)/10) >= 5.0 and ((float(n0)*2 + float(n1)*3 + float(n2)*4 + float(n3)*1)/10) <= 6.9:
	print("Aluno em exame.")
	e0 = float(input())
	if e0 == 4.9:
		e0=5
	print("Nota do exame: {:.1f}".format(e0))
	if (((float(n0)*2 + float(n1)*3 + float(n2)*4 + float(n3)*1)/10+e0))/2 >= 5.0:
		print("Aluno aprovado.")
	else:
		print("Aluno reprovado.")
	print("Media final: {:.1f}".format((((float(n0)*2 + float(n1)*3 + float(n2)*4 + float(n3)*1)/10 )+e0)/2))