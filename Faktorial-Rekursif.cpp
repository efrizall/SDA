#include <iostream>
using namespace std;

int faktorial(int nilai){
	if (nilai == 1){
		cout << "1";
		return nilai;
	}else{
		cout << nilai << " x ";
		return nilai * faktorial(nilai - 1);
	}
}

int main(){
	
	int nilai, hasil;
	
	cout << "Faktorial dari	: "; cin >> nilai;
	
	hasil = faktorial(nilai);
	cout << "\nHasil		: " << hasil << endl;
	
	return 0;
}
