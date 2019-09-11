// testSuit.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include "dataShareDLL.h"
__declspec(dllimport)  int get();
__declspec(dllimport)  void set(int temp);

void PrintOptions();

int main()
{
	int op;
	int x;
	std::cout << "Test dataShare.dll\n";
	std::cout << "Enter int value:";

	//if (ssDLL.isActive()) {
	//	ssDLL.OpenMemoryShare();
	//	std::cout << "Open" << std::endl;
	//}
	//else {
	//	ssDLL.StartMemoryShare();
	//	std::cout << "Start" << std::endl;
	//}
	//system("pause");

	while (true) {
		PrintOptions();
		std::cin >> op;
		switch (op)
		{
		case 1:
			std::cout << "entre valor para escrever:";
			std::cin >> x;
			set(x);			
			break;
		case 2:
			x = get();
			std::cout << "valor lido:" << x << std::endl;
			system("pause");
			break;
		case 3:
			return 0;
			break;
		default:
			break;
		}
	}

	return 0;
}

void PrintOptions()
{
	system("CLS");
	std::cout << "Opções:" << std::endl << std::endl;
	std::cout << "1- Escrever dado na memória compartilhada" << std::endl;
	std::cout << "2- Ler dado da memória compartilhada" << std::endl;
	std::cout << "3- Sair" << std::endl << std::endl;
	std::cout << "Sua escolha:";
}

