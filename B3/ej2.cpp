/* Escriba un programa que lea tres numero y determine cual
de ellos es el mayor*/

#include<iostream>

int main()
{
int a, b, c = 0;

std::cout << "Ingrese tres numeros: ";
std::cin >> a >> b >> c;

if ((a >= b) && (a >= c)){
    std::cout << "\n El numero mayor es: " << a << std::endl;
}

else if ((b >= a) && (b >= c)){
    std::cout << "\n El numero mayor es: " << b << std::endl;
}
else{
    std::cout <<"\n El numero mayor es: " << c ;
}
    return 0;
}
