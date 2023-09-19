#ifndef ADMINISTRADORNEURONAS_H
#define ADMINISTRADORNEURONAS_H

#include <QList>
#include "neurona.h"

class AdministradorNeuronas
{
public:
    void agregarInicio(const Neurona &neurona);
    void agregarFinal(const Neurona &neurona);
    QString mostrar() const;

private:
    QList<Neurona> neuronas;
};

#endif // ADMINISTRADORNEURONAS_H
