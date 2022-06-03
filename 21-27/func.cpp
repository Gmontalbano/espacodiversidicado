#include <iostream>

using namespace std;

void func(int* n){
	*n = 20;
	cout << "Alterado o valor pela função" << endl;
}

int main(int argc, char *argv[]){
	int var = 10;
	int *p;
	p = &var;
	cout << "Valor original variavel" << endl;
	cout << var << endl;
	cout << "Valor pelo ponteiro" << endl;
	cout << *p << endl;
	
	func(p);
	
	cout << "Novo valor da variavel " << endl;
	cout << var << endl;
	cout << "Novo valor acessando pelo ponteiro" << endl;
	cout << *p << endl;	
	return 10;
}
