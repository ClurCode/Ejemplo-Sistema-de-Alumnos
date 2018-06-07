#include "Alumno.h"
#include <iostream>
Alumno::Alumno(std::string nombre, int edad, Curso c, Escuela e)
{
    _nombre = nombre;
    _edad   = edad;
    cAlumno->Ano = c.Ano;
    cAlumno->Curso = c.Curso;
    eAlumno->nombre = e.nombre;
    eAlumno->numero_escuela = e.numero_escuela;
}

Alumno::~Alumno()
{
    std::cout<<"\nAlumno::~Alumno()";
}

void Alumno::MostrarDatos()
{
    std::cout<<"Nombre del almuno: "<<_nombre<<std::endl;
    std::cout<<"Edad: "<<_edad<<std::endl;
    std::cout<<"Curso "<<cAlumno->Ano<<"° "<<cAlumno->Curso<<"°\n";
    std::cout<<"Escuela: "<<eAlumno->nombre<<std::endl;
    std::cout<<"         N°"<<eAlumno->numero_escuela<<std::endl;
}

std::string Alumno::NivelEscolar()
{
    if(_edad <= 6)
    {
        return "Inicial";
    } else if (_edad > 6 && _edad < 12)
    {
        return "Primario";
    } else if (_edad > 12 && _edad < 19)
    {
        return "Secundario";
    } else
    {
        return "Terciario o Univiersitario";
    }
}
