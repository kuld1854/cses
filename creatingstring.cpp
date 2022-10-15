#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(string str, int i,vector<string> &sol){
	        if(i == str.length()){
	               sol.push_back(str);
	           
	        }
	        int k = i;
	         for(i = k; i<str.length(); i++ ){
	                   if(str[i] == str[k] && i!=k)
	                           continue;
		                 char temp = str[i];
		                      str[i] = str[k];
		                      str[k] = temp;
		                 solve(str,k+1,sol);
		                      
		       }
               return ; 
	        
	    }
		void find_permutation(string str)
		{
		    sort(str.begin(),str.end());
		    vector <string> sol;
		      solve(str,0,sol);
		     int n = sol.size();
             cout<<n<<endl;
             for(int i=0; i<n; i++)
               cout<<sol[i]<<endl;
            return;
		}
int main(){
    string str;
    cin>>str;
    find_permutation(str);
}