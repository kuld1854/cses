#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    if(n==1){
       cout<<"1"<<endl;
       return 0;
    }
    if(n<=3)
        cout<<"NO SOLUTION"<<endl;
    else if(n==4)
         cout<<"2 4 1 3"<<endl;
    else {
          t =  n-1;
          while(n>0){
              cout<<n<<" ";
              n-=2; 
          }
          while(t>0){
              cout<<t<<" ";
              t-=2;
          }
          cout<<endl;
    }

         
       
}