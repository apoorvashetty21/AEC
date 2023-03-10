#include<iostream>
usingnamespacestd;

intmain() {
    intT;
    cout<<"enter the trails:";
    cin>>T;
    while(T--) {
        intX, Y, Z;
        cout<<"enter the elements of input X, Y, Z:";
        cin>>X>>Y>>Z; 
        inttotal_time = X * Y; 
        intbreaks = X / 3; 
        intbreak_time = breaks * Z; 
        intsession_time = total_time + break_time; 
        if(X % 3 == 0) {
            session_time -= Z; 
        }
        cout<<"Length of Chetan's gaming session is:";
        cout<<session_time<<endl;
    }
    return0;
}

