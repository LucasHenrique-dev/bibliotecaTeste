//
// Created by lucas on 02/01/2024.
//

#ifndef MINHABIBLIOTECA_H
#define MINHABIBLIOTECA_H

#ifdef MINHABIBLIOTECA_H
#define MINHALIB_API __declspec(dllexport)
#else
#define MINHALIB_API __declspec(dllimport)
#endif
#include <string>


class minhaBiblioteca {
    public:
        static double soma(double a, double b);
        static double multiplicacao(double a, double b);
        static void sleep(double a);
        static void mensagem(const char* nome);
};



#endif //MINHABIBLIOTECA_H
