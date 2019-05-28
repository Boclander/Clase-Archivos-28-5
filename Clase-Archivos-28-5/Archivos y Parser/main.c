#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int legajo;
    char nombre[20];
    char apellido[20];
    int nota;
}sAlumno;

int main()
{
    FILE* pArchivo;
    sAlumno unAlumno;
    sAlumno listadoAlumnos[10];
    int i=0;

    pArchivo=fopen("MOCK_DATA", "r");

    fscanf(pArchivo"%[^\n]\n",);

    while( != feof(pArchivo))
    {
        fscanf(pArchivo, "%[^,],%[^,],%[^,],%[^\n]\n", unAlumno.legajo, unAlumno.nombre, unAlumno.apellido, unAlumno.nota);
    }


    return 0;
}
