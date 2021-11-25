#include <iostream>
using namespace std;

int main (){
	string nama = "evan";
	
	for(int i=0; i<5; i++){
		if(nama[i]=='v'){
			continue;
		}
		cout << nama [i];
	}
	cout << endl;
	
	return 0;
}
