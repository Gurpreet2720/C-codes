# include <iostream>
using namespace std;
int fo(int arr[],int n,int k){
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			return i;
			break;
		}
	}
	return -1;
}
int bo(int arr[],int n,int k){
	int ab[n];
	for(int i=0;i<n;i++){
		ab[i]=arr[i];
	}
	
	int c=n-1;
	for(int i=0;i<n/2;i++){
		int temp=arr[i];
		ab[i]=ab[c];
		ab[c]=temp;
		c--;
	}
	for(int i=0;i<n;i++){
		if(ab[i]==k){
			return n-i-1;
			break;
		}	
	}
	return -1;
	
}
int main(){
	for(int i=0;i<2;i++){
		int s;
		cout<<"Enter s"<<endl;
		cin>>s;
		int arr[s];
		for(int j=0;j<s;j++){
			cin>>arr[j];
		}
		int k;
		cout<<"k"<<endl;
		cin>>k;
		int l=fo(arr,s,k);
		cout<<fo<<" ";
		int b=bo(arr,s,k);
		cout<<bo;
		
		
	}
}
