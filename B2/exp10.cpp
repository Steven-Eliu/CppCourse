/* Escriba un programa que calcules las soluciones de una 
ecuacion de segundo grado de la forma ax^2 + bx + x = 0
 */

#include <iostream>
#include <math.h>

int main()
{
    float a, b, c, d, e = 0;

    std::cout << "Ingrese los valores de su ecuacion de la forma ax^2 + bx + x = 0";
    std::cout << "\nIngrese el valor de a: "; std::cin >> a;
    std::cout << "Ingrese el valor de b: "; std::cin >> b;
    std::cout << "Ingrese el valor de c: "; std::cin >> c;

    d = (-b + (sqrt(pow(b,2) - (4*a*c)))) / 2*(a);
    e = (-b - (sqrt(pow(b,2) - (4*a*c)))) / 2*(a);
    
    std::cout << "\nEl resultado positivo de la ecuacion es: " << d;
    std::cout << "\nEl resultado negativo de la ecuacion es: " << e;

    return 0;
}
