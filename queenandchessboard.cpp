#include <iostream>
using namespace std;
  bool update(char **arr , int i, int j,int n){
            // for row
             for(int z=0; z<n; z++){
                      if(z != j){
                            if(arr[i][z]=='1')
                                  return false;
                           // arr[i][z] = 0;
                           }
                }
            // for col
              for(int z=0; z<n; z++){
                      if(z != i){
                             if(arr[z][j]=='1')
                                  return false;
                            //arr[z][j] = 0;
                      }
                }
            // for diagonal
               // for (1,1)
               int temp_i = i, temp_j = j;
                  while(temp_j<n-1 && temp_i < n-1){
                              temp_i++;
                              temp_j++;
                           if(arr[temp_i][temp_j] == '1')
                                   return false;
                            //arr[temp_i][temp_j] = 0;
                  }
                 // for(-1,-1)
                  temp_i = i, temp_j = j;
                  while(temp_j>0 && temp_i>0){
                              temp_i--;
                              temp_j--;
                           if(arr[temp_i][temp_j] == '1')
                                   return false;
                           // arr[temp_i][temp_j] = 0;
                  }
                 // for(1,-1)
                  temp_i = i, temp_j = j;
                  while(temp_i<n-1 && temp_j>0){
                              temp_i++;
                              temp_j--;
                           if(arr[temp_i][temp_j] == '1')
                                   return false;
                          //  arr[temp_i][temp_j] = 0;
                  }
                  // for(-1,1)
                  temp_i = i, temp_j = j;
                  while(temp_j<n-1 && temp_i>0){
                              temp_i--;
                              temp_j++;
                           if(arr[temp_i][temp_j] == '1')
                                   return false;
                            //arr[temp_i][temp_j] = 0;
                  }
               
                return true;
            }
 void solve(char **arr , int n, int ind,int &count){
            if(ind==n){
                     count+=1;
                    return;
                 }
            bool r ;
            for(int i=0; i<n; i++){
                 if(arr[i][ind] != '*') 
                 {   arr[i][ind] = '1';
                     r = update(arr,i,ind,n);
                  if(r){
                              solve(arr,n,ind+1,count);
                            
                        }
                      arr[i][ind] = '.';
                 }
            }
     }
int main(){
    char **arr;
    arr = new char*[8];
    for(int i=0; i<8; i++)
         arr[i] = new char[8];
    for(int i=0; i<8; i++){
          for(int j=0; j<8; j++)
                   cin>>arr[i][j];
              }
      int count = 0;
    solve(arr,8,0,count);
    cout<<count<<endl;
}