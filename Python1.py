num = int(input("Enter any Number -  "))
while(num>0):
    j=num%10
    if j!=0 and j!=1:
        print("Number is not binary")
        break
    num=num//10
    if num==0:
        print("Number is binary") 
