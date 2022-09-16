#include <iostream>
//#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int len = str.length();
    int arr[26] = {0};
    for(int i=0; i<len; i++)
         arr[str[i]-'A']++;
    int i ;
    bool odd = false;
    int index = 0;
    if(len%2)
       odd = true;
    for( i=0; i<26; i++){
        if(arr[i]%2!=0 ){
             if(odd){
               odd = false;
               index = i;
               arr[i]/=2;
               }
            else 
                 break;
          }
        else 
          arr[i]/=2;
      }
    if(i==26){
              string ans = "";
              for(int i=0; i<26; i++){
                   while(arr[i]--)
                          ans+= 'A'+i;
                    }
                    string  rev = ans;
                    reverse(rev.begin(),rev.end());;
              if(len%2)
                    ans+= 'A'+index;
                   ans+=rev;
             cout<<ans<<endl;
              }
        else
             cout<<"NO SOLUTION"<<endl;
}