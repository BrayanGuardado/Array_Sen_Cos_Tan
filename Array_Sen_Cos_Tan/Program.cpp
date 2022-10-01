#include "Program.h"
#include"Math.h"
#include<windows.h>
#include<iostream>
using namespace std;
void Program::run() {

	Math array;
	
	while (exit != 2) {

		system("cls");
		cout << "Type your option" << endl;
		cout << "1) Array Multiplication" << endl;
		cout << "2) Sen" << endl;
		cout << "3) Cos" << endl;
		cout << "4) Tan" << endl;
		cout << "Option: ";
		cin >> opc;

		switch (opc) {
		case 1:
			array.arrayMult();
			break;
		case 2:
			array.senA();
			break;
		case 3:
			array.cosA();
			break;
		case 4:
			array.tanA();
			break;
		default: 
			cout << "\nType a correct option" << endl;
			break;
		}

		cout << "\nDo you want to do something else?"<<endl;
		cout << "1) Yes" << endl;
		cout << "2) No" << endl;
		cout << "Option: ";
		cin >> exit;

	}
	

}
