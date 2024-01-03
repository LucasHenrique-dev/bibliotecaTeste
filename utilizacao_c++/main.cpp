#include <iostream>
#include "minhasLibs/minhaBiblioteca.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::cout << "\nTeste da Biblioteca:" << std::endl;

    double a = 1, b = 2;

    double soma = minhaBiblioteca::soma(a, b);

    printf("A soma %f + %f = %f\n", a, b, soma);

    minhaBiblioteca::mensagem("\nLucas");

    return 0;
}
