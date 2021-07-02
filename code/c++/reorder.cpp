#include<bits/stdc++.h>
using namespace std;
 
int main(){
/*	#ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
*/
    ios::sync_with_stdio(0);
	  cin.tie(0);
	  cout.tie(0);
 
 
	  int t; cin>>t;
	  while(t--){
		       int n, m;
		       cin>>n>>m;
		       int arr[n];
		         	for(int i=0;i<n;i++){
				      cin>>arr[i];
		        	}
			        int sum=0;
			        for(int i=0;i<n;i++){
			            	sum+=arr[i];
		        	}
		        	if(sum==m){
				          cout<<"YES"<<endl;
			        }
		        	else
			          	cout<<"NO"<<endl;
	            }
 
 
	return 0; 
	
}
