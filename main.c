#include <stdio.h>

int main() {
//Exercice 1
/*
    int entier1 = 0, entier2 = 0;
    printf("Saisissez 2 entier :\n");
    scanf("%d\n%d", &entier1, &entier2);
    if (entier1 == entier2)     // On vérifie aussi le cas d'égalité.
    {
        printf("Les deux entiers sont egaux");
    }
    else if (entier1 > entier2)
    {
        printf("L'entier le plus grand est : %d",entier1);
    }
    else
    {
        printf("L'entier le plus grand est : %d",entier2);
    }
*/

//Exercice 2
/*
    int largeur = 0, longueur = 0;
    printf("Saisissez la largeur de votre rectangle :\n");
    scanf("%d",&largeur);
    printf("Saisissez la longueur de votre rectangle :\n");
    scanf("%d",&longueur);
    printf("Le perimetre de votre rectangle est %d.\n", 2 * (longueur + largeur) );
    printf("L'aire de votre rectangle est %d.\n", longueur * largeur );
*/

//Exercice 3
/*
    int entier = 0;
    const int diviseur = 3;
    printf("Saisissez un entier :\n");
    scanf("%d", &entier);
    if (entier % diviseur == 0)   // On regarde si notre entier est divisible par 3.
    {
        printf("%d est divisible par 3 ", entier);
    }
    else
    {
        printf("%d n'est pas divisible par 3 ", entier);
    }
    if (entier >= 10)     // On regarde si notre entier est supérieur ou égal à 10.
    {
        printf("et est superieur ou egal a 10.\n");
    }
    else
    {
        printf("et n'est pas superieur ou egal a 10.");
    }
*/


//Exercice 4
/*
    int etudiant = 0, age = 0;
    printf("Quel age avez vous ?\n");
    scanf("%d", &age);

    if (age >= 18 && age <= 27)    // Certain tarif ne necessite pas de savoir si le client est étudiant ou non.
    {
        do
        {
            printf("Etes vous etudiant ? ( 1 pour oui, 0 pour non)\n");
            scanf("%d", &etudiant);
        } while (etudiant != 0 && etudiant != 1);
    }

    if (age >= 0 && age < 12)
    {
        printf("Le prix de votre billet est de 4 euros.");
    }
    else if ((age <= 17) || (age <= 27 && etudiant) || (age >= 65))
    {
        printf("Le prix de votre billet est de 6 euros.");
    }
    else
    {
        printf("Le prix de votre billet est de 9 euros.");
    }
*/

//Exercice 5
/*
    int choix = 0;
    printf("Choisissez votre boisson :\nCoca-Cola :1\nFanta :2\nOrangina :3\nThe :11\nCafe :12\n>\n");
    scanf("%d", &choix);
    switch (choix)
    {
        case 1:
        {
            printf("Vous avez choisi un Coca-Cola.\n");
            break;
        }
        case 2:
        {
            printf("Vous avez choisi un Fanta.\n");
            break;
        }
        case 3:
        {
            printf("Vous avez choisi un Orangina.\n");
            break;
        }
        case 11:
        {
            printf("Vous avez choisi un The.\n");
            break;
        }
        case 12:
        {
            printf("Vous avez choisi un cafe.\n");
            break;
        }
        default:
        {
            printf("Vous n'avez choisi aucun numero valide.\n");
            break;
        }
    }
*/

//Exercice 6
/*
    float note = 0.0f, somme = 0.0f;
    printf("Saisissez trois notes entre 0 et 20 :\n");
    for (int i = 1; i <= 3; i++)                     // On veut saisir 3 notes
    {
        do
        {
            scanf("%f", &note);
            if (note < 0 || note > 20)
            {
                printf("Votre note n'est pas entre 0 et 20.\n");
            }
        } while (note < 0 || note > 20);              // Les 3 notes doivent etres comprisent entre 0 et 20.
        somme += note;
    }
    printf("La moyenne de ces 3 notes est : %f", somme / 3);
*/

//Exercice 7
/*
    int nombreClasse = 0, nombreEleve = 0, totalEleve = 0;
    printf("Saisissez le nombre de classes ouvertes :\n");
    scanf("%d", &nombreClasse);
    for (int i = 1; i <= nombreClasse; i++)       // Pour chaque classe ouverte on demande le nombres d'eleves dans cette classe.
    {
        printf("Saisissez le nombre d'eleves dans la classe %d :\n", i);
        scanf("%d", &nombreEleve);
        totalEleve += nombreEleve;
    }
    printf("Il y a %d eleve(s) dans l'ecole.\n", totalEleve);
*/

//Exercice 8
/*
    int entier = 0;
    printf("Saisissez un nombre entier :\n");
    do
    {
        scanf("%d", &entier);
        if ( entier % 2 != 0 || entier % 7 != 0 )
        {
            printf("Cet entier n'est pas un multiple de 2 et de 7.\n");
        }
    } while( entier % 2 != 0 || entier % 7 != 0 );         // On veut que notre entier soit un multiple de 2 et de 7.
    printf("%d est un multiple de 2 et de 7.\n", entier);
    return 0;
*/

//Exercice 9
/*
    int nombreEtage = 0, nombrePierre = 0, sommeCarre = 0;
    printf("Saisissez votre nombre de pierre :\n");
    scanf("%d", &nombrePierre);
    while (sommeCarre <= nombrePierre)
    {
        nombreEtage += 1;
        sommeCarre = (nombreEtage) * (nombreEtage + 1) * (2 * nombreEtage + 1) / 6;   //Formule de la somme des n premiers carré.
    }
    printf("Vous pourrez construire %d etage(s) avec %d pierre(s).\n", nombreEtage-1, nombrePierre);
*/

//Exercice 10
/*
    int nombreEntier = 0, entier = 0, sommeEntier = 0;
    printf("Saisissez des nombres entier pour en calculer la moyenne et saisissez un nombre negatif pour terminer la saisie:\n");
    do
    {
        scanf("%d", &entier);
        sommeEntier += entier;
        nombreEntier += 1;
    } while (entier >= 0);
    sommeEntier -= entier;      // On retire l'entier négatif de fin du calcule.
    nombreEntier -= 1;          // On divise par le nombre total d'entier pour obtenir une moyenne.
    printf("La moyenne vaut %f\n", (float) sommeEntier / (float) nombreEntier);
*/

    return 0;
}
