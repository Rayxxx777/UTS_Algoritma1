#include <iostream>

using namespace std;

int main(){
	int n,x,t,batas;
	cout<<"dua digit terakhir nim :" ;
	cin>>n;
	x=20;
	t=n;

	batas=n+100;
	x=20;
	t=n;

	while(t<=batas){
		cout<<t<<endl;
		t=t+x;
		x=x+10;
	}
	cout<<t;
	return 0;

}
