#include<iostream>
#include<bits/stdc++.h>
usingnamespacestd;

intmain() {
    intt;
    cout<<"Enter the trials: ";
    cin>>t;
    while(t--){
        intn,current=0;
        cout<<"Enter the total students scores: ";
cin>>n;
        inta[n];
        cout<<"Enter the scores: ";
        for(inti=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(inti=n/2;i>=0;i--){
            if(a[i] != a[n/2]){
                current=i+1;
                break;
            }
        }
        cout<<n-current<<" "<<"Students has highest scored"<<endl;
    }
    return0;
}

