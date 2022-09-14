#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int len  = str.length();
    int maxi = 1,current = 1;
    for(int i=1; i<len; i++){
           if(str[i] == str[i-1])
                   current++;
            else {
                    if(maxi < current )
                           maxi = current; 
                    current = 1;   
            }
       }
       if(maxi < current )
           maxi = current;
     cout<<maxi<<endl;
}