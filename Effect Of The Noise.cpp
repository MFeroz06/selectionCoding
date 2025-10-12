#include <iostream>
using namespace std;

int main(){
	
	int noiseLoud;
	cout << "Loudness of the noise ?"<<endl;
	cin >> noiseLoud;
	
	if (noiseLoud>110){
		
		cout<<"Perception : Uncomfortable"<<endl;
	}
	else if (noiseLoud>=91 && noiseLoud<=110){
		
		cout<<"Perception : Very Annoying"<<endl;
	}
	else if (noiseLoud>=71 && noiseLoud<=90){
		
		cout<<"Perception : Annoying"<<endl;
	}
	else if (noiseLoud>=51 && noiseLoud<=70){
		
		cout<<"Perception : Intrusive"<<endl;
		
		
	}
	else {
		cout<<"Perception : Quiet"<<endl;
		
	}
	
	
}
