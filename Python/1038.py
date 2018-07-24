cod, qnt = input().split()
if cod == '1':
    print("Total: R$ {:.2f}".format(int(qnt)*4.00))
elif cod == '2':
    print("Total: R$ {:.2f}".format(int(qnt)*4.50))
elif cod == '3':
    print("Total: R$ {:.2f}".format(int(qnt)*5.00))
elif cod == '4':
    print("Total: R$ {:.2f}".format(int(qnt)*2.00))
elif cod == '5':
    print("Total: R$ {:.2f}".format(int(qnt)*1.50))
