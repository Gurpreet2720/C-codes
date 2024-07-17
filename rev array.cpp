	#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int c=n/2;
    int p=n-1;
    for(int i=0;i<c;i++){
        int temp=arr[i];
        arr[i]=arr[p];
        arr[p]=temp;
        p--;
        
    }
    cout<<"after reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
