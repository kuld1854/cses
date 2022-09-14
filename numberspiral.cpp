#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long row,col;
        cin>>row>>col;
         long long  ans;
        if(row<=col){
               if(col&1)
                    ans = col*col - (row-1);
               else 
                    ans = (col-1)*(col-1) + row;
        }
        else {  
                if(row&1)
                     ans = (row-1)*(row-1) + col;
                else
                   ans = row*row -(col -1);

            }
       cout<<ans<<endl;
    }
}