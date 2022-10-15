#include <iostream>
#include <climits>
using namespace std;
#define fr(i,n) for(int i=0; i<n; i++)
#define ll long long
ll solve(ll arr[], ll sum , ll n,ll y){
     if(n==0)
        return abs(2*y - sum);
     return min(solve(arr,sum,n-1,y+arr[n-1]),solve(arr,sum, n-1, y));
     
}
int main(){
    int  n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
          cin>>arr[i];
    }
    ll sum = 0;
    fr(i,n){
        sum+=arr[i];
    }
     cout<<solve(arr,sum,n,0)<<endl;
}