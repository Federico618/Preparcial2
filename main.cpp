#include<iostream>
#include<math.h>

using namespace std;

int main()

{

   int grupo=0, edad=0, suma=0, i=0, fin=0;
   float promedio=0.0;


   cout<<"Este programa muestra el promedio de la edad de los alumnos de un grupo  "<<endl;

   cout<<"Ingrese el numero de alumnos de su grupo  ";
   cin>>grupo;

   for (i=grupo; i<=18; i++)
   {
       cout<<"Ingrese la edad de sus alumnos  ";
       cin>>i;

       suma=grupo+i;
       promedio=suma/grupo-1;

       if(i>=18)
       {

         cout<<"El promedio de las edades es  "<<promedio<<endl;


          cout<<"Desea cerrar el programa?. ingrese cero '0' para cerrarlo: "<<endl;
          cout<<"De lo contrario ingrese '1': ";
          cin>>fin;


          if (fin==0)
          {
            break;
          }
            if (fin==1)
            {
               for (i=0; i<=grupo; i++)
   {
       cout<<"Ingrese la edad de sus alumnos  ";
       cin>>i;

       suma=grupo+i;
       promedio=suma/grupo-1;

       if(i>=18)
       {

          cout<<"El promedio de las edades es  "<<promedio<<endl;
          cout<<"Desea cerrar el programa?. ingrese cero '0' para cerrarlo: "<<endl;
          cout<<"De lo contrario ingrese '1': ";
          cin>>fin;
            }

       }
       }
       }
       }

return 0;

}

