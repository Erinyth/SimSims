#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QTimer>
#include <vector>
#include <iostream>
#include <memory>

#include "normale.hh"

/* Structures communes à toutes les formes */

struct couleur {
    GLfloat r,g,b,a;
};

struct coordonnees{
    GLfloat x,y,z;
};

struct sommet {
    struct coordonnees coordonnees;
};

struct face {
    struct couleur coul;
    struct normale norm;
    struct coordonnees centre;
};
/*******************************************/

class forme
{

public:
    forme(int id, int nbFac, int nbSom, int nbAtt, int nbrSommetParFaceMax, int ** faceCons, struct sommet * tabSom, struct face * tabFac, std::map<std::string,float> tabAtt);
    ~forme();

    forme creation_forme();

    void afficher_forme();

    void infoForme();

    /* Setters */
    void setAttribut(std::vector<float> valeursAtt);

    void setId(int id)
    { _idForme = id; }

    void setNomForme(std::string nom)
    { _nomForme = nom; }

    void setCouleurR(GLfloat r)
    { _couleurR = r; }
    void setCouleurG(GLfloat g)
    { _couleurG = g; }
    void setCouleurB(GLfloat b)
    { _couleurB = b; }
    void setPositionX(GLfloat x)
    { _positionX = x; }
    void setPositionY(GLfloat y)
    { _positionY = y; }
    void setPositionZ(GLfloat z)
    { _positionZ = z; }
    void setRotationX(GLfloat x)
    { _angleX = x; }
    void setRotationY(GLfloat y)
    { _angleY = y; }
    void setRotationZ(GLfloat z)
    { _angleZ = z; }
    void setScale(int s);

    void clearFormesFilles()
    { _FormesFille.clear(); }
    void ajoutFormesFilles(std::shared_ptr<forme> f)
    { _FormesFille.push_back(f); }


    /* Getters */
    int getId()
    {return _idForme;}
    std::string getNomForme()
    { return _nomForme; }
    int getNbrFace()
    {return _nbrFaces;}
    int getNbrSommet()
    {return _nbrSommets;}
    int getNbrAtt()
    {return _nbrAttributs;}
    int getnbrSommetsParFaceMax()
    {return _nbrSommetParFaceMax;}
    int ** getFaceConstruction()
    {return _faceConstruction;}
    struct sommet * getSommets()
    { return _sommets; }
    struct face * getFaces()
    { return _faces; }
    std::map<std::string,float> getAttributs()
    { return _attributs; }

    GLfloat getRed()
    { return _couleurR; }
    GLfloat getGreen()
    { return _couleurG; }
    GLfloat getBlue()
    { return _couleurB; }
    GLfloat getPosX()
    { return _positionX; }
    GLfloat getPosY()
    { return _positionY; }
    GLfloat getPosZ()
    { return _positionZ; }
    GLfloat getAngX()
    { return _angleX; }
    GLfloat getAngY()
    { return _angleY; }
    GLfloat getAngZ()
    { return _angleZ; }
    int getScale()
    { return _scale; }

private:
    int _idForme;
    std::string _nomForme;
    int _nbrFaces;
    int _nbrSommets;
    int _nbrAttributs;
    int _nbrSommetParFaceMax;

    int ** _faceConstruction;
    struct sommet * _sommets;
    struct face * _faces;

    std::map<std::string,float> _attributs;

    GLfloat _couleurR;
    GLfloat _couleurG;
    GLfloat _couleurB;
    GLfloat _positionX;
    GLfloat _positionY;
    GLfloat _positionZ;
    GLfloat _angleX;
    GLfloat _angleY;
    GLfloat _angleZ;
    int _scale;

    std::vector<std::shared_ptr<forme>> _FormesFille;
};

void lireFormes(char* fichier, int numeroObjet);
