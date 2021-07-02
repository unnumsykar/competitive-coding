#include<iostream>
 
using namespace std;
 
int main(){
    int n; cin>>n;
    if(n>=1&&n<=100){
	
    if(n==2){
    	cout<<"NO"<<endl;
	}
    else
     if(n%2==0){
    	cout<<"YES"<<endl;
	}
	else  
	  if(n%2!=0){
	  	cout<<"NO"<<endl;
	  }
}
	return 0;
}
