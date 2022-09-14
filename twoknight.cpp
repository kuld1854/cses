#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     long long int t  = 1,ans  = 0;
    while(n >= 1){
        
        //  if(t==1){
        //     cout<<"0"<<endl;
        //     t++;
        //  }
         ans = ((t*t)*(t*t - 1)/2) - (t-2)*(t-1)*4;
         cout<<ans<<endl;
         t++;
         n--;
    }
}