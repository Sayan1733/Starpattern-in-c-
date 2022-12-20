#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n,i,j;
	
	cout<<"Enter the no of rows:";
	cin>>n;
	
	 for(i=0;i<=n;i++){
	 	for(j=1;j<=n-i;j++){
		 cout<<" ";
		}
		for(int l=1;l<=(2*i-1);l++){
			cout<<"*";
		}
		cout<<"\n";
	 }
	return 0;
}
