#include<stdio.h>
#include<iostream>
using namespace std;
void shuffle(int arr[100], int n){
	int i=0, j=n/2;
	int ans[n];
	for(int k=0;k<n;k=k+2){
		if(j!=n){
		ans[k]=arr[i];
		ans[k+1]=arr[j];
		i++;
		j++;
	}
	}
	for(i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}
int main()
{
	int arr[100],n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	 shuffle(arr,n);
return 0;
}
