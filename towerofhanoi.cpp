#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int n,int from, int to , int use ){
      if(n<1)
              return;
      solve(n-1 , from , use, to);
      cout<<from<<" "<<to<<endl;
      solve(n-1, use , to , from);
      return ;
}

int main(){
    int t;
    cin>>t;
    int n = 1,temp = t-1;
    while(temp--)
        n =  (n*2)+1;
    cout<<n<<endl;
    solve(t,1,3,2);
    return 0;
}