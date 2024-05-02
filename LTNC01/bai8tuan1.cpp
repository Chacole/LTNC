#include<iostream>
using namespace std;
int main(){
	int n,k=0;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++){
		cin>>a[n];
	}
	for(int i=1;i<n-1;i++){
		int t=0,p=0;
		for(int j=0;j<i;j++){
			t+=a[j];
		}
		for(int j=i+1;j<n;j++){
			p+=a[j];
		}
		if(t==p) k++; 
	}
	if(k==0) cout<<"NO";
	else cout<<"YES";
	return 0;
}
