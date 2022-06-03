#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int var = 10;
	int *p;
	p = &var;
	cout << "Valor original variavel" << endl;
	cout << var << endl;
	cout << "Valor pelo ponteiro" << endl;
	cout << *p << endl;
	
	*p = 20;
	cout << "Alterado o valor por ponteiro" << endl;
	cout << "Novo valor da variavel " << endl;
	cout << var << endl;
	cout << "Novo valor acessando pelo ponteiro" << endl;
	cout << *p << endl;	
	return 10;
}
