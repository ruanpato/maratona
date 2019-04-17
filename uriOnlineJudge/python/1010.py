line1=input().split(" ")
line2=input().split(" ")
c0, q0, v0 = line1
c1, q1, v1 = line2
print("VALOR A PAGAR: R$ {:.2f}".format( int(q0)*float(v0)+int(q1)*float(v1) ))
