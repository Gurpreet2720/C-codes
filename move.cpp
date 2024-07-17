# include <iostream>
using namespace std;
int main(){
	int arr[5]={0,1,0,3,12};
	int i=0;
	int c=0;
	for(int j=0;j<5;j++){
		if(arr[i]==0){
			c++;
		}
	}
	int p=5;
	int cp=5;
	while(c<=0&&i<cp){
		if(arr[i]==0){
			int temp=arr[i];
			arr[i]=arr[p];
			arr[p]=arr[temp];
			p--;
			i++;
		}
	}
	for(int j=0;j<5;j++){
		cout<<arr[j];
	}
}
