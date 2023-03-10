#include<iostream>
usingnamespacestd;

intmain() {
    cout<<"enter the size of an array:";
    intN;
    cin>>N; 
    intarr[N];
        cout<<"enter the elements of an array:";
    for(inti=0;i<N;i++) {
        cin>>arr[i]; 
    }
    
    cout<<"The elements in a reverse order of an array is:";

    for(inti=N-1;i>=0;i--) {
        cout<<arr[i] <<" "; }
    return0;
}
