#include<iostream>
using namespace std;
int main(){
	int n,d=0,aa=0,k=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0) d++;
		else if(a[i]<0) aa++;
		else k++;
	}
	double td=(double)d/n;
	double ta=(double)aa/n;
	double t0=(double)k/n;
	cout<<td<<endl<<ta<<endl<<t0;
	return 0;
}
