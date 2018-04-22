#include <iostream>
using namespace std;
#include <math.h>

class Punto{
    int x,y;
public:
   Punto(int x=0,int y=0)
   { this->x=x; this->y=y;}
   int getX()const;
   int getY()const;
   void setX(int new_x);
   void setY(int new_y);
};

class Arreglo_Puntos{
    Punto *puntos;
    int   tamano;
    void Reajustar_tamano(int new_tamano);
public:
    Arreglo_Puntos();
    Arreglo_Puntos(const Punto pts[],int c_tamano);
    Arreglo_Puntos(const Arreglo_Puntos &pts);
    ~Arreglo_Puntos();

    void agregar_p( const Punto &p);
    void limpiar();
    void insertar ( int posicion, Punto p);
    void remover(int posicion);
    int get_tamano();
    const int get_tamano()const;
    Punto *get_punto(int posicion);
    const Punto *get_punto(int posicion)const ;
};
 class Poligono{
 protected:
     static int num_poligonos;
     Arreglo_Puntos  Apuntos;
 public:
    Poligono(const Arreglo_Puntos &x);
    Poligono( const Punto a[],const int p_tamano);
    ~Poligono(){--num_poligonos;}
    virtual double area () const = 0;
    int getNumPoligonos () {return num_poligonos;}
    int getNumLados (){return Apuntos.get_tamano();}
    const Arreglo_Puntos *getPuntos(){return &Apuntos;}

 };
class Rectangulo : public Poligono{
public:
    Rectangulo(const Punto &a, const Punto &b);
    Rectangulo(const int a,const int b,const int c , const int d);
    virtual double area() const;
};

class Triangulo : public Poligono{
public:
    Triangulo(const Punto &a, const Punto &b, const Punto &c );
    virtual double area() const;
};

