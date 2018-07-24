line1=input().split(" ")
a, b, c = line1
ab = int( (int(a) + int(b) + abs(int(a)-int(b)))/2 )
print( int((int(ab) + int(c) + abs(int(ab)-int(c)))/2) , "eh o maior" )