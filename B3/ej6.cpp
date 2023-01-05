/* Escriba un programa que lea de la entrada estandar un 
caracter e indique en la salida estandar si el caracter es
una vocal minuscula,
una vocal mayuscula, o 
no es una vocal*/

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
    case 'u': std::cout << "Es una vocal minuscula " << std::endl; break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': std::cout << "Es una Vocal Mayuscula " << std::endl; break;
    // DEFAULT se utiliza como else en condiciones multiples
    default: std::cout << "No es una vocal" << std::endl; break;
    }

    return 0;
}
