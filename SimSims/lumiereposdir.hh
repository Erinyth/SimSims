#pragma once
#include <string>
#include <QOpenGLFunctions>

class LumierePos
{
public:
    LumierePos(bool t, std::string n, int XInit, int YInit, int ZInit);
    ~LumierePos() = default;

    void afficher_lumiere(int i);

    bool getType()
    { return _typeButton; }

    std::string getNom()
    { return _nom; }

    int getPosX()
    { return _positionDirectionX; }

    int getPosY()
    { return _positionDirectionY; }

    int getPosZ()
    { return _positionDirectionZ; }

    int getRed()
    { return _couleurR; }

    int getGreen()
    { return _couleurG; }

    int getBlue()
    { return _couleurB; }

    /* SETTER */
    void setType(bool t)
    { _typeButton = t; }

    void getNom(std::string n)
    { _nom = n; }

    void setPosX(int pdx)
    { _positionDirectionX = pdx; }

    void setPosY(int pdy)
    { _positionDirectionY = pdy; }

    void setPosZ(int pdz)
    { _positionDirectionZ = pdz; }

    void setRed(int r)
    { _couleurR = r; }

    void setGreen(int g)
    { _couleurG = g; }

    void setBlue(int b)
    { _couleurB = b; }


private:

    /* Le booléen va nous servir à enregistrer le type de la lumière créée, true pour Positionnelle, false pour Directionnelle.
        Dans le cas où la lumière sera directionnelle, les variables de position X, Y et Z correspondront à sa direction X, Y et Z. */
    bool _typeButton;
    std::string _nom;
    int _positionDirectionX;
    int _positionDirectionY;
    int _positionDirectionZ;
    int _couleurR;
    int _couleurG;
    int _couleurB;
};
