from math import sqrt
line1=input().split(" ")
line2=input().split(" ")
x0, y0 = line1
x1, y1 = line2
print("{:.4f}".format( (sqrt(((float(x0)-float(x1))*(float(x0)-float(x1))) + ((float(y0)-float(y1))*(float(y0)-float(y1))))) ))
