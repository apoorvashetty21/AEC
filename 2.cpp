#include<iostream>
usingnamespacestd;

intmain() {
    intt,m,h,b;
    cout<<"enter the trials:";
    std::cin>>t;
    while(t--){
        cout<<"enter the values of m and h:";
        std::cin>>m>>h;
        b=m/(h*h);
        if(b<=18){
            std::cout<<1<<std::endl;
        }
        elseif(b>=19&&b<=24){
            std::cout<<2<<std::endl;
        }
        elseif(b>=25&&b<=29){
            std::cout<<3<<std::endl;
        }
        else{
            std::cout<<4<<std::endl;
        }
        
    }
    return0;
}
