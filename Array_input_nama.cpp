#include <iostream>
using namespace std;

int main(){
	string kalimat;
	cout<<"Kalimat\t: ";
	getline(cin,kalimat);
	cout<<endl;
	
	for (char x : kalimat){
		if (x=='a' || x=='n' || x=='i'){
			cout << '*';
		}else {cout << x;
		}
	}
	cout << endl;
	
	return 0;
}
