// REalice un programa que lea de la entrada estandar los siguientes
// datos de una presona EDAD, SEXO, AlTURA 

#include <iostream>


main(){
    int edad; 
    float altura;
    char sexo;

std::cout << "Ingrese su edad: "; std::cin >> edad; 
std::cout << "Ingrese su sexo (M/F): "; std::cin>> sexo; 
std::cout << "Ingrese su altura en metros: "; std::cin >> altura;


std::cout << "\nEdad: " << edad << std::endl;
std::cout << "\nSexo: " << sexo;
std::cout << "\nAltura en metros: " << altura;

return 0;
}