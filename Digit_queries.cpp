#include <iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        long long int k;
        cin>>k;
        long long int digit=1,tens=1,sum =0, count = 0;
        while(sum<=k){
              sum += (9*digit*tens);
              digit++;
              tens*=10;
        }
         digit--;
         tens/=10;
         sum-=( 9*digit*tens);
         k = k - sum;
         tens--;
         if(k%digit==0)
               count = k/digit;
         else 
                count = (k+digit)/digit;
          tens+=count;
          if(k%digit!=0)
            { string str = to_string(tens);
              cout<<str[(k%digit)-1]<<endl;
            }
           else {
                 cout<<tens%10<<endl;
           }
    }
    return 0;
}