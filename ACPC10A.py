n=input();
while(n!="0 0 0"):
    n=n.split(" ");
    a=int(n[0]);    
    b=int(n[1]);
    c=int(n[2]);
    if((b-a)==(c-b)):
        print("AP",(2*c)-b)
    else:
        print("GP",(c*c)//b)
    n=input()