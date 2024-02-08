'''
Validate and encrypt the password as per the following conditions:
1.	Length of the password should be between 8-12 characters.
        It should contain atleast one uppercase alphabet, lowercase aphabet,
        digits and special characters.
2.	For encryption, replace alphabets with 6-bit binary number
        such that first bit represents lower case (by 0) or
        upper case (by 1) and remaining 5 bit are the binary encoding.
        For example: a 000001, B 100010 and so. 
3.	Replace digits as 0-A, 1-B, 2-C, 3-D, 4-E, 5-F, 6-G,7-H, 8-I, 9-J
4.	Keep the special characters as it is 
For example:
Password: @Ab_%%82
Encrypted Password: @100001000010_%%IC

'''

p_s=input("Enter your password: ")
encry_ps=""
Ac=0
ac=0
nc=0
sc=0
if len(p_s) < 8 or len(p_s) > 12:
    print("Length of the password should be between 8-12 characters." )
    exit()
for ii in p_s:
    if ord(ii) in range(65,91):
        Ac=1
    elif ord(ii) in range(97, 123):
        ac=1
    elif ord(ii) in range(48, 58):
        nc=1
    elif ord(ii) in range(33,127):
        sc=1
        
if not(Ac==1 and ac==1 and nc==1 and sc==1):
    print("Password must contain atleast one uppercase alphabet, lowercase aphabet, digits and special characters.")
    exit()
    


for ii in p_s:
    if ord(ii) in range(65,91):
        x="1"
        x1=bin(ord(ii)-65+1)
        x2=x1[2:]
        for h in range(1,5-len(x2)+1):
            x=x+'0'
        x=x+x2        
        encry_ps=encry_ps+str(x)
    elif ord(ii) in range(97, 123):
        x="0"
        x1=bin(ord(ii)-97+1)
        x2=x1[2:]
        for h in range(1,5-len(x2)+1):
            x=x+'0'
        x=x+x2        
        encry_ps=encry_ps+str(x)
    elif ord(ii) in range(48, 58):
        encry_ps=encry_ps+chr(ord(ii)+17)
    elif ord(ii) in range(33,127):
        encry_ps=encry_ps+ ii

print("The encrypted password is ", encry_ps)
