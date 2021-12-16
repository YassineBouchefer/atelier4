#include<iostream>
using namespace std;
//creation de la classe complexe
class complexe    
{
    float R,I;    //declaration de deux attributs privees 
    public :
    complexe(float a=0,float b=0)
    {
        R=a;
        I=b;
    }
    void afficher() // fonction pour afficher les parties reelle et imaginaire
    {
    	cout << R;  // afficher la partie reelle
    	if (I >= 0)  // condition pour l'affichage d'operateur + (dans le cas d'une partie imaginaire negative on n'aura pas Re + - Im i , mais Re - Im i)
        {cout << " + ";}
        cout << I << "i" << endl;
    }
    complexe operator=(complexe a)   //surcharge d'operateur =
    {
        complexe e;  //declaration d'un autre objet avec qui on va comparer les parties reelle et imaginaire
        if(R==a.R && I==a.I)
        {
            cout<<"le premier nombre complexe est egal au nombre complexe : ";
        }
        else
        {
            cout<<"le premier nombre complexe n'est pas egal au nombre complexe : ";
        }
        return a;
    }
    complexe operator+(complexe a)   //surcharge d'operateur +
    {
        complexe s;              //on declare un autre objet qui va avoir comme partie relle(resp.imaginaire) , la partie reelle(resp.imaginaire) de la somme des deux nombres complexes
        s.R = R + a.R;
        s.I = I + a.I;
        cout<<"Le resultat de l'addition est : ";
        return s;  //retourner la somme des deux nombres complexes
    }
    complexe operator*(complexe a)  //surcharge d'operateur *
    {
        complexe p;               //on declare un autre objet qui va avoir comme partie reelle(resp.imaginaire) , la partie reelle(resp.imaginaire) du produit des deux nombres complexes
        p.R = R * a.R - I * a.I;
        p.I = R * a.I + I * a.R;
        cout<<"Le resultat du produit est : ";
        return p;
    }
    complexe operator-(complexe a)  //surcharge d'operateur -
    {
        complexe s;  //on declare un autre objet qui va avoir comme partie relle(resp.imaginaire) , la partie reelle(resp.imaginaire) de la soustraction des deux nombres complexes
        s.R = R - a.R;
        s.I = I - a.I;
        cout<<"Le resultat de la soustraction est : ";
        return s;
    }
    complexe operator/(complexe a)  //surcharge d'operateur /
    {
        complexe d;     //on declare un autre objet qui va avoir comme partie reelle(resp.imaginaire) , la partie reelle(resp.imaginaire) du division des deux nombres complexes
        d.R = (R*a.R + I*a.I)/(a.R*a.R + a.I*a.I);
        d.I = (I*a.R - R*a.I)/(a.R*a.R + a.I*a.I);
        cout<<"Le resultat de la division est : ";
        return d;
    }
};
int main()
{   
    float r1,r2,i1,i2;
    cout<<"entrer la partie reelle du premier nombre complexe : "<<endl;
    cin>>r1;
    cout<<"entrer la partie imaginaire du premier nombre complexe : "<<endl;
    cin>>i1;
    cout<<"entrer la partie reelle du deuxieme nombre complexe : "<<endl;
    cin>>r2;
    cout<<"entrer la partie imaginairee du deuxieme nombre complexe : "<<endl;
    cin>>i2;
    complexe a(r1,i1),b(r2,i2);
    (a=b).afficher();
    (a+b).afficher();
    (a-b).afficher();
    (a*b).afficher();
    (a/b).afficher();
}
