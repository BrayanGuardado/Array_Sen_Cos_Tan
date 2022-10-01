#include "Math.h"
#include<iostream>
#include<math.h>
#define PI 3.1415926536
using namespace std;

void Math::arrayMult() {

	system("cls");
	cout << "Array multiplication\n" << endl;
	cout << "Type the number of rows in the array A: ";
	cin >> rowA;
	cout << "Type the number of colums in the array A: ";
	cin >> columA;
	cout << "---------------------------------------------\n";
	cout << "Type the number of rows in the array B: ";
	cin >> rowB;
	cout << "Type the number of colums in the array B: ";
	cin >> columB;

	if (columA == rowB) {
		cout << endl;
		cout << "Array 'A'" << endl;
		for (int i = 0; i < rowA; i++) {
			for (int j = 0; j < columA; j++) {
				cout << "Type the date [" << i << "]" << "[" << j << "]: ";
				cin >> arrayA[i][j];
			}
		}

		cout << endl;
		cout << "Array 'B'" << endl;
		for (int i = 0; i < rowB; i++) {
			for (int j = 0; j < columB; j++) {
				cout << "Type the date [" << i << "]" << "[" << j << "]: ";
				cin >> arrayB[i][j];
			}
		}

		system("cls");
		cout << "Array 'A'\n" << endl;
		for (int i = 0; i < rowA; i++) {
			for (int j = 0; j < columA; j++) {
				cout << arrayA[i][j] << " ";
			}
			cout << endl;
		}

		cout << "\nArray 'B'\n" << endl;
		for (int i = 0; i < rowB; i++) {
			for (int j = 0; j < columB; j++) {
				cout << arrayB[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < rowA; i++) {
			for (int j = 0; j < columB; j++) {
				arrayC[i][j] = 0;
			}
		}

		for (int i = 0; i < rowA; i++) {
			for (int j = 0; j < columB; j++) {
				for (int z = 0; z < columA; z++) {
					arrayC[i][j] = arrayC[i][j] + arrayA[i][z] * arrayB[z][j];
				}
			}
		}

		cout << "\nResult Array 'C' " << endl;
		for (int i = 0; i < rowA; i++) {
			for (int j = 0; j < columB; j++) {
				cout<<arrayC[i][j]<<" ";
			}
			cout << endl;
		}

	}
	else {
		cout << "\nSorry, the array can not be rosolved" << endl;
	}

}

void Math::senA() {

	system("cls");
	cout << "Type the angle in degrees: ";
	cin >> inputAngle;
	converToRad = inputAngle * PI / 180;
	cout << "Type the number of terms: ";
	cin >> inputTerms;
	
	sen_A = 0;
	for (int i = 0; i < inputTerms; i++) {
		int fact = 1;
		for (int j = 1; j <= (2 * i + 1); j++) {
			fact *= j;
		}

		sen_A += pow(-1, i) * pow(converToRad, 2 * i + 1) / fact;
	}

	cout << "Sen of " << inputTerms << " is: " << sen_A<<endl;

}

void Math::cosA() {

	system("cls");
	cout << "Type the angle in degrees: ";
	cin >> inputAngle;
	converToRad = inputAngle * PI / 180;
	cout << "Type the number of terms: ";
	cin >> inputTerms;

	cos_A = 0;
	for (int i = 0; i < inputTerms; i++) {
		int fact = 1;
		for (int j = 1; j <= (2 * i); j++) {
			fact *= j;
		}

		cos_A += pow(-1, i) * pow(converToRad, 2 * i) / fact;
	}

	cout << "Cos of " << inputTerms << " is: " << cos_A << endl;

}

void Math::tanA() {

	system("cls");
	cout << "Type the angle in degrees: ";
	cin >> inputAngle;
	converToRad = inputAngle * PI / 180;
	tan_A = tan(converToRad);

	cout << "Tan is: " << tan_A << endl;

}