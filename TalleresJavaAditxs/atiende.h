#ifndef ATIENDE_H
#define ATIENDE_H
#include "empleado.h"
#include "coche.h"
#include "taller.h"

typedef struct
{
    Empleado empleado;
    Coche coche;
    Taller taller;
    char* fechaConsulta;

} Atiende;

#endif