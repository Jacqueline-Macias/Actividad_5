#ifndef NEURONA_H
#define NEURONA_H

#include <QString>

class Neurona
{
public:
    Neurona(int id, double voltaje, int posX, int posY, int red, int green, int blue);
    QString print() const;

private:
    int id;
    double voltaje;
    int posX;
    int posY;
    int red;
    int green;
    int blue;
};

#endif // NEURONA_H
