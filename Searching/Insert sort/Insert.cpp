#include <iostream>
using namespace std;

void insert(int data[]){
//	int temp;
//	for(int i=1; i<=10; i++){
//		if (data[i] < data[i-1]){
//			temp = data[i];
//			data[i] = data[i-1];
//			data[i-1] = temp;
//			
//		}
//	}


	int temp, j;
	int n = 10;
	for (int i=1; i<n; i++){
		temp = data[i];
		j = i;
		while (data[j]<data[j-1] && j>0){
			data[j] = data[j-1];
			data[j-1] = temp;
			j--;
			cout << "*"<< j <<"*";
		}
	}


}

int main(){
	int data[10] = {3,0,1,8,7,2,5,4,9,6};
	insert(data);
	
	for (int i=0; i<10; i++){
		cout << data[i] << ",";
	}
	
	
	
	
	
}

//	int temp, j;
//	for (int i=1; i<n; i++){
//		temp = data[i];
//		j = i;
//		while (data[j]<data[j-1] && j>0){
//			data[j] = data[j-1];
//			data[j-1] = temp;
//			j--;
//		}
//	}
