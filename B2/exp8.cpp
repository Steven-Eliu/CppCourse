/*Escriba un programa que lea de la estrada estandar los dos catetos
de un triangulo y escriba en la salida estandar su hipotenusa*/

#include <iostream>
#include<math.h>

// sqrt Sacar raiz
// pow Elevar un nuemero al valor que deseemos.

int main()
{
    float a, b, c = 0;

    std::cout << "Ingrese el valor del primer cateto: "; std::cin >> a;
    std::cout << "Ingrese el valor del segundo cateto: "; std::cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));

    std::cout.precision(2);
    std::cout << "La hipotenusa del triangulo es: " << c;


    return 0;
}
