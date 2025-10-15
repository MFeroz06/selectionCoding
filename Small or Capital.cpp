#include <iostream>
using namespace std;

int main(){
	
	char x;
	cout << "Input any letter : "<<endl;
	cin >> x;
	
	if (x >= 'a'&& x <='z' ){
		
		cout<<"Small letter";
		
		
	}
	else {
		
		cout<<"Capital letter";
	}
	
	
}
