// Escribe la siguiente expresion como expresion en c++

#include <iostream>

int main()
{
    float a,b,c,d,e,f, resultado = 0;

    std::cout << "Digite el valor de a: "; std::cin >> a;
    std::cout << "Digite el valor de b: "; std::cin >> b;
    std::cout << "Digite el valor de c: "; std::cin >> c;
    std::cout << "Digite el valor de d: "; std::cin >> d;
    std::cout << "Digite el valor de e: "; std::cin >> e;
    std::cout << "Digite el valor de f: "; std::cin >> f;

    resultado = (a + (b/c) / d + (e/f));

    std::cout.precision(2);
    std::cout << "El resultado de la operacion es " << resultado << std::endl;

    
    return 0;
}
