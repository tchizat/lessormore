#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int nombreMystere = 0, nombreEntre = 0,compteur = 0;
    const int MAX = 100, MIN = 1;

    // GŽnŽration du nombre alŽatoire

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    int nouvellepartie=1;

while(nouvellepartie)
{
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

    } while (nombreEntre != nombreMystere);

            printf ("Voulez vous faire une nouvelle partie? (tapez 1 pour oui 0 pour non");
            scanf("%d", & nouvellepartie);
}
    return 0;
}
