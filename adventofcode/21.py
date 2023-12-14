
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
    
    possible=True
    
    for a in arr:
        b=0
        r=0
        g=0
        comasep=a.split(",")
        for pari in comasep:
            print(pari)
            num, col= pari.split()
            num=int(num)
            if (col == "blue"):
                if(num>14):
                    possible=False
            if (col == "red"):
                if(num>12):
                    possible=False
                    
            if (col == "green"):
                if(num>13):
                    possible=False
            
            
        
    if(possible):res+=gamenumber
    print(res)