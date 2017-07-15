def listBeautifier(a):
    res = a[:]
    while res and res[0] != res[-1]:
         b, *res, c = res
    return res
