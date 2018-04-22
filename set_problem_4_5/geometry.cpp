#include "geometry.h"
int Punto::getX()const{
    return  x;
}
int Punto::getY()const{
    return  y;
}
void Punto::setX(int new_x){
    x= new_x;
}
void Punto::setY(int new_y){
    y= new_y;
}
//----------------------------------------------
Arreglo_Puntos::Arreglo_Puntos(){
 tamano = 0;
 puntos = new Punto[tamano];
}
Arreglo_Puntos::Arreglo_Puntos(const Punto pts[],const int c_tamano){
 tamano = c_tamano;
 puntos = new Punto[tamano];
 for(int i=0; i<tamano;i++) *(puntos+i)= pts[i];
}
Arreglo_Puntos::Arreglo_Puntos ( const Arreglo_Puntos &pts){
    tamano = pts.tamano;
    puntos = new Punto[tamano];
    for(int i=0; i<tamano ; i++) *(puntos + i) = *(pts.puntos +i);
}
Arreglo_Puntos::~Arreglo_Puntos(){
 delete [] puntos;
}
void Arreglo_Puntos::Reajustar_tamano(int new_tamano){
Punto *pts = new Punto[new_tamano];
int minimo = (new_tamano > tamano ? tamano : new_tamano);
    for (int i=0; i< tamano;i++) *(pts+i) = *(puntos+i);
 delete [] puntos;
 tamano = new_tamano;
 puntos = pts;
}

void Arreglo_Puntos::agregar_p(const Punto &p){
 Reajustar_tamano(tamano+1);
    *(puntos+tamano-1) = p;
}

void Arreglo_Puntos::limpiar(){
     Reajustar_tamano(0);
 }

void Arreglo_Puntos::insertar (int posicion, Punto p){
 Reajustar_tamano(tamano +1);
 for(int i=tamano-2; i>= posicion ;i--)
    *(puntos+i+1) = *(puntos+i);
 }

 void Arreglo_Puntos::remover(int posicion){
 for(int i=posicion; i< tamano-1 ;i++){
    *(puntos+i) = *(puntos+i+1);}
    Reajustar_tamano(tamano-1);
 }
 int Arreglo_Puntos::get_tamano(){
  return tamano;
 }
  const int Arreglo_Puntos::get_tamano()const{
  return tamano;
 }

 Punto *Arreglo_Puntos::get_punto(int posicion){

  return puntos+posicion;
 }

 const Punto *Arreglo_Puntos::get_punto(int posicion)const {
    return puntos+posicion;
 }
//***********---------------------------------------------------------------------
int Poligono::num_poligonos = 0;

Poligono::Poligono( const Arreglo_Puntos &x):Apuntos(x)
    {num_poligonos++;}
Poligono::Poligono( const Punto a[], const int p_tamano):Apuntos( a , p_tamano){
    num_poligonos++;
}
/***********************************************************/
Punto constructorPoints[4];
Punto *updateConstructorPoints(const Punto &p1,const Punto &p2,const Punto &p3,const Punto &p4 = Punto(0,0))
{ constructorPoints [0] = p1 ;
    constructorPoints [1] = p2 ;
    constructorPoints [2] = p3 ;
    constructorPoints [3] = p4 ;
    return constructorPoints;
}
Rectangulo::Rectangulo(const Punto &ll, const Punto &ur)
    : Poligono(updateConstructorPoints(ll,Punto(ll.getX(),ur.getY()), ur,Punto(ur.getX(),ll.getY())),4){}
Rectangulo::Rectangulo(const int llx, const int lly, const int urx, const int ury) : Poligono(updateConstructorPoints(Punto(llx,lly),Punto(llx,ury),
    Punto(urx,ury), Punto(urx,lly)),4){}
double Rectangulo::area() const{
     int length = Apuntos . get_punto (1) -> getY () - Apuntos . get_punto (0) -> getY () ;
     int width = Apuntos . get_punto (2) -> getX () - Apuntos . get_punto (1) -> getX () ;
     return  abs((double)length*width);
}

Triangulo::Triangulo(const Punto &a, const Punto &b, const Punto &c)
: Poligono(updateConstructorPoints(a,b,c),3){}

double Triangulo::area()const{
   int dx0 = Apuntos . get_punto (0) -> getX () - Apuntos . get_punto (1) -> getX ();
   int dx1 = Apuntos . get_punto (1) -> getX () - Apuntos . get_punto (2) -> getX ();
   int dx2 = Apuntos . get_punto (2) -> getX () - Apuntos . get_punto (0) -> getX ();
   int dy0 = Apuntos . get_punto (0) -> getY () - Apuntos . get_punto (1) -> getY ();
   int dy1 = Apuntos . get_punto (1) -> getY () - Apuntos . get_punto (2) -> getY ();
   int dy2 = Apuntos . get_punto (2) -> getY () - Apuntos . get_punto (0) -> getY ();

   double a = sqrt(dx0*dx0 + dy0*dy0);
   double b = sqrt(dx1*dx1 + dy1*dy1);
   double c = sqrt(dx2*dx2 + dy2*dy2);
   double s=(a +b+c) /2;
   return sqrt( s * (s-a)*(s-b)*(s-c) );
}




















