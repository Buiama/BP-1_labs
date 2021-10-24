n = int(input("n = "))
x = float(input("x = "))
s = 1
k = 1
for i in range(1, n):
    k = k*i
    s1 = pow(x, i)/k
    s += s1
    # print("s1 = ", s1)
    # print("s = ", s)
# print("k = ", k)
print("S = ", s)
