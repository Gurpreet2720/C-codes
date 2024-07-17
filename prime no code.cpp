# include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;
int c=1;
for(int i=2;i<n;i++){
	if(n%i==0){
		c=2;
		break;
	}
}
if(c==2){
	cout<<"Not a Prime number"<<endl;
}
else{
	cout<<"A prime number"<<endl;
}
}
