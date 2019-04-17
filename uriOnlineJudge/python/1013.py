a, b, c = input().split()
a, b, c = [int(a), int(b), int(c)]
print("%d eh o maior"%(max(a, (max(b, c)))))
