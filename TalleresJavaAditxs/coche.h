#ifndef COCHE_H
#define COCHE_H
#include "cliente.h"

typedef struct
{
    char* marca;
    char* modelo;
    char* matricula;
    int numSeguro;
    int annoFabricacion;
    Cliente cliente;

} Coche;

#endif