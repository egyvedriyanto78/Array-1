#include <iostream>
using namespace std;

int main(){
	char nama[5]="evan";
	
	for (char x : nama){
		if (x=='a'){
		    cout<<'*';
		}else {cout << x;
		}
		
	}
	cout << endl;
	
	return 0;
}
