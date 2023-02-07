def ch(a,b,c):
    dic = {}
    print(a)
    while True:
        key = input(b)
        if key =="": break
        dic[key] = float(input(c))
    return dic
cost = ch("NHAP BANG GIA:","  Ten mat hang: ","  Gia ban hang: ")
stock = ch("NHAP HANG TON:","  Ten mat hang: ","  So luong ton kho: ")
print("THONG KE HANG TON:")
ls = dict(sorted(cost.items()))
lst = {i : cost[i]*stock[i] if i in stock else 0 for i in ls}
lst = dict(sorted(lst.items(), key = lambda x: x[1], reverse = True))
m = max(len(x) for x in cost)
for i in lst:
    #print(" ",i.ljust(m),'{:.2f}'.format(lst[i]).rjust(6))
    print(" ",f"{f'{i}':<{m}}", f"{f'%.2f'%lst[i]:>6}")



