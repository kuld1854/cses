#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pow = 1,t = n, temp,index = 2;
    while(t--){
         pow*=2;
    }
    string  str[pow];
    str[0] = "0";
    str[1] = "1";
    pow = 2;

    for(int i=1; i<n; i++){
               temp = pow;
           while(temp--){
                  str[index] =  "1" + str[temp];
                  str[temp] =  "0" + str[temp];
                  index++;
           }
           pow*=2;
    }
    for(int i=0; i<pow; i++){
            
             cout<<str[i]<<endl;
    }

}