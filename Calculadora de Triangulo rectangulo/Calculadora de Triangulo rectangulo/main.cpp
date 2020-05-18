#include <iostream>
//#include "libcal.hpp"
#include<math.h>
#include<stdio.h>
#include <iomanip>


using namespace std;

//float a{0},b{0},c{0},a2=sqrt(pow(b,2)+pow(c,2)),b2=sqrt(pow(a,2)+pow(c,2)),
   //c2=sqrt(pow(a,2)+ pow(b,2));
   



int main(int argc, const char * argv[]) {
    float a{0},b{0},c{0},a2=sqrt(pow(b,2)+pow(c,2)),b2=sqrt(pow(a,2)+pow(c,2)),
    c2=sqrt(pow(a,2)+ pow(b,2));

    cout<<"************* Bienvenido a la calculadora de triángulos ****************** \n"<<"Escribe -1 al lado que quieres hallar.\n"<<"Porfavor ingrese tres lados: ";cin>>a;(cin>>b);cin>>c;
     /*
    if(a>-2 and b>-2 and c>-2){
        void condiciones(int a, int b,int c);
        void iguales(int a, int b,int c);
        void diferentes(int a, int b,int c);
        void ahipo(int a, int b,int c);
        void bhipo(int a, int b,int c);
        void chipo(int a, int b,int c);
    }
    else{
        cout<<"Los datos no pueden ser negativos.\n('-1' es la excepción a la regla.)\n";
    }
        
        
     //good
        
    if(a==0 and b==0 and c==0){
            cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
            cout<<"Los datos no pueen ser cero.\n";
    }
        
  
        return 0;
    }

    
    */
      
    if(a==-1 and b==-1 and c==-1){
        cout<<"Porfavor,debe ingresar más de dos datos para calcular el correspondiente triangulo.\n";
    }
    else if (a==-1 and b==-1){
        cout<<"Porfavor,debe ingresar más de dos datos para calcular el correspondiente triangulo.\n";
    }
    else if(a==-1 and c==-1){
        cout<<"Porfavor, debe ingresar más de dos datos para calcular el correspondiente triangulo.\n";
    }
    else if (b==-1 and c==-1){
        cout<<"Porfavor, debe ingresar más de dos datos para calcular el correspondiente triangulo.\n";
    }
    
if(a>-2 and b>-2 and c>-2){
    if (a==b and a!=0 and b!=0){//como a y b son iguales ya son catetos
        if(a!=-1 and b!=-1){
            c=sqrt(pow(a,2)+ pow(b,2));
            c2=sqrt(pow(a,2)+ pow(b,2));
            if (c==c2 and c!=-1 ){// c es la hipotenusas ya que a yb son iguales, hay datos en los angulos
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*b)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(b,2)/c)*(pow(a,2)/c))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            
                
            }
            

            else if(c==-1){//como a y b son iguales ninguno de los dos puede ser hipotenusa asique c debe ser la hipotenusa
                c=sqrt(pow(a,2)+ pow(b,2));
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*b)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(b,2)/c)*(pow(a,2)/c))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;c<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                }
          
            else {
                cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
            
            }
        }
    }
    
    else if(a==c and a!=0 and c!=0){//como a y c son igules niguno puede ser hipotenusa, asi que se ponen como catetos
        if(a!=-1 and  c!=-1){
            b=sqrt(pow(a,2)+pow(c,2));
            b2=sqrt(pow(a,2)+pow(c,2));
            if (b==b2 and b!=-1){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            else if(b==-1){
                b=sqrt(pow(a,2)+pow(c,2));
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*b)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                }
            else{
                cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
                }
        }
    }
     
    
    
    else if (b==c and b!=0 and c!=0){//como b y c son iguales no pueden ser hipotenusa ninguno,son catetosy a es la hipotenusa-
        if(b!=-1 and c!=-1){
            a=sqrt(pow(b,2)+pow(c,2));
            a2=sqrt(pow(b,2)+pow(c,2));
            if(a==a2 and a!=-1){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*b)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
    }
            else if(a==-1){
                a=sqrt(pow(b,2)+pow(c,2));
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*b)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            else{
                cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
            }
        }
    }

 //good
    //2
    
    
    
    
    
    
    
    
    if (a!=-1 and b!=-1 and c!=-1) {//caso que me de el valor de los 3 lados y no sean iguales
        if (a>b and a>c){//me dio el valor de a y como es mayor que los dos entonces es la hipotenusa
            if(b>c){//me ha dado eldato de b y b es el csteto mayor
                a2=sqrt(pow(b,2)+pow(c,2));
                if(a==a2){
                    cout<<"Cateto mayor: "<<b<<endl;
                    cout<<"Cateto menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<a<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                    cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*b)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                    
                    for (int f=1;f<=b;f++){//filas
                        cout<<"@"<<endl;
                        if(f==b-1){
                            for(int co=2;co<=c;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<< c<<endl;
                    cout<<"Cateto menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<a<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                    cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*b)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                    
                    for (int f=1;f<=c;f++){//filas
                        cout<<"@"<<endl;
                        if(f==c-1){
                            for(int co=2;co<=b;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                }
                else if (a!=a2){
                    cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
                    cout<<"Pudo haber sido: \n";
                    
                    cout<<"Opción 1: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 2: \n";
                    cout<<"Cateto Mayor: "<<c<<endl;
                    cout<<"Cateto Menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 3: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(b,2))<<endl;
                    
                    cout<<"Opción 4: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(c,2))<<endl;
                            
                }
            }
        
            else if (c>b){//c es el cateto mayor
                 
                a2=sqrt(pow(b,2)+pow(c,2));
                if(a==a2){
                    cout<<"Cateto mayor: "<<c<<endl;
                    cout<<"Cateto menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<a<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                    cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*b)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                    
                    for (int f=1;f<=c;f++){//filas
                        cout<<"@"<<endl;
                        if(f==c-1){
                            for(int co=2;co<=b;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<<b<<endl;
                    cout<<"Cateto menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<a<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                    cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*b)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                    
                    for (int f=1;f<=b;f++){//filas
                        cout<<"@"<<endl;
                        if(f==b-1){
                            for(int co=2;co<=c;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                }
                else{
                    cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
                    cout<<"Pudo haber sido: \n";
                    
                    cout<<"Opción 1: \n";
                    cout<<"Cateto Mayor: "<<c<<endl;
                    cout<<"Cateto Menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 2: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 3: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(b,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 4: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(c,2))<<endl;
                }
            }
        }
         
        else if (b>a and b>c){//me dio el valor de b y como es mayor que los dos entonces es la hipotenusa
            if(a>c){//a es el cateto mayor
                 
                b2=sqrt(pow(a,2)+pow(c,2));
                if(b==b2){
                    cout<<"Cateto mayor: "<<a<<endl;
                    cout<<"Cateto menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<b<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                    cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                    
                    for (int f=1;f<=a;f++){//filas
                        cout<<"@"<<endl;
                        if(f==a-1){
                            for(int co=2;co<=c;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<<c<<endl;
                    cout<<"Cateto menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<b<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                    cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                    
                    for (int f=1;f<=c;f++){//filas
                        cout<<"@"<<endl;
                        if(f==c-1){
                            for(int co=2;co<=a;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                }
                else{
                    cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
                    cout<<"Pudo haber sido: \n";
                    
                    cout<<"Opción 1: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 2: \n";
                    cout<<"Cateto Mayor: "<<c<<endl;
                    cout<<"Cateto Menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 3: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(b,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 4: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+ pow(c,2))<<endl;
                }
            }
           
            
            else if(c>a){// c es el cateto mayor
                 
                b2=sqrt(pow(a,2)+pow(c,2));
                if(b==b2){
                    cout<<"Cateto mayor: "<<c<<endl;
                    cout<<"Cateto menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<b<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                    cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                    
                    for (int f=1;f<=c;f++){//filas
                        cout<<"@"<<endl;
                        if(f==c-1){
                            for(int co=2;co<=a;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<<a<<endl;
                    cout<<"Cateto menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<b<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                    cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(c*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                    
                    for (int f=1;f<=a;f++){//filas
                        cout<<"@"<<endl;
                        if(f==a-1){
                            for(int co=2;co<=c;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                }
                else{
                    cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
                    cout<<"Pudo haber sido: \n";
                    
                    cout<<"Opción 1: \n";
                    cout<<"Cateto Mayor: "<<c<<endl;
                    cout<<"Cateto Menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 2: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 3: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(b,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 4: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+ pow(c,2))<<endl;
                }
                
        }
    }
        
        else if(c>b and c>a){//c es la hipotenusa
            if(a>b){//a es el cateto mayor
                 
                c2=sqrt(pow(a,2)+ pow(b,2));
                if (c==c2){
                    c=sqrt(pow(a,2)+ pow(b,2));
                    c2=sqrt(pow(a,2)+ pow(b,2));
                    cout<<"Cateto mayor: "<<a<<endl;
                    cout<<"Cateto menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=a;f++){//filas
                        cout<<"@"<<endl;
                        if(f==a-1){
                            for(int co=2;co<=b;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<<b<<endl;
                    cout<<"Cateto menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=b;f++){//filas
                        cout<<"@"<<endl;
                        if(f==b-1){
                            for(int co=2;co<=a;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                }
                else{
                    cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
                    cout<<"Pudo haber sido: \n";
                    
                    cout<<"Opción 1: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(b,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 2: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(b,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 3: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 4: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+ pow(c,2))<<endl;
                }
            }
             
            else if(b>a){
                 
                c2=sqrt(pow(a,2)+ pow(b,2));
                if (c==c2){
                    cout<<"Cateto mayor: "<<b<<endl;
                    cout<<"Cateto menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=b;f++){//filas
                        cout<<"@"<<endl;
                        if(f==b-1){
                            for(int co=2;co<=a;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<<a<<endl;
                    cout<<"Cateto menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=a;f++){//filas
                        cout<<"@"<<endl;
                        if(f==a-1){
                            for(int co=2;co<=b;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                }
                else{
                    cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
                    cout<<"Opción 1: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(b,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 2: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+pow(b,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 3: \n";
                    cout<<"Cateto Mayor: "<<a<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(a,2)+ pow(c,2))<<endl;
                    
                    cout<<endl;
                    cout<<"Opción 4: \n";
                    cout<<"Cateto Mayor: "<<b<<endl;
                    cout<<"Cateto Menor: "<<c<<endl;
                    cout<<"Hipotenusa: "<<sqrt(pow(b,2)+ pow(c,2))<<endl;
                }
                 
            }
        }
    }
 
    
    //good
    
    
 //3
    
    if(a>b and a>c and a!=0){//caso que a es la hipotenusa
        if(b==-1 and c!=-1 and b!=c){//b es el valor a hallar a y c tienen un valor
            b=sqrt(pow(a,2)-pow(c,2));
            if(c>b){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            else if (b>c){
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
            }
         b2=sqrt(pow(a,2)+pow(c,2));
        if (b<b2 and b!=c){//si el valor hallado de b esmayor que a y c, b es hipotenusa
            cout<<"\n";
            cout<<"Cuando el valor para hallar es la hipotenusa:\n";
            cout<<"\n";
            b=sqrt(pow(c,2)+pow(a,2));
            if(a>c){
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
            }
            if(c>a){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }

            }
        }
    }
         
    
        if(c==-1 and b!=-1 and c!=b){//c es el valor a hallar,a y b tienen un valor
            c=sqrt(pow(a,2)- pow(b,2));
            if(c>b){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=c;co ++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            else if (b>c){
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
            }
        c2=sqrt(pow(a,2)+ pow(b,2));
        if (c<c2 and c!=b){
            cout<<"\n";
            cout<<"Cuando el valor para hallar es la hipotenusa:\n";
            cout<<"\n";
            c=sqrt(pow(b,2)+ pow(a,2));
            if(b>a){
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                cout<<"\n";
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                
            }
            if(a>b){
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
                
            }
        }
    }
     
    
    
    
    
    
    else if (b>c and b>a and b!=0){//caso que b es la hipotenusa
        if(a==-1 and a!=c and c!=-1){//a es el valor a hallar, b y c tienen un valor
            a=sqrt(pow(b,2)-pow(c,2));
            if(c>a){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                
            }
            else {
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                }
            
            a2=sqrt(pow(b,2)+pow(c,2));
                if (a<a2 and a!=c){//si el valor a hallar "a" es mayor que b y c, a es la hipotenusa
                    cout<<"\n";
                    cout<<"Cuando el valor para hallar es hipotenusa:\n";
                    cout<<"\n";
                    a=sqrt(pow(c,2)+pow(b,2));
                    if (b>c){
                        cout<<"Cateto mayor: "<<b<<endl;
                        cout<<"Cateto menor: "<<c<<endl;
                        cout<<"Hipotenusa: "<<a<<endl;
                        cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                        cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                        
                        cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                        cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                        cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                        cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                        cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                        cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                        cout<<"perimetro: "<<a+b+c<<endl;
                        cout<<"area: "<<(b*c)/2<<endl;
                        cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                        cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                        cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                        
                        for (int f=1;f<=b;f++){//filas
                            cout<<"@"<<endl;
                            if(f==b-1){
                                for(int co=2;co<=c;co++){
                                    cout<<"@"<<"";
                                }
                            }
                        }
                        
                        cout<<"\n";
                        cout<<"otro caso:"<<endl;
                        cout<<"\n";
                        
                        cout<<"Cateto mayor: "<<c<<endl;
                        cout<<"Cateto menor: "<<b<<endl;
                        cout<<"Hipotenusa: "<<a<<endl;
                        cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                        cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                        
                        cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                        cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                        cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                        cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                        cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                        cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                        cout<<"perimetro: "<<a+b+c<<endl;
                        cout<<"area: "<<(b*c)/2<<endl;
                        cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                        cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                        cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                        
                        for (int f=1;f<=c;f++){//filas
                            cout<<"@"<<endl;
                            if(f==c-1){
                                for(int co=2;co<=b;co++){
                                    cout<<"@"<<"";
                                }
                            }
                        }
                            }
                    
                    else if(c>b){
                        cout<<"Cateto mayor: "<<c<<endl;
                        cout<<"Cateto menor: "<<b<<endl;
                        cout<<"Hipotenusa: "<<a<<endl;
                        cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                        cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                        
                        cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                        cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                        cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                        cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                        cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                        cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                        cout<<"perimetro: "<<a+b+c<<endl;
                        cout<<"area: "<<(b*c)/2<<endl;
                        cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                        cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                        cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                        
                        for (int f=1;f<=c;f++){//filas
                            cout<<"@"<<endl;
                            if(f==c-1){
                                for(int co=2;co<=b;co++){
                                    cout<<"@"<<"";
                                }
                            }
                        }
                        
                        cout<<"\n";
                        cout<<"otro caso:"<<endl;
                        cout<<"\n";
                        
                        cout<<"Cateto mayor: "<<b<<endl;
                        cout<<"Cateto menor: "<<c<<endl;
                        cout<<"Hipotenusa: "<<a<<endl;
                        cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                        cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                        
                        cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                        cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                        cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                        cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                        cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                        cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                        cout<<"perimetro: "<<a+b+c<<endl;
                        cout<<"area: "<<(b*c)/2<<endl;
                        cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                        cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                        cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                        
                        for (int f=1;f<=b;f++){//filas
                            cout<<"@"<<endl;
                            if(f==b-1){
                                for(int co=2;co<=c;co++){
                                    cout<<"@"<<"";
                                }
                            }
                        }
                    }
                }
            }
    
        else if(c==-1 and c!=a and a!=-1){//c es el valor a hallar,a y b tienen un valor
            c=sqrt(pow(b,2)- pow(a,2));
            if(c>a){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                }
            else if (a>c){
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            
            c2=sqrt(pow(b,2)+ pow(a,2));
            if (c<c2 and c!=a){
                cout<<"\n";
                cout<<"Cuando el valor para hallar es hipotenusa:\n";
                cout<<"\n";
                c=sqrt(pow(b,2)+ pow(a,2));
                if(b>a){
                    cout<<"Cateto mayor: "<<b<<endl;
                    cout<<"Cateto menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=b;f++){//filas
                        cout<<"@"<<endl;
                        if(f==b-1){
                            for(int co=2;co<=a;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<<a<<endl;
                    cout<<"Cateto menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=a;f++){//filas
                        cout<<"@"<<endl;
                        if(f==a-1){
                            for(int co=2;co<=b;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                }
                if(a>b){
                    cout<<"Cateto mayor: "<<a<<endl;
                    cout<<"Cateto menor: "<<b<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=a;f++){//filas
                        cout<<"@"<<endl;
                        if(f==a-1){
                            for(int co=2;co<=b;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                    
                    cout<<"\n";
                    cout<<"otro caso:"<<endl;
                    cout<<"\n";
                    
                    cout<<"Cateto mayor: "<<b<<endl;
                    cout<<"Cateto menor: "<<a<<endl;
                    cout<<"Hipotenusa: "<<c<<endl;
                    cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                    cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                    
                    cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                    cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                    cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                    cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                    cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                    cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                    cout<<"perimetro: "<<a+b+c<<endl;
                    cout<<"area: "<<(b*a)/2<<endl;
                    cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                    cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                    cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                    
                    for (int f=1;f<=b;f++){//filas
                        cout<<"@"<<endl;
                        if(f==b-1){
                            for(int co=2;co<=a;co++){
                                cout<<"@"<<"";
                            }
                        }
                    }
                }
            }
        }
    }

    else if (c>a and c>b and c!=0){//caso que c es la hipotenusa
        if(b==-1 and a!=-1 and b!=a){//b es el valor a hallar, a y c tienen un valor
            b=sqrt(pow(c,2)-pow(a,2));
            if(b>a){
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            else{
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
        b2=sqrt(pow(c,2)+pow(a,2));
        if ( b<b2 and b!=a){//si el valor hallado de b esmayor que a y c, b es hipotenusa
            cout<<"\n";
            cout<<"Cuando el valor para hallar es hipotenusa:\n";
            cout<<"\n";
            b=sqrt(pow(c,2)+pow(a,2));
            if(a>c){
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            if(c>a){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(c*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<b<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/b)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/b)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/b))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/b))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/b))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/b))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/b))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/b))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(a*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/b<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/b<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/b)*(pow(a,2)/b))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
            }
            }
            
        }
        else if(a==-1 and b!=-1 and b!=a){//c es el valor a hallar,a y b tienen un valor
            a=sqrt(pow(c,2)-pow(b,2));
            cout<<a<<endl;
            if(a>b){
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
            }
            else{
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<a<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(a/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(a/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=a;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                
                cout<<"Cateto mayor: "<<a<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<c<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(a/c)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/c)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(a/c))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(a/c))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(a/c))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/c))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/c))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/c))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*a)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/c<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(a,2)/c<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(a,2)/c)*(pow(b,2)/c))<<endl;
                
                for (int f=1;f<=a;f++){//filas
                    cout<<"@"<<endl;
                    if(f==a-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                 
            }
        a2=sqrt(pow(c,2)+pow(b,2));
        if ( a<a2 and a!=b){//si el valor a hallar "a" es mayor que b y c,a es la hipotenusa
            a=sqrt(pow(c,2)+pow(b,2));
            cout<<"\n";
            cout<<"Cuando el valor para hallar es hipotenusa:\n";
            cout<<"\n";
            if (b>c){
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/a)*57.2958<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                       }
            else if(c>b){
                cout<<"Cateto mayor: "<<c<<endl;
                cout<<"Cateto menor: "<<b<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(c/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(b/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(c/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(b/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=c;f++){//filas
                    cout<<"@"<<endl;
                    if(f==c-1){
                        for(int co=2;co<=b;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                
                cout<<"\n";
                cout<<"otro caso:"<<endl;
                cout<<"\n";
                cout<<"Cateto mayor: "<<b<<endl;
                cout<<"Cateto menor: "<<c<<endl;
                cout<<"Hipotenusa: "<<a<<endl;
                cout<<"angulo mayor: "<<fixed<<setprecision(2)<<asin(b/a)*57.2958<<"°"<<endl;
                cout<<"angulo menor: "<<asin(c/a)*57.2958<<"°"<<endl;
                
                cout<<"seno(mayor): "<<sin(asin(b/a))<<endl;
                cout<<"coseno(mayor): "<<cos(asin(b/a))<<endl;
                cout<<"tangente(mayor): "<<tan(asin(b/a))<<endl;
                cout<<"seno(menor): "<<sin(asin(c/a))<<endl;
                cout<<"coseno(menor): "<<cos(asin(c/a))<<endl;
                cout<<"tangente(menor): "<<tan(asin(c/a))<<endl;
                cout<<"perimetro: "<<a+b+c<<endl;
                cout<<"area: "<<(b*c)/2<<endl;
                cout<<"n(parte de la hipotenusa): "<<pow(c,2)/a<<endl;
                cout<<"m(parte de la hipotenusa): "<<pow(b,2)/a<<endl;
                cout<<"Altura relativa de la hipotenusa: "<<sqrt((pow(c,2)/a)*(pow(b,2)/a))<<endl;
                
                for (int f=1;f<=b;f++){//filas
                    cout<<"@"<<endl;
                    if(f==b-1){
                        for(int co=2;co<=c;co++){
                            cout<<"@"<<"";
                        }
                    }
                }
                    }
                   }
                }
            }
    
}

else
{
    cout<<"Los datos no pueden ser negativos.\n('-1' es la excepción a la regla.)\n";
}
           
           
        
           
if(a==0 and b==0 and c==0){
    cout<<"los datos no coinciden para formar un triangulo rectangulo.\n";
    cout<<"Los datos no pueen ser cero.\n";
}
           
return 0;
       
}


    
    
    
    
    
