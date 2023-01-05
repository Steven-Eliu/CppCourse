/* Escriba un programa que lea dos numeros y determine 
cual de ellos es el mayor*/

#include<iostream>

int main()
{
int a, b = 0;

std::cout << "Digite 2 numeros: ";
std::cin >> a >> b;

if (a == b)
{
    std::cout << "Ambos numeros son iguales";
}

else{

    if(a > b){
    std::cout << "El primer numero es mayor: " << a;
}   
    else{
    std::cout << "El segundo numero es mayor: " << b;
}

}


return 0;
}
