# include <iostream>
using namespace std;
int main(){
	int a;
	int b=0;
	cout<<"Enter the NUM"<<endl;
	cin>>a;
	for(int i=2;i<a;i++){
		if(a%i==0){
			b=1;
		}
	}
	if(b==1){
		cout<<"Is not Prime"<<endl;
		
	}
	else{
		cout<<"Prime Number"<<endl;
	}
}
