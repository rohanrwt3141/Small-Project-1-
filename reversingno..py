a=int(input("Enter The No."))
s=0
while(a/10!=0):
    s=s*10
    s=s+(a%10)*10
    a=a//10
print(s//10)
