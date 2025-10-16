#include <iostream>
using namespace std;

int main(){
	
	string name;
	cout << "Enter your name: "<<endl;
	cin >> name;
	
	int age;
	cout << "Enter your age : "<<endl;
	cin >> age;
	
	if (age<45){
		
		cout<<"You are eligible to take a PhD programme. "<<endl;
		
	}
	
	else {
		
		cout <<"You are not eligible to take a PhD programme";
		
	}
	
	
	
	
}
