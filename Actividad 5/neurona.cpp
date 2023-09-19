#include "neurona.h"

Neurona::Neurona(int id, double voltaje, int posX, int posY, int red, int green, int blue)
    : id(id), voltaje(voltaje), posX(posX), posY(posY), red(red), green(green), blue(blue)
{
}

QString Neurona::print() const
{
    QString info;
    info += "ID: " + QString::number(id) + "\n";
    info += "Voltaje: " + QString::number(voltaje) + "\n";
    info += "Posición X: " + QString::number(posX) + "\n";
            info += "Posición Y: " + QString::number(posY) + "\n";
           info += "RGB: (" + QString::number(red) + ", " + QString::number(green) + ", " + QString::number(blue) + ")\n";
    return info;
}

