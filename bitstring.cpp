#include <iostream>
using namespace std;
int main(){
     int n;
     long long int a = 2 , m =  1000000007 , mul = 1 , res =  1;
     cin>>n;
     while(n>0){
           if(n&1)
               res = (res*a)%m;  // loop work till  b =  1  , always in last step if is true.
            a = (a*a)%m;
            n = n>>1;
     }
     cout<<res%m<<endl;  

}