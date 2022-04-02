import random
t=random.randint(1,100)
fil1=open("test5.txt","w")
fil1.write(str(t)+"\n")
while t:
    n=random.randint(1,1e4)
    m=random.randint(1,1e4)
    fil1.write(str(n)+" ")
    fil1.write(str(m)+"\n")
    while m:
        # print(random.randint(1,1e9))
        fil1.write(str(random.randint(1,1e4))+" ")
        m-=1
    fil1.write("\n")
    t-=1