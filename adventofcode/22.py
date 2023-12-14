
# both of 21 and 22 are not woring for Game 100: lol
res=0

while(1):
    s=input()
    scopy=s.split()
    numerr=scopy[1]
    gamenumber=int(numerr[:-1])
    news=s[8:]
    # print(news)
    arr=(i for i in news.split(";"))
    power=1
    possible=True
    dic={"red": 0, "green": 0, "blue":0}
    
    
    for a in arr:
        comasep=a.split(",")
        for pari in comasep:
            print(pari)
            num, col= pari.split()
            dic[col]= max(dic[col],int(num))
    
    for i,j in dic.items():
        power*=j        
        
    res+=power
    print(res)