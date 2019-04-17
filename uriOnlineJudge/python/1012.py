a, b, c = input().split()
a, b, c = [float(a), float(b), float(c)]
print("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f"%((a*c)/2,3.14159*(c*c),((a+b)*c)/2,b*b,a*b))