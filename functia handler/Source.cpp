#include <iostream>
#include <stdlib.h>
#include <new.h>
using namespace std;

void fara_mem(void){
	cerr << "Nu mai exista memorie de alocat...\n";
	exit(0);
}

void main(void){
	char *ptr;
	set_new_handler(fara_mem);
	do{
		ptr=new char[100];
		if(ptr)
			cout << "Tocmai a alocat 1000 octeti\n";
	}while(ptr);

	system("pause");
}