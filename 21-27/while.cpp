#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int array[] = {1,2,3,4,5};
	int* p = &array[0];
	int i = 0;
	
	while(i < 5){
		cout << *p << endl;
		p++;
		i++;
	}
	return 10;
}
