/* Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumnos*/

#include <iostream>

int main()
{
    float alumno1, alumno2, alumno3, alumno4, suma = 0;
    float resultado = 0;
    std::cout << "Ingrese la calificacion  del primer alumno "; std::cin >> alumno1;
    std::cout << "Ingrese la calificacion  del seg alumno "; std::cin >> alumno2;
    std::cout << "Ingrese la calificacion  del ter alumno "; std::cin >> alumno3;
    std::cout << "Ingrese la calificacion  del cuar alumno "; std::cin >> alumno4;
    
    suma = alumno1 + alumno2 + alumno3 + alumno4;
    resultado = suma / 4;

    std::cout << "\nLa nota media final es: " << resultado;
    
    return 0;
}

