#include "ControlCalculadora.h"
#include <iostream>
using namespace std;

//inicio coletar 
void ControlCalculadora::coletar() {

	float number1;
	float number2;

	//coletando primeiro numero
	cout << "\nInsira primeiro numero: ";
	cin >> number1;
	modelC.setNumber1(number1);

	//coletando segundo numero
	cout << "\nInsira o segundo numero: ";
	cin >> number2;
	modelC.setNumber2(number2);

}
// fim coleta

//inicio menu
int ControlCalculadora::menu() {

	cout << "\n============================";
	cout << "\nCauculadora";
	cout << "\n============================";
	cout << "\n\n";
	cout << "------Menu------"
		"\n0. sair: "
		"\n1. Soma: "
		"\n2. subtracao:"
		"\n3. Divisao: "
		"\n4. media aritimetica: "
		"\n5. Multiplicacao: "
		"\n6. Potencia: ";
	int opcao;
	cout << "\nDigite uma das opcoes acima: ";
	cin >> opcao;
	return opcao;

}//fim menu

//inicio escolha de operacoes
void ControlCalculadora::operacao() {

	int opcao = 0;
	
	do
	{
		opcao = menu();
		switch (opcao)
		{
		case 0:
			cout << "\nObrigado!";
			break;
		case 1:
			//chamando funcao coletar
			coletar();
			//chamando funcao soma
			cout << modelC.soma();
			break;
		case 2:
			//chamando funcao coletar
			coletar();
			//chamando funcao soma
			cout << modelC.subtracao();
			break;
		case 3:
			//coletar 
			coletar();
			//motrando resultado
			cout << modelC.divisao();
			break;
		case 4:
			// coletar
			coletar();
			//mostrando resultado
			cout << modelC.aritimetica();
			break;
		case 5:
			//coletado
			coletar();
			//multiplicação
			cout << modelC.multiplicacao();
			break;
			case 6:
				//coletar
				coletar();
				//potencia
				cout << modelC.potencia();
		default:
			cout << "\nOpcao invalida!";
			break;
		}
	} while (opcao != 0);
}// fim operacao