#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){

        ll n,t2;
        cin>>n;
        if(n!=1)
        {
            if(n%4==0){
                cout<<"1"<<" "<<n<<"\n";
            }
            else if(n%4==3){
                cout<<"0\n";
            }
            else if(n%4==1){
                cout<<"1"<<" "<<"1"<<"\n";
            }
            else if(n%4==2){
                cout<<"2 "<<n<<" "<<"1\n";
            }
       }
       else{
        cout<<"1 1\n";
       }

        

    }

 }
