/* Realice un programa que compruebe si un numero digitado por el
usuario es positivo o negativo*/

#include <iostream>

int main()
{
    int numero = 0;

    std::cout << "Ingrese su numero: "; 
    std::cin >> numero;    

    if(numero == 0){
        std::cout << "El numero es 0";
    }
    else if (numero > 0){
        std::cout << "Su numero es positivo ";    
    } 
    else{
        std::cout << "Su numero es negativo";
    }
    
    
    return 0;
}
