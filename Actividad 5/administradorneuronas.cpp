#include "administradorneuronas.h"

void AdministradorNeuronas::agregarInicio(const Neurona &neurona)
{
    neuronas.prepend(neurona);
}

void AdministradorNeuronas::agregarFinal(const Neurona &neurona)
{
    neuronas.append(neurona);
}

QString AdministradorNeuronas::mostrar() const
{
    QString info;
    for (const Neurona &neurona : neuronas)
    {
        info += neurona.print() + "\n";
    }
    return info;
}

