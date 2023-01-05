/* Escriba un fragmento de un programa que intercambie
los valores de dos variables */

#include <iostream>
int main()
{
    int x, y, aux;

    std::cout << "Digite el valor de x: "; std::cin >> x;
    std::cout << "Digite el valor de y: "; std::cin >> y;

    aux = x;
    x = y;
    y = aux;

    std::cout << "\nEl nuevo valor de x es: " << x << std::endl;
    std::cout << "El nuevo valor de y es: " << y;

    return 0;
}
