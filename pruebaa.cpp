#include <istream>
#include <string>
Int main() {

    Int edad; // número entero para la edad
    std:: string nombresApellidos;  // para almancenar el texto
    std:: string cedula; // pueden contener números y cedulas
    std:: dirección; // texto con espacios
    std:: string correo; // texto que puede contener el correo
    
   // Solicitud de datos personales

   cout << "\n1. Ingresar nombres y apellidos: ";
   getline(cin, nombresApellidos);

   cout << "\n2. ingresar cedula";
   getline(cin, cedula);

   cout << "n3. ingresar correo";
   getline(cin, correo);

   cout << "\n4. Ingresar direccion: ";
   getline(cin, direccion);        

    cout << "\n3. Ingrese su EDAD: ";
    cin >> edad;

    return 0 ; // indica el fin del codigo
}