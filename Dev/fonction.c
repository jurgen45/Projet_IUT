#include "fonction.h"
#include<stdio.h>
#include<stdlib.h>
#include<graph.h>
#include <time.h>

void affichage(int taille1,int taille2,int tabvaleur[taille1][taille2],int taille3,char image[taille3],int tabposition[taille1][taille2],int lratio,int hratio,int ligne,int colonne)
{
		//EffacerEcran(CouleurParNom("white"));
		ChargerImage("img/blanc.jpg",tabvaleur[0][0],tabvaleur[0][1],100,100,lratio,hratio);
		for (int i = 1; i < ligne*colonne; ++i)
		{
		ChargerImage(image,tabvaleur[i][0]+5,tabvaleur[i][1]+5,tabposition[i][0],tabposition[i][1],lratio-5,hratio-5);
		}
		
    		

}


int victoire(int taille1,int taille2,int tabvaleur[taille1][taille2],int tabposition[taille1][taille2],int colonne,int ligne,int res,int ratio)
{
						int compteur=0;
						
						
						
					   	for (int i = 0; i<colonne*ligne; ++i)
					   	{

					   		if (tabvaleur[i][0]==tabposition[i][0]&&tabvaleur[i][1]==tabposition[i][1])
					   		{
					   		compteur++;
					   		
					   		}
					   		if (compteur==colonne*ligne)
					   		{
					   			FermerGraphique();
					   			InitialiserGraphique();
							    CreerFenetre(1000,10,800,600);
							    ChoisirEcran(0);
					   			EffacerEcran(CouleurParNom("white"));
					   			ChargerImageFond("img/fond.jpg");
					   			ChargerImage("img/quit.png",100,300,0,0,256,256);
					   			ChargerImage("img/home.png",400,300,0,0,256,256);
					   			EcrireTexte(ratio/2,200,"Bravo, vous avez termine le jeu !! ",2);
					   			res=1;
					   			return res;
					   		}
					   		
					   	}
}


int randselect()
{

	int v,a;
	
							v=rand()%100;
		
							if (v<25)
							{
								a=4;
								return a;
							}
							else if (v>25&&v<50)
							{
								a=8;
								return a;
							}
							else if (v>50&&v<75)
							{
								a=6;
								return a;
							}
							else if (v>75)
							{
								a=2;
								return a;
							}
							
}

int positionsouris(int taille1,int taille2,int tabvaleur[taille1][taille2],int hratio,int lratio)
{
	int etatsouris=0;
	int x,y;
						while(etatsouris==0)
						{
							
							etatsouris=SourisCliquee();
					   		x=_X;
					  		y=_Y;
					  		

						if (x<tabvaleur[0][0]&&x>tabvaleur[0][0]-lratio&&y>tabvaleur[0][1]&&y<tabvaleur[0][1]+hratio&&etatsouris==1)
						{
							return XK_Right;
						}
						if (x>tabvaleur[0][0]+lratio&&x<tabvaleur[0][0]+lratio*2&&y>tabvaleur[0][1]&&y<tabvaleur[0][1]+hratio&&etatsouris==1)
						{
							return XK_Left;
						}
						if (y<tabvaleur[0][1]&&y>tabvaleur[0][1]-hratio&&etatsouris==1&&x>tabvaleur[0][0]&&x<tabvaleur[0][0]+lratio)
						{
							return XK_Down;
						}
						if (y>tabvaleur[0][1]+hratio&&y<tabvaleur[0][1]+hratio*2&&etatsouris==1&&x>tabvaleur[0][0]&&x<tabvaleur[0][0]+lratio)
						{
							return XK_Up;
						}
						}
}
int selectionligne(int x,int y,int taillecar,int ligne)
{
	
							if (x>390&&x<410&&y>20&&y<60)
					      	{	
					      		ligne=3;
					      		 EcrireTexte(400,310,"Ligne: 3",taillecar);
					      		 
					      		 
					      	}
					      	if (x>390&&x<410&&y>60&&y<100)
					      	{
					      		ligne=4;
					      		 EcrireTexte(400,310,"Ligne: 4",taillecar);
					      		 
					      		 
					      	}
					      	if (x>390&&x<410&&y>100&&y<140)
					      	{
					      		ligne=5;
					      		 EcrireTexte(400,310,"Ligne: 5",taillecar);
					      		 
					      		 
					      	}
					      	if (x>390&&x<410&&y>140&&y<180)
					      	{
					      		ligne=6;
					      		 EcrireTexte(400,310,"Ligne: 6",taillecar);
					      		 
					      		 
					      	}
					      	if (x>390&&x<410&&y>180&&y<220)
					      	{
					      		ligne=7;
					      		 EcrireTexte(400,310,"Ligne: 7",taillecar);
					      		 
					      		 
					      	}
					      	if (x>390&&x<410&&y>220&&y<260)
					      	{
					      		ligne=8;
					      		 EcrireTexte(400,310,"Ligne: 8",taillecar);
					      		 

					      	}
					      	return ligne;
}
int selectioncolonne(int x,int y,int taillecar,int colonne)
{
	
							if (x>500&&x<520&&y>20&&y<60)
					      	{
					      		 EcrireTexte(400,370,"Colonne: 3",taillecar);
					      		 colonne=3;
					      	}
					      	if (x>500&&x<520&&y>60&&y<100)
					      	{
					      		 EcrireTexte(400,370,"Colonne: 4",taillecar);
					      		 colonne=4;
					      	}
					      	if (x>500&&x<520&&y>100&&y<140)
					      	{
					      		 EcrireTexte(400,370,"Colonne: 5",taillecar);
					      		 colonne=5;
					      	}
					      	if (x>500&&x<520&&y>140&&y<180)
					      	{
					      		 EcrireTexte(400,370,"Colonne: 6",taillecar);
					      		 colonne=6;
					      	}
					      	if (x>500&&x<520&&y>180&&y<220)
					      	{
					      		 EcrireTexte(400,370,"Colonne: 7",taillecar);
					      		 colonne=7;
					      	}
					      	if (x>500&&x<520&&y>220&&y<260)
					      	{
					      		 EcrireTexte(400,370,"Colonne: 8",taillecar);
					      		 colonne=8;
					      	}
					      	return colonne;
}
void apercu(int img,int ratio)
{
	if (img==1)
	{
		ChargerImage("img/ecureil2.png",ratio+25,50,0,0,200,200);
	}
	if (img==2)
	{
		ChargerImage("img/chat2.png",ratio+25,50,0,0,200,200);
	}
	if (img==3)
	{
		ChargerImage("img/montagne3.1.png",ratio+25,50,0,0,200,200);
	}
	if (img==4)
	{
		ChargerImage("img/snake2.png",ratio+25,50,0,0,200,200);
	}
	if (img==5)
	{
		ChargerImage("img/sun2.png",ratio+25,50,0,0,200,200);
	}
	if (img==6)
	{
		ChargerImage("img/cat2.png",ratio+25,50,0,0,200,200);
	}
	if (img==7)
	{
		ChargerImage("img/plage.png",ratio+25,50,0,0,200,200);
	}
	if (img==8)
	{
		ChargerImage("img/balon.png",ratio+25,50,0,0,200,200);
	}
	if (img==9)
	{
		ChargerImage("img/snow.png",ratio+25,50,0,0,200,200);
	}
}
void affichagemenu(int taillecar)
{
	ChargerImageFond("img/fond.jpg");
					      ChargerImage("img/validation.png",360,420,0,0,200,200);
					      ChargerImage("img/reload.png",250,440,0,0,200,200);
					      EcrireTexte(10,30,"reglage du jeu",taillecar);
					      DessinerSegment(0,35,190,35);
					      DessinerSegment(190,35,190,0);
					      EcrireTexte(10,70,"difficulte",taillecar);
					      DessinerSegment(260,0,260,120);
					      DessinerSegment(260,120,0,120);
					    DessinerRectangle(5,300,300,45);
					    EcrireTexte(10,380,"regle du jeu:",taillecar);
					    DessinerSegment(10,385,160,385);
					    EcrireTexte(10,410,"vous devez reconstituer l'image en deplacant ",taillecar);
					    EcrireTexte(10,440,"un fragment adjacent a la case vide, a la ",taillecar);
					    EcrireTexte(10,470,"place de celle ci",taillecar);
					      EcrireTexte(390,20,"Ligne",taillecar);
					      EcrireTexte(400,60,"3",taillecar);
					      EcrireTexte(400,100,"4",taillecar);
					      EcrireTexte(400,140,"5",taillecar);
					      EcrireTexte(400,180,"6",taillecar);
					      EcrireTexte(400,220,"7",taillecar);
					      EcrireTexte(400,260,"8",taillecar);
					      EcrireTexte(490,20,"Colonne",taillecar);
					      EcrireTexte(500,60,"3",taillecar);
					      EcrireTexte(500,100,"4",taillecar);
					      EcrireTexte(500,140,"5",taillecar);
					      EcrireTexte(500,180,"6",taillecar);
					      EcrireTexte(500,220,"7",taillecar);
					      EcrireTexte(500,260,"8",taillecar);
					      DessinerRectangle(350,280,200,45);
					      DessinerRectangle(350,340,200,45);
					      EcrireTexte(20,200,"Souris",taillecar);
					      EcrireTexte(120,200,"Clavier",taillecar);
					      DessinerRectangle(20,230,45,45);
					      DessinerRectangle(120,230,45,45);
					      EcrireTexte(60,500,"Aide Apercu",taillecar);
					      EcrireTexte(30,530,"Oui",taillecar);
					      EcrireTexte(130,530,"Non",taillecar);
					      DessinerRectangle(20,540,45,45);
					      DessinerRectangle(120,540,45,45);

}