#include "ModelC.h"
#include <string>

//inicio get number 1
float  ModelC::getNumber1() {
	return num1;
}
//inicio set nember 1
void ModelC::setNumber1(float _num1) {
	this->num1 = _num1;
}

//inicio metodo get number 2
float  ModelC::getNumber2() {
	return num2;

}
//fim metodo get number 2

//inicio metodo set number 2
void ModelC::setNumber2(float _num2) {
	this->num2 = _num2;
}
//fim metodo set number 2

//metodo soma
int ModelC::soma() {
	cout << "\n" << getNumber1() << " + " << getNumber2() << " = ";
	return getNumber1() + getNumber2();
}//fim somar

//metodo subtracao
int ModelC::subtracao() {
	cout << getNumber1() << " - " << getNumber2() << " = ";
	return getNumber1() - getNumber2();
}//fim subtracao

//metodo divisao
float ModelC::divisao() {
	cout << getNumber1() << " / " << getNumber2() << " = ";
	if (getNumber1() || getNumber2() <= 0) {
		cout << "\nNumero nao pode ser 0: ";
		return 0;
	} else {

	return getNumber1() / getNumber2();
	}
}//fim divisao

//multiplicacao
int ModelC::multiplicacao() {
	cout << getNumber1() << " * " << getNumber2() << " = ";
	return getNumber1() * getNumber2();
}//fim multiplicacao

//media aritimetica
float ModelC::aritimetica() {
	cout << getNumber1() << " + " << getNumber2() << " = ";
	return (getNumber1() + getNumber2()) / 2;
}//fim aritimetica

 //media potencia
float ModelC::potencia() {
	//contador
	int i = 0;
	//acumulador
	int resultado = 1;

	//enquanto 1 for menor que getNumber2 faça
	while (i < getNumber2()) {
		//resultado recebe ele mesmo * getNumber1
		resultado *= getNumber1();
		//contador
		i++;
	}// fim while
	cout << getNumber1() << " ^ " << getNumber2() << " = ";
	return resultado;
}//fim potencia