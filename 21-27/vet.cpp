#include <iostream>

using namespace std;

void func(int vet[]){
	vet[0] = 110;
}

int main(int argc, char *argv[]){
	int* vet = new int[10];
	int aux[10];
	
	*(vet + 0) = 10;
	*(vet + 1) = 20;
	*(vet + 2) = 30;
	
	func(aux);
	
	cout << aux[0] << endl;
	return 10;
}
