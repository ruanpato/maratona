import math
x0, y0=input().split()
x0, y0=[float(x0), float(y0)]
x1, y1=input().split()
x1, y1=[float(x1), float(y1)]
print("%.4f"%(math.sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0))))
