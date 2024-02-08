s=input("Enter a String: ")
l=0
for i in s:
    l=l+1
for i in range(0, l):
    if s[i] !=s[l-i-1]:
        print("The string is not pallindrome")
        break
else:
    print("The string is a pallindrome")


