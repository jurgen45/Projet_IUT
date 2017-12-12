#ifndef FONCTION_H
#define FONCTION_H
void affichage(int taille1,int taille2,int tabvaleur[taille1][taille2],int taille3,char image[taille3],int tabposition[taille1][taille2],int lratio,int hratio,int ligne,int colonne);
int victoire(int taille1,int taille2,int tabvaleur[taille1][taille2],int tabposition[taille1][taille2],int colonne,int ligne,int res,int ratio);
int randselect();
int positionsouris(int taille1,int taille2,int tabvaleur[taille1][taille2],int hratio,int lratio);
int selectionligne(int x,int y,int taillecar,int ligne);
int selectioncolonne(int x,int y,int taillecar,int colonne);
void apercu(int img,int ratio);
void affichagemenu(int taillecar);
#endif