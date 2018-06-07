#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
#include "Curso.h" //Se lo incluye para el uso de la estructura Curso
#include "Escuela.h" //Se lo incluye para el uso de la estructura Escuela
class Alumno
{
    public:
        Alumno(std::string, int, Curso, Escuela);
        virtual ~Alumno();
        void MostrarDatos();
        std::string NivelEscolar();

    protected:

    private:
        std::string _nombre;
        int _edad;
        Curso* cAlumno = new Curso;
        Escuela* eAlumno = new Escuela;
};

#endif // ALUMNO_H
