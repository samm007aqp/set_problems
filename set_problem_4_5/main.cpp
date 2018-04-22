#include <iostream>
#include "geometry.h"
void printAttributes(Poligono *p) {
     cout << "p’s area is " << p->area() << ".\n";

     cout << "Los puntos de p son:\n";
     const Arreglo_Puntos *pa = p->getPuntos();
     for(int i = 0; i < pa ->get_tamano(); ++i) {
     cout << "(" << pa ->get_punto(i) ->getX() << ", " << pa ->get_punto(i) -> getY() << ")\n";
        }
 }

int main(int argc, char *argv[]) {
 cout << "Ingrese las coordenadas inferior izquierda y superior derecha del rectangulo como cuatro enteros separados por espacios: ";
 int llx, lly, urx, ury;
 cin >> llx >> lly >> urx >> ury;
 Punto ll(llx, lly), ur(urx, ury);
 Rectangulo r(ll, ur);
 printAttributes(&r);

 cout << "Ingrese las coordenadas del triangulo como 6 enteros separados : ";
 int x1, y1, x2, y2, x3, y3;
 cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
 Punto a(x1, y1), b(x2, y2), c(x3, y3);
 Triangulo t(a, b, c);
 printAttributes(&t);

 return 0;}
