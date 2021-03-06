#include "arbre.hh"
#include <math.h>

//
#include <iostream>

#define PI 3.14159265359

arbre::arbre(GLfloat rInt, GLfloat rExt, GLfloat nbMot, GLfloat nbTra, GLfloat haut):
    _rayonInt(rInt), _rayonExt(rExt), _nombreMotif(nbMot), _nombreTranche(nbTra), _hauteur(haut)
{}

arbre::~arbre()
{}

void arbre::dessinerArbre()
{
    GLfloat iteration(0);
    GLfloat hauteurTotale(0);
    GLfloat hauteurTranche = _hauteur/_nombreTranche;
    GLfloat angleMotif = 360/_nombreMotif;
    GLfloat angleMotifRad = PI * (angleMotif) / 180;

    glPushMatrix();
    {
        while (hauteurTotale < _hauteur)
        {
            while (iteration < _nombreMotif)
            {
                glBegin(GL_TRIANGLE_STRIP);

                glTexCoord2f(0.0,1.0);
                glVertex3f( _rayonExt, hauteurTranche, 0.0f ); //Gauche Haut Loin
                glTexCoord2f(0.0,0.0);
                glVertex3f( _rayonExt, 0.0f, 0.0f ); //Gauche Bas Loin
                glTexCoord2f(1.0,1.0);
                glVertex3f( cos(angleMotifRad/2)*_rayonExt, hauteurTranche, -sin(angleMotifRad/2)*_rayonExt ); //Mil Haut Loin
                glTexCoord2f(1.0,0.0);
                glVertex3f( cos(angleMotifRad/2)*_rayonExt, 0.0f, -sin(angleMotifRad/2)*_rayonExt ); //Mil Bas Loin
                glTexCoord2f(1.0,1.0);
                glVertex3f( cos(angleMotifRad/2)*_rayonInt, hauteurTranche, -sin(angleMotifRad/2)*_rayonInt );   //Mil Haut Pres
                glTexCoord2f(1.0,0.0);
                glVertex3f( cos(angleMotifRad/2)*_rayonInt, 0.0f, -sin(angleMotifRad/2)*_rayonInt );   //Mil Bas Pres
                glTexCoord2f(1.0,1.0);
                glVertex3f( cos(angleMotifRad)*_rayonInt, hauteurTranche, -sin(angleMotifRad)*_rayonInt ); //Droite Haut Pres
                glTexCoord2f(0.0,1.0);
                glVertex3f( cos(angleMotifRad)*_rayonInt, 0.0f, -sin(angleMotifRad)*_rayonInt ); //Droite Bas Pres
                glTexCoord2f(1.0,1.0);
                glVertex3f( cos(angleMotifRad)*_rayonExt, hauteurTranche, -sin(angleMotifRad)*_rayonExt ); //Droite Haut Loin
                glTexCoord2f(0.0,1.0);
                glVertex3f( cos(angleMotifRad)*_rayonExt, 0.0f, -sin(angleMotifRad)*_rayonExt ); //Droite Bas Loin

                glEnd();

                if (iteration < _nombreMotif)
                    glRotatef(angleMotif,0,1,0);
                iteration++;

            }
            iteration = 0;
            glTranslatef(0,hauteurTranche,0);
            hauteurTotale += hauteurTranche;
            angleMotif = 360/_nombreMotif;
        }
    }
    glPopMatrix();
}
