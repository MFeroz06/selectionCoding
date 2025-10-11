#include <iostream>
using namespace std;

int main(){
	
	string studentName;
	cout<<"Please enter your name"<<endl;
	cin >> studentName;
	
	double gradePoint;
	cout << "Please enter your Grade Point "<<endl;
	cin>> gradePoint;
	
	if (gradePoint>=3.5 && gradePoint<= 4.00){
		cout<<"Name : "<<studentName<<endl<<"Transcript Message : Highest Honours"<<endl;
		//cout<<"Transcript Message : Highest Honours "<< endl;
		
	}
	
	else if (gradePoint>=3.0 && gradePoint<=3.49){
		
		cout<<"Name : "<<studentName<<endl;
		cout<<"Transcript Message : Dean's List "<<endl;
	}
	else if (gradePoint >=2.0 && gradePoint<=2.99){
		
		cout<<"Name : "<<studentName<<endl;
		cout<<"Transcript Message : Average "<<endl;
		
	}
	else if (gradePoint >=1.0 && gradePoint <= 1.99){
		
		cout << "Name : "<<studentName<<endl;
		cout << "Transcript Message : On probation "<<endl;
	}
	else if (gradePoint >=0.0 && gradePoint <= 0.99){
		
		cout << "Name : "<<studentName<<endl;
		cout<< "Transcript Message : Failed ";
		
	}
	else {
		cout << "Name : "<<studentName<<endl;
		cout << "Invalid Grade Point";
		
	}
	
}
