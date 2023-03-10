#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
intT;
    cout<<"enter the test cases:";
    cin>>T; 
    while(T--) {
        intN;
        cout<<"enter the total no. of horses:";
        cin>>N;
        intS[N];
        cout<<"enter the skills for each horses:";
        for(inti=0;i<N;i++) {
            cin>>S[i]; 
        }
        sort(S, S+N); 
        intmin_diff = INT_MAX; 
        for(inti=1;i<N;i++) {
            intdiff = S[i] - S[i-1]; 
            if(diff<min_diff) {
                min_diff = diff; 
            }
        }
        cout<<"Thed most skilled horses is at"<<" "<<min_diff<<" "<<"posistion";
        cout<<  endl; 
    }
    return 0;
}
