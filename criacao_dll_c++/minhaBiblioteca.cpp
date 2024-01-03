//
// Created by lucas on 02/01/2024.
//

#include "minhaBiblioteca.h"
#include "bibliotecaAuxiliar.h"

#include <utility>


double minhaBiblioteca::soma(double a, double b)
{
    return a+b;
}

double minhaBiblioteca::multiplicacao(double a, double b)
{
    return a*b;
}

void minhaBiblioteca::sleep(double a)
{
    for(int i = 0; i < a; i++) { }
}

void minhaBiblioteca::mensagem(const char* nome)
{
    printf("%s\n", nome);

    bibliotecaAuxiliar::myPrint();
}
