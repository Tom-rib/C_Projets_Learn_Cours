1. Job01:

#include <stdio.h>

void main()
{
    int N1, N2;

    printf("Entrez deux nombres N1 et N2:");
    scanf("%d %d", &N, &N2);
  
    if (N == N2)
        printf("N1 et N2 sont égaux.");
    else
        printf("N1 et N2 ne sont pas égaux.");
}

2. Job02:


#include <stdio.h>

void main()
{
    int n;

    printf("Entrez un nombre:");
    scanf("%d", &n);

    if (n >= 0)
        printf("%d est un nombre positif", n); 
    else
        printf("%d est un nombre négatif", n);
}


3. Job03:

#include <stdio.h>

void main()
{
    int an;

    printf("Entrez une année:");
    scanf("%d", &an);

    if ((an % 400) == 0)
        printf("%d est une année bissextile.", an);
    else if ((an % 100) == 0)
        printf("%d n'est pas une année bissextile.", an);
    else if ((an % 4) == 0)
        printf("%d est une année bissextile.", an);
    else
        printf("%d n'est pas une année bissextile.", an);
}


4. Job04:

#include <stdio.h>

void main()
{
  int age;

  printf("Entrez votre age:");
  scanf("%d",&age);

  if (age < 18)
    printf("Désolé, vous n'avez pas le droit de voter.");
  else
    printf("Bienvenue. Vous êtes éligible pour voter.");
}


5. Job05:

#include <stdio.h>

void main()
{
    int T;

    printf("Entrez la températures:");
    scanf("%d", &T);

    if (T < 0)
        printf("Temps glacial");
    else if (T < 10)
        printf("Temps très froid");
    else if (T < 20)
        printf("Temps froid");
    else if (T < 30)
        printf("Températures normales");
    else if (T < 40)
        printf("Temps Chaud");
    else
        printf("Temps très chaud");
}




6. Job06:

#include <stdio.h>

int main()  
{  
    // Déclarer les variables correspondant aux côtés du triangle
    int a, b, c;

    //Lit tous les côtés du triangle  
    printf("Entrer les trois côtés du triangle:");
    scanf("%d %d %d", &a, &b, &c);
  
    // Vérifier si tous les côtés sont égaux
    if(a==b || a==c || b==c)
    {  
        printf("Il s'agit d'un triangle équilatéral.");
    }  
    // Vérifier si deux côtés sont égaux 
    else if(a==b && b==c)  
    {  
        printf("Il s'agit d'un triangle isocèle.");
    }  
    // Si aucun côté n'est égal à un autre
    else 
    {  
        printf("Il s'agit d'un triangle scalène.");
    }  

    return 0;  
} 


7. Job07:


#include <stdio.h>

void main()  
{  
    int a, b, c, s;

    printf("Entrer les trois angles du triangle:");   
    scanf("%d %d %d", &a, &b, &c);

    // Calculer la somme de tous les angles du triangle 
    s = a + b + c;   

    /* Vérifier si la somme = 180 alors c'est un 
       triangle valide sinon non. */  
    if(s == 180)   
    {  
        printf("Le triangle est valide.");
    }  
    else  
    {  
        printf("Le triangle n'est pas valide."); 
    }  
}


8. Job08:


#include <stdio.h>

int main()  
{  
    char c;

    printf("Saisir un caractère:");
    scanf("%c", &c);

    if((c>='a' && c<='z') || (c>='A' && c<='Z'))  
    {  
        printf("Il s'agit d'un alphabet.");
    }   
    else if(c>='0' && c<='9')
    {  
        printf("Il s'agit d'un chiffre.");
    } 
    else 
    {  
        printf("Il s'agit d'un caractère spécial.");
    }  
}



9. Job09:


#include <stdio.h>

void main()  
{  
    char c;

    printf("Entrez une lettre quelconque de l'alphabet:");
    scanf("%c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')  
    {  
        printf("La lettre est une voyelle.");
    }  
    else if((c>='a' && c<='z') || (c>='A' && c<='Z'))  
    {  
        printf("La lettre est une consonne.");
    }  
    else  
    {  
        printf("Le caractère n'est pas un alphabet.");
    }   
}



10. Job10:


#include <stdio.h>

void main()  
{  
    int cprix, vprix, profit;

    printf("Prix de vente:");
    scanf("%d", &vprix);
    printf("Prix du coût en entrée:");
    scanf("%d", &cprix);

    // Vérifier si le prix de vente est supérieur au prix de coût.
    if(vprix > cprix)  
    {  
        // Calculer le montant du profit.
        profit = vprix - cprix;  
        printf("Vous pouvez provisionner le montant de votre bénéfice: %d\n", profit);
    }  
    // Vérifier si le prix de coût est supérieur au prix de vente.
    else if(cprix > vprix)  
    {  
        // Calculer le montant de la perte.
        profit = cprix - vprix;  
        printf("Vous avez subi une perte de somme: %d\n", profit);
    }  
    // S'il n'y a ni bénéfice ni perte.
    else  
    {  
        printf("Vous êtes dans une situation où il n'y a ni profit ni perte.");
    }  
}