#include <iostream>
using namespace std;

int main(){
	string kalimat;
	cout<<"Kalimat\t: ";
	getline(cin,kalimat);
	cout<<endl;
	
	
	if (kalimat=="asw" || kalimat=="noob" || kalimat=="cupu"){
			cout << '*';
	}else {cout << kalimat;
		}
	
	cout << endl;
	
	return 0;
}
