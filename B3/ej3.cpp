/* Realice un programa que lea un valor entero y determine
si se trata de un numero par o impar */

#include <iostream>

int main()
{
    int numero = 0;

    std::cout << "Ingrese su numero: "; 
    std::cin >> numero;    

    if(numero == 0){
        std::cout << "El numero es 0";
    }
    else if (numero%2 == 0){
        std::cout << "Su numero es par ";    
    } 
    else{
        std::cout << "Su numero es impar";
    }
    
    
    return 0;
}
