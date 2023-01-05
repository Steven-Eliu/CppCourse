// Escribe un programa que de la entrada el precio de un producto y mueste
// en la salida estandar el precio del producto al aplicare el IVA

#include <iostream>

using namespace std;

main(){
    float n1, resutlado;

    cout << "Digite su precio: "; cin >> n1;
    
    resutlado = n1*1.16 ;

    cout << "\nEl Precio de su producto mas iva es de: " << resutlado << endl;

    return 0;
}