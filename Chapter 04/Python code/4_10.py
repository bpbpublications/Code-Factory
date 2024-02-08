s= input("Enter a string: ")
v=0
for i in s:
    if ord(i) in range(65,91) or ord(i) in range(97,123):
        if(i != 'a' and i != 'e' and i != 'i' and i != 'o' and i != 'u'):
            v=v+1
    else:
        print("Special character encountered. ")
        break
print ("There are ", v, "consonants in the string.")
