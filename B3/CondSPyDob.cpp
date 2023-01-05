/* La sentencia if

    if(condicion){
        Instrucciones 1;
    }
    else{
        Instrucciones 2;
    }
*/

#include <iostream>

int main()
{
int numero, dato = 5;

std::cout << "Digite un numero: ";
std::cin >> numero;

// Operador de Igualdad
if(numero == dato){
    std::cout << "El numero es 5";
} 
else{
    std::cout << "\nEl numero es diferente de 5";
}

// Operador de Diferencia
if(numero != dato){
    std::cout << "\nEl numero no es 5";
} 
else{
    std::cout << "\nEl numero es 5";
}

// Mayor que
if(numero > dato){
    std::cout << "\nEl numero es mayor a 5";
} 
else{
    std::cout << "\nEl numero es menor 5";
}

// Mayor o igual
if(numero >= dato){
    std::cout << "\nEl numero es mayor o igual a 5";
} 
else{
    std::cout << "\nEl numero es menor 5";
}


// Menor que
if(numero < dato){
    std::cout << "\nEl numero es menor a 5";
} 
else{
    std::cout << "\nEl numero es mayor 5";
}

// Menor o igual
if(numero <= dato){
    std::cout << "\nEl numero es menor o igual a 5";
} 
else{
    std::cout << "\nEl numero es mayor a 5";
}




    return 0;
}
