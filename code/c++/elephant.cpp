#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(0);
	  cin.tie(0);
	  cout.tie(0);
 
	  int x;
	  cin>>x;
	  int output=0;
	  if(x<5){cout<<"1"<<endl;}
	  else if(x%5==0){output=x/5; cout<<output<<endl;}
	  else if(x>5 && x%5!=0){output=(x/5)+1; cout<<output<<endl;}
 
 
 
	  return 0; 
	
}
