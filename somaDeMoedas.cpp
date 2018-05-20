#include <iostream>

int main()
{
	int numeroUm;
	int numeroDois;
	char moeda;

	std::cout << "Digite o primeiro valor: ";
	std::cin >> numeroUm;

	std::cout << "Digite o segundo valor: ";
	std::cin >> numeroDois;

	std::cout << "Digite o nome da moeda: ";
	std::cin >> moeda;

	std::cout << "A somo do " << moeda << " é igual a: " << numeroUm + numeroDois << std::endl;

	return 0;

}