xm,ym,xr,yr = map(int, input().split())
cruzamento = abs(xm-xr) + abs(ym-yr)
if (cruzamento and xm != xr or ym != yr):
    print(cruzamento)