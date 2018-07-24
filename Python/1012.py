line1=input().split(" ")
a, b, c = line1
print("TRIANGULO: {:.3f}".format((float(a)*float(c))/2))
print("CIRCULO: {:.3f}".format((float(c)*float(c))*3.14159))
print("TRAPEZIO: {:.3f}".format(((float(a)+float(b))*float(c))/2))
print("QUADRADO: {:.3f}".format(float(b)*float(b)))
print("RETANGULO: {:.3f}".format(float(a)*float(b)))
