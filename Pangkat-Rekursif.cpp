#include <iostream>
using namespace std;

int pangkat(int n, int p){
	
	int hasil;
	if (p == 0){
		return hasil = 1;
	}else{
		return pangkat(n, (p-1))*n;
	}
}

int main(){
	int p,n;
	cout << "nilai 		: "; cin >> n;
	cout << "pangkat 	: "; cin >> p;
	cout << "Hasil		: " << pangkat(n,p) << endl;
	
	return 0;
}
