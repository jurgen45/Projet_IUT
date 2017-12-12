#include<stdlib.h>
#include<graph.h>
#include<stdio.h>
#include"fonction.h"
#include<time.h>
int main()
{	
	srand(time(NULL));
	int tabvaleur[100][2];
	int tabposition[100][2];
	int k,mode=2;
	int compteur=0;
	char compteurres[100];
	int a,x,y,etatsouris,i,f,r,verif=0;
	int alea,taillecar=1;
	int colonne=3,ligne=3,ratio=600;
	k=0;
	char image[100];
    int lratio;
    int hratio;
    int v;
    int longeur=0;
   	int hauteur=0;
   	int menu=0;
   	int reload=1;
   	int img=0;
   	int valapercu=0;
   	int finjeu=0;
    

    /*menu image*/
    while(1)
    {	
    	InitialiserGraphique();
	    CreerFenetre(1000,10,800,600);
	    ChoisirEcran(0);
   		ChargerImageFond("img/fond.jpg");
    	ChargerImage("img/ecureil2.png",0,0,0,0,600,600);
    	ChargerImage("img/chat2.png",210,0,0,0,600,600);
    	ChargerImage("img/montagne3.1.png",420,0,0,0,600,600);
    	EcrireTexte(670,100,"300x300",taillecar);
    	ChargerImage("img/snake2.png",0,210,0,0,600,600);
    	ChargerImage("img/sun2.png",210,210,0,0,600,600);
    	ChargerImage("img/cat2.png",420,210,0,0,600,600);
    	EcrireTexte(670,300,"600x600",taillecar);
    	ChargerImage("img/plage.png",0,420,0,0,600,600);
    	ChargerImage("img/balon.png",210,420,0,0,600,600);
    	ChargerImage("img/snow.png",420,420,0,0,600,600);
    	EcrireTexte(670,500,"900x900",taillecar);
    	etatsouris=0;
    	img=0;
    	compteur=0;
    	_X=0;
    	_Y=0;
    	
    	while(img==0){
    	
    		etatsouris=SourisCliquee();
    		x=_X;
    		y=_Y;
    		
    	
    	
    	if (x!=0 && x<200 && y<200 && y!=0)
    	{
    		
			 sprintf(image,"%s","img/ecureil.jpg"); 
			 ratio=300;
    		 img=1;
    	}
    	if (x!=0 && x>210 && x<410 && y<200 && y!=0)
    	{
    		 sprintf(image,"%s","img/chat.jpg"); 
			 ratio=300;
    		 img=2;
    	}
    	if (x!=0 && x>420 && x<640 && y<200 && y!=0)
    	{
    		 sprintf(image,"%s","img/montagne3.jpg"); 
			 ratio=300;
    		 img=3;
    	}
    	if (x!=0 && x<200 && y>210 && y<410 && y!=0)
    	{
    		 sprintf(image,"%s","img/snake.jpg"); 
			 ratio=600;
    		 img=4;
    	}
    	if (x!=0 && x>210 && x<410 && y>210 && y<410 && y!=0)
    	{
    		sprintf(image,"%s","img/sun.jpg"); 
			 ratio=600;
    		 img=5;
    	}
    	if (x!=0 && x>420 && x<640 && y>210 && y<410 && y!=0)
    	{
    		sprintf(image,"%s","img/cat.jpg"); 
			 ratio=600;
    		 img=6;
    	}
    	if (x!=0 && x<200 && y>410 &&y<600&& y!=0)
    	{
    		sprintf(image,"%s","img/plage.jpg"); 
			 ratio=900;
    		 img=7;
    	}
    	if (x!=0 && x>210 && x<410 && y>410&&y<600 && y!=0)
    	{
    		sprintf(image,"%s","img/balon.jpg"); 
			 ratio=900;
    		 img=8;
    	}
    	if (x!=0 && x>420 && x<640 && y>410&&y<600 && y!=0)
    	{
    		sprintf(image,"%s","img/snow.jpg"); 
			 ratio=900;
    		 img=9;
    	}
    	
    	}
					    FermerGraphique();

					    InitialiserGraphique();
						CreerFenetre(800,10,600,600);
						ChoisirEcran(0);
						etatsouris=0;
						_X=0;
						_Y=0;
					    /*fin menu image*/
 						 
					   	reload=1;  
					  	menu=0;
					    while(menu==0){
					    	if (reload==1)
					    	{
					    	affichagemenu(taillecar);
					      reload=0;
					     
					    	}
					    	
					    		SourisCliquee();
					      		x=_X;
					      		y=_Y;
					      		

					    	
					    	if (x>20&&x<65&&y>540&&y<585)
					    	{
					    		DessinerSegment(20,540,65,585);
					      		DessinerSegment(65,540,20,585);
					      		valapercu=1;
					    	}
					    	if (x>120&&x<165&&y>540&&y<585)
					    	{
					    		DessinerSegment(120,540,165,585);
					      		DessinerSegment(165,540,120,585);
					      		valapercu=0;
					    	}
					      	if (x>250&&x<450&&y>440&&y<640)
					      	{
					      		reload=1;
					      		_X=0;
					      		_Y=0;
					      	}
					      	if (x>20&&x<65&&y<275&&y>230)
					      	{
					      		DessinerSegment(20,230,65,275);
					      		DessinerSegment(20,275,65,230);
					      		mode=1;

					      	}
					      	if (x>120&&x<165&&y<275&&y>230)
					      	{
					      		DessinerSegment(120,230,165,275);
					      		DessinerSegment(120,275,165,230);
					      		mode=0;
					      	}
					      	ligne=selectionligne(x,y,taillecar,ligne);
					      	colonne=selectioncolonne(x,y,taillecar,colonne);
					      	
					        if (x!=0 && x>10 && x<140 && y<90 && y>60 && y!=0)
					        {
					            EcrireTexte(160,70,"-1",taillecar);
					          EcrireTexte(160,90,"-2",taillecar);
					          EcrireTexte(160,110,"-3",taillecar);
					          
					        }
					       
					        if (x>140 && x<180 && y>60&& y<80 )
					          {
					          alea=5;  //on pourra definir la façons dont l'image est decouper selon que difficulté est a 1,2 ou 3
					          EcrireTexte(15,330,"difficulte defini sur 1",taillecar);
					          }
					        if (x>140 && x<180 && y>80&& y<100 )
					        {
					          alea=500;
					          EcrireTexte(15,330,"difficulte defini sur 2",taillecar);
					        }
					        if (x>140 && x<180 && y>100&& y<120 )
					        {
					          alea=1000;
					          EcrireTexte(15,330,"difficulte defini sur 3",taillecar);
					        }
					        if (x>360 && y>400 && mode!=2)
					        {
					          menu=1;
					          FermerGraphique(); 
					        }
					    }
					  
					    lratio=ratio/colonne;
   						hratio=ratio/ligne;
					    
  	
					    /*
						+-----------------------------------+
					    |Assignation des case sur le tableau|
						+-----------------------------------+
					    */
					    for (i = 0; i<ligne; ++i)
					    {

					    	for (f = 0; f<colonne ; ++f)
					    	{
					    		

					    		
					    		tabvaleur[k][0]=longeur;
					    		tabvaleur[k][1]=hauteur;
					    		tabposition[k][0]=longeur;
					    		tabposition[k][1]=hauteur;
					    		k++;
					    		longeur=longeur+lratio;
					    		

					    	}
					    	longeur=0;
					    	hauteur=hauteur+hratio;
					    }					
					    
    					 /*
						+-----------------------------------+
					    |			   Aleatoire           	|
						+-----------------------------------+
					    */
						for (int f = 0; f <alea ; ++f)
						{
							a=randselect();

							if (a==2&&tabvaleur[0][1]!=ratio-hratio)
		   				{
		   					tabvaleur[0][1]+=hratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][1]-=hratio;
		   					}
		   					}
		   				}
		   				if (a==8&&tabvaleur[0][1]!=0)
		   				{
		   					tabvaleur[0][1]-=hratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][1]+=hratio;
		   					}
		   					}
		   				}
		   				if (a==4&&tabvaleur[0][0]!=0)
		   				{
		   					tabvaleur[0][0]-=lratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][0]+=lratio;
		   					}
		   					}
		   				}
		   				if (a==6&&tabvaleur[0][0]!=ratio-lratio)
		   				{
		   					tabvaleur[0][0]+=lratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][0]-=lratio;
		   					}
		   					}
		   				}
		   	}		
					    /*
						+-----------------------------------+
					    |       Affichage de l'Image        |
						+-----------------------------------+
					    */	
		   				InitialiserGraphique();
		   			  	CreerFenetre(800,10,ratio+250,ratio);
				    	affichage(100,2,tabvaleur,100,image,tabposition,lratio,hratio,ligne,colonne);
				    	if (valapercu==1)
				    	{
				    		apercu(img,ratio);
				    	}
				    	
				    	finjeu=0;
				    	//EcrireTexte(20,620,compteurres,taillecar);
			while(finjeu!=1)
			{

    	
   	 					/*
						+-----------------------------------+
					    |		Detection de la Souris   	|
						+-----------------------------------+
					    */
  						
  						if (mode==1)
  						{
						etatsouris=0;
						a=positionsouris(100,2,tabvaleur,hratio,lratio);
						}
						/*
						+-----------------------------------+
					    |		Calcul de Direction         |
						+-----------------------------------+
					    */
    					if (mode==0)
    					{
    						a=Touche();
    					}
		   				
		   				if (a==XK_Up&&tabvaleur[0][1]!=ratio-hratio)
		   				{
		   					compteur++;
		   					tabvaleur[0][1]+=hratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][1]-=hratio;
		   					}
		   					}
		   				}
		   				if (a==XK_Down&&tabvaleur[0][1]!=0)
		   				{
		   					compteur++;
		   					tabvaleur[0][1]-=hratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][1]+=hratio;
		   					}
		   					}
		   				}
		   				if (a==XK_Right&&tabvaleur[0][0]!=0)
		   				{
		   					compteur++;
		   					tabvaleur[0][0]-=lratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][0]+=lratio;
		   					}
		   					}
		   				}
		   				if (a==XK_Left&&tabvaleur[0][0]!=ratio-lratio)
		   				{
		   					compteur++;
		   					tabvaleur[0][0]+=lratio;
		   					for (int i = 1; i < colonne*ligne; ++i)
		   					{
		   							if (tabvaleur[0][0]==tabvaleur[i][0]&&tabvaleur[0][1]==tabvaleur[i][1])
		   					{
		   						tabvaleur[i][0]-=lratio;
		   					}
		   					}
		   				}
					   /*
						+-----------------------------------+
					    |		Affichage de l'Image        |
						+-----------------------------------+
					    */
					    	
					    	affichage(100,2,tabvaleur,100,image,tabposition,lratio,hratio,ligne,colonne);
					    	ChargerImage("img/blanc.jpg",ratio+200,270,280,100,200,100);
					    	sprintf(compteurres, "%d", compteur);
					    	EcrireTexte(ratio+20,290,"Nombre d'essais",taillecar);
					    	EcrireTexte(ratio+200,290,compteurres,taillecar);
					    	if (valapercu==1)
				    		{
				    		apercu(img,ratio);
				    		}
					    	
					   		finjeu=victoire(100,2,tabvaleur,tabposition,colonne,ligne,finjeu,ratio);
					    	
					   		
				}
				EcrireTexte(ratio,290,"Nombre d'essais",taillecar);
				EcrireTexte(ratio+200,290,compteurres,taillecar);
				_X=0;
    			_Y=0;
    			verif=0;
				while(verif==0)
				{

					etatsouris=SourisCliquee();
					x=_X;
					y=_Y;
					if (x>400&&x<656&&y<556&&y>300)
					{
						verif=1;
					}
					if (x>100&&x<356&&y<556&&y>300)
					{
						return 0;
					}
				}
				FermerGraphique();
			}
		}	
   
