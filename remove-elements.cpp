#include<iostream>
using namespace std;
int remove(int arr[100],int n, int key){
	int i,j,k=0;
	for(i=n-1;i>=0;i--){
		if(arr[i]!=key){
			j=i;
			break;
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]==key){
			arr[i]=arr[j];
			j--;
			k++;
		}
	}
	return k;	
}
int main(){
	int key,n,arr[100];
	cin>>n;
	cin>>key;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k = remove(arr,n, key);
	for(int i =0 ;i<n-k;i++){
		cout<<arr[i]<<" ";
	}
}
