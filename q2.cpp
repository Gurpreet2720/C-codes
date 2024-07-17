# include <iostream>
using namespace std;


int main(){
	int z;
	cin>>z;
	for(int i=1;i<=z;i++){
		bool c=true;
		for(int j=2;j<i;j++){
			if(i%j==0){
				c=false;
				break;
			}
		}
		if(c==true){
			cout<<i<<endl;
		}
	}
}
	

