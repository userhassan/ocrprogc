#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])

{

    char lettre = 0; // Stocke la lettre proposée par l'utilisateur (retour du scanf)
    char motSecret[] = "ROUGE"; // C'est le mot à trouver
    int coupsRestants = 10; // Compteur de coups restants (0 = mort)
int *lettreTrouvee = NULL;
int LettreTrouvee[];
lettreTrouvee = malloc(nombreLettres * sizeof(int));

int* initTableau(int lettreTrouvee[], int taille)

{

    for(int i = 0; i < taille; i++)

    {

        lettreTrouvee[i] = 0;

    }

}


int gagne(int *lettreTrouvee, int nombreLettres)

{

    int i = 0;

    int joueurGagne = 1;

 

    for (i = 0 ; i < nombreLettres ; i++)

    {
if (lettreTrouvee[i] == 1)

    joueurGagne = 1;

else

    joueurGagne = 0;
    }

 

    return joueurGagne;

}


//fonction qui permet de calculer la taille du mot

int tailleMot(char motSecret[])

{

    int nombreLettres = 0;

    nombreLettres = tailleMot(motSecret);

    for(int i = 0; motSecret[i] != '\0'; i++)

    {

        nombreLettres++;

    }

    return nombreLettres;

}

    return 0;

}