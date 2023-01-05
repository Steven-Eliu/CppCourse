/* 
Escriba un programa que lea de la entrada un caracter
e indique en la salida estandar si el caracter es una vocal
minuscula o no*/

#include <iostream>

int main()
{
    char letra;

    std::cout << "Digite su caracter: ";
    std::cin >> letra;

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': std::cout << "Es una vocal minuscula "; break;
    default: std::cout << "NO es un vocal minuscula "; break;


    }

    return 0;
}
