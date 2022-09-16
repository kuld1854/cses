#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int  a,b;
        cin>>a>>b;
        if((a+b)%3==0 && abs(a-b)<=(a+b)/3 )
             cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
    }
    return 0;
}