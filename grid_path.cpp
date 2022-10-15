#include <iostream>
using namespace std;
void solve(int i,int j,int n,int **arr,int count,int &sol,string str){
       if( i==n-1 && j==n-1){
         // if path reach to final dest, count != move , it doesnot again reach to sol
            if( count ==  n*n-1)  
              {  //cout<<str<<endl;
                   sol+=1;
              }
               return ;
       }
         if(count >= n*n)       
                return;
        // if path reach to a wall , and have a option to goes both side then it  never reach to final dest
       if((i==0 || i==n-1 ) && ( j>0 && j+1<n)){
             if(arr[i][j-1] == 0 && arr[i][j+1] == 0)
                    return;
       }
        if((j==0 ||  j==n-1) &&  ( i>0 && i+1<n)){
             if(arr[i-1][j] == 0 && arr[i+1][j] == 0)
                    return;
       }
        //int x = 0;
      if(i+1<n && arr[i+1][j]==0){
         //cout<<str<<endl;
           arr[i+1][j] = 1;
          solve(i+1,j,n,arr,count+1,sol,str+'D');
          
          arr[i+1][j] = 0;
         }
      if(i-1>=0 && arr[i-1][j]==0){
           arr[i-1][j] = 1;
          solve(i-1,j,n,arr,count+1,sol,str+'U');
          arr[i-1][j] = 0;
         }
       if(j+1<n && arr[i][j+1]==0){
           arr[i][j+1] = 1;
          solve(i,j+1,n,arr,count+1,sol,str+'R');
          arr[i][j+1] = 0;
         }
         if(j-1>=0 && arr[i][j-1]==0){
           arr[i][j-1] = 1;
          solve(i,j-1,n,arr,count+1,sol,str+'L');
          arr[i][j-1] = 0;
         }
      
    

}
int main(){
    int n;
    cin>>n;
    int **arr;
    arr = new int*[n];
    for(int i=0; i<n; i++){
          arr[i] = new int[n];
    }
     // cout<<move(n)<<endl;
     for(int i=0; i<n; i++)
       for(int j=0; j<n; j++)
           arr[i][j] =0;
     int count = 0,sol = 0;
     arr[0][0] = 1;
     string str;
     solve(0,0,n,arr,count,sol,str);
     cout<<sol<<endl;
}