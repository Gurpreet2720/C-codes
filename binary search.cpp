# include <iostream>
using namespace std;
int main(){
	int key;
	cout<<"Enter"<<endl;
	cin>>key;
	int arr[6]={2,3,9,10,11,12};
//	int start=0;
//	int end=5;
//	int mid=start+end/2;
//	while(start<=end){
//		
//		if(arr[mid]==key){
//			cout<<mid;
//		}
//		else if(arr[mid]>key){
//			end=mid-1;
//			
//			
//		}
//		else{
//			start=mid+1;
//		}
//		mid=start+end/2;
//	}
//	cout<<"NOT found";
//}
    int start = 0;
    int end = -1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            cout<< mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}
