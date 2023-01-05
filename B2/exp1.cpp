// Escribe la siguiente expresion como expresion en c++

#include <iostream>

int main()
{
    float a,b, resultado = 0;

    std::cout << "Digite el valor de a: "; std::cin >> a;
    std::cout << "Digite el valor de b: "; std::cin >> b;

    resultado = (a / b) + 1;

    std::cout.precision(2);
    std::cout << "El resultado de la operacion es " << resultado << std::endl;

    
    return 0;
}
