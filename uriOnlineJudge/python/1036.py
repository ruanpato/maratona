import math
a, b, c = input().split()
if ((float(b)*float(b)) - (4*float(a)*float(c))) < 0 or float(a) == 0:
    print("Impossivel calcular")
else:
    print("R1 = {:.5f}".format( (-float(b) + math.sqrt(((float(b)*float(b)) - (4*float(a)*float(c)))))/(2*float(a)) ))
    print("R2 = {:.5f}".format( (-float(b) - math.sqrt(((float(b)*float(b)) - (4*float(a)*float(c)))))/(2*float(a)) ))