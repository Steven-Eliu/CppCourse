/*Realice un programa que calcule el valor que toma la 
siguiente funcion para valores dados de x y*/
// f(x, y) = raiz x / y al cuadrado - 1 

#include <iostream>
#include <math.h>

int main()
{
    float x, y, z = 0;
    std::cout << "Ingrese el valor de x: "; std::cin >> x;
    std::cout << "Ingrese el valor de y: "; std::cin >> y;

    z = sqrt(x)/((pow(y,2))-1);

    std::cout.precision(2);
    std::cout << "El resultado de la funcion es: " << z;

    return 0;
}
