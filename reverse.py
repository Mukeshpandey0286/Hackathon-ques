def reverse(a,rev):
    r = int(a%10)
    rev = rev*10 + r
    a = int(a/10)
    if a!=0:
        rev=reverse(a,rev)
    return rev

a = int(input("Enter the number: "))
if a<0:
    print(reverse(-a,0),end="")
    print("-")

elif a>0:
     print(reverse(a,0))
print("")