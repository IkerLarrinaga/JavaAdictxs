#ifndef TALLER_H
#define TALLER_H
#include "ciudad.h"

typedef struct
{
    char* nombre;
    char* direccion;
    int codigoTaller;
    int telefono;
    Ciudad ciudad;

} Taller;

#endif