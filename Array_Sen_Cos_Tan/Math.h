#pragma once
class Math{
private:
	int arrayA[50][50], rowA, columA;
	int arrayB[50][50], rowB, columB;
	int arrayC[50][50];
	float inputAngle, inputTerms, sen_A, cos_A, tan_A, converToRad;
public:
	void arrayMult();
	void senA();
	void cosA();
	void tanA();
};

