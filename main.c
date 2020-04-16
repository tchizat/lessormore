#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{


    int nombreMystere = 0, nombreEntre = 0,compteur = 0, nombredejoueur=0;
    int nombreadeviner=0;
    int nouvellepartie=1;
    const int MAX = 100, MIN = 1;
// Boucle pour la nouvelle partie
while(nouvellepartie)
{

   printf("\n Bonjour, bienvenue sur le jeu du nombre mystere !\n\n");
   printf("Entrez le nombre de joueur");
   scanf("%d",&nombredejoueur);
// mode un joueur
   if(nombredejoueur==1)
   {
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

     do
       {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        compteur++;

            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteur);
        }while (nombreEntre != nombreMystere);

            printf ("Voulez vous faire une nouvelle partie? (tapez 1 pour oui 0 pour non");
            scanf("%d", & nouvellepartie);
    }
//mode deux joueurs
   else if(nombredejoueur==2)
   {
       printf("Joueur 1 tapez le nombre a deviner");
       scanf("%d",&nombreadeviner);
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

       do
    {
        printf("Joueur 2 quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        compteur++;
          if (nombreadeviner > nombreEntre)
              printf("C'est plus !\n\n");
          else if (nombreadeviner < nombreEntre)
              printf("C'est moins !\n\n");
          else
            printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteur);

    }while (nombreEntre != nombreadeviner);

            printf ("Voulez vous faire une nouvelle partie? (tapez 1 pour oui 0 pour non");
            scanf("%d", & nouvellepartie);
            if(nouvellepartie==1)
            {
               printf("C'est reparti pour un tour !!");
            }
            else
            {
                printf("Merci d'avoir jouer au nombre mystere  ! \n A bientot !");
            }
   }

   else
   {
       printf("Vous ne pouvez jouer qu'a un ou deux joueur... !\n");
   }
}
    return 0;
    }
