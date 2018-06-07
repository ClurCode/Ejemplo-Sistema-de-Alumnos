#include <iostream>
#include "Alumno.h"
#include <string>
/*
    implementar una clase alumno, atributos: nombre, edad, curso, escuela
    metodos: mostrar datos, indicarnivel de acuerdo a la edad : inicial, primario, secundario, terciario, o universitario
    crear dos instancias
*/
//
// Inicial <= 6; 6 < Primario < 12; 12 < Secuandrio < 19; Terceareo > 19;
//

int main()
{
    //////////////////////////////////////////
    Curso c1; // Se crea un curso (Curso.h)
    c1.Ano = 5;
    c1.Curso = 2;
    //////////////////////////////////////////
    Escuela e1; // Secrea una escuela (Escuela.h)
    e1.nombre = "Escuela Tecnica San Martin";
    e1.numero_escuela = 32;
    //////////////////////////////////////////
    Alumno* a1 = new Alumno("Juan", 6, c1, e1);
    Alumno* a2 = new Alumno("Martina", 30, c1, e1);
    a1->MostrarDatos();
    std::cout<<a1->NivelEscolar();
    std::cout<<"\n---------------------------------------------------------\n";
    a2->MostrarDatos();
    std::cout<<a2->NivelEscolar();

    delete a1, a2;
    return 0;
}
