/* Escibra un programa que lea las 3 notas del alumno y 
escriba su nota final*/

#include <iostream>

int main()
{
    float practica, teorica, participacion, resultado;

    std::cout << "Digite la nota de practica: "; std::cin >> practica ;
    std::cout << "Digite la nota de teorica: "; std::cin >> teorica;
    std::cout << "Digite la nota de participacion: "; std::cin >> participacion;

    practica = practica * 0.30;
    teorica = teorica * 0.60;
    participacion = participacion * 0.10;

    resultado = practica + teorica + participacion;

    std::cout << "La su calificacion final es: " << resultado;

    return 0;
    
}
