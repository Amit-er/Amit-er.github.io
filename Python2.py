n = int(input("Enter any Number - "))
c = 2
A=[]
c = 2
while (n > 1):

    if (n % c == 0):
        A.append(c)
        n = n / c
    else:
        c = c + 1
print("Prime Factors are - ",A)
