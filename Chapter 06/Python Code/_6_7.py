'''
Take percentage marks of ten students as input
from the user and assign them class rank.
'''
n=10
m_l=[]
m_s=[]
for ii in range (0, n):
    m_l.append(int(input("Enter the percentage marks: ")))
    m_s.append(ii+1)

for jj in range(0,n-1):
    for ii in range(0, n-jj-1):
        if m_l[ii] < m_l[ii+1]:
            m_l[ii],m_l[ii+1]=m_l[ii+1],m_l[ii]
            m_s[ii],m_s[ii+1]=m_s[ii+1],m_s[ii]

print("Students in order of their ranking are", m_s)
