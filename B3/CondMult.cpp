/* La sentencia switch

    switch(expresion){
        case literal1:
            conjunto de instrucciones1;
            break
        case literal2;
            conjunto de instrucciones2;
            break;
        case literaln;
            conjunto de instruccionesn;
            break;
        default:
            conjunto de instrucciones por defecto;
            break;
    }
*/

#include <iostream>

int main()
{
int numero;

    std::cout << "Digite un numero entre 1-5" ;
    std::cin >> numero;

    switch (numero)
    {
        case 1: std::cout << "Es el numero "; break;
        case 2: std::cout << "Es el numero "; break;
        case 3: std::cout << "Es el numero "; break;
        case 4: std::cout << "Es el numero "; break;
        case 5: std::cout << "Es el numero "; break;
    
    default: std::cout << "No esta en el rango de 1-5";
        break;
    }

    return 0;
}
