#include <iostream>
#include <cmath>
using namespace std;

int main (){

    /*
    Con esta sencilla aplicación de c++ podremos convertir
    coordenadas polares a rectangulares y viceversa.

    Creado por Prof.Pablo Vaz
    */

    cout << "Elija la opción: " << endl << endl 
         << "1. Polar > Rectangular" << endl
         << "2. Rectangular > Polar" << endl
         << "3. Salir" << endl << "Su opción: ";

    int opcion;
    cin >> opcion;
    const double PI = 3.1416;
    
    if (opcion == 1){

        cout <<endl << "Ingrese las coordenadas polares (r,θ) separadas por un espacio: ";
        double r, theta;
        cin >> r >>theta;
        double theta_rad = theta*PI/180; //convertimos a radianes
        double v_x, v_y;
        v_x = r*cos(theta_rad);
        v_y = r*sin(theta_rad);

        cout << endl << "Las coordenadas rectangulares del vector son: <" 
             << v_x <<" ; "<< v_y << ">"<< endl << endl
             << "También podría escribirse como v = " 
             << v_x << " i + " << v_y << " j" << endl;
    }
    else if (opcion == 2){

        cout << endl << "Ingrese las coordenadas rectangulares (v_x,v_y) separadas por un espacio: ";
        double v_x,v_y;
        cin >> v_x >> v_y;
        
        double r, theta_rad, theta;
        r = sqrt(pow(v_x , 2) + pow(v_y , 2)); //Es Pitágoras...
        theta_rad = atan(v_y/v_x);
        theta = theta_rad*180/PI; //convertimos a grados.

        cout << endl << "Las coordenadas polares del vector son: " 
             << r <<" ∠ "<< theta << "°"<< endl;
    }
    else {
        cout << "Hasta luego!" << endl;
    }
    return 0;
}
