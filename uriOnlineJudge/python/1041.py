x, y = input().split()
if float(x) == 0.0:
	print("Origem" if float(y) == 0 else "Eixo Y")
elif float(y) == 0.0 and float(x) != 0:
	print("Eixo X")
elif float(x) > 0:
	print("Q1" if float(y) > 0 else "Q4")
elif float(x) < 0:
	print("Q2" if float(y) > 0 else "Q3")