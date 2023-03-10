#include<iostream>
usingnamespacestd;

intmain() {
    // your code goes here
    intt,x,y,ans;
    cout<<"enter the trials:";
    cin>>t;
    while(t--)
    {
        cout<<"enter the value of x and y:";
        cin>>x>>y;
        ans=x/y;
        ans+=(x%y);
        cout<<ans<<endl;
    }
    
    return0;
}
