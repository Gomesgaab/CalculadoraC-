#pragma once
#include <iostream>
#include <string>
using namespace std;

class ModelC
{

private:
	float num1;
	float num2;

	// deixando os metodos get e set publicos
public:
	void setNumber1(float _num1);
	float  getNumber1();
	void setNumber2(float _num2);
	float  getNumber2();
	int soma();
	int subtracao();
	float divisao();
	int multiplicacao();
	float aritimetica();
	float potencia();

};



