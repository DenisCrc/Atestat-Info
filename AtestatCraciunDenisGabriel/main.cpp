#include<iostream>
#include<fstream>>
#include<cstdlib>
#include <ctime>
#include <iomanip>
#include<cstring>
using namespace std;
int opt;
char fis[20];
void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    while(clock() < startClock+secondsAhead);
    return;
}
void sterge_ecran()
{
    sleep(5.0);
    system("CLS");
}
void printBuildDateTime () {
    cout << __TIMESTAMP__ << endl;
}
void ecran_principal()
{
    printBuildDateTime ();

    cout<<"\n\n\n\n";
    cout<<"                     RECURSIVITATE\n\n";
    cout<<"                     CRACIUN DENIS GABRIEL\n\n";
    cout<<"                     Clasa 12 A\n\n";
}
  void meniu_principal()
  {
      sterge_ecran();
      printBuildDateTime ();
      cout<<"\n\n";
      cout<<"Notiuni elementare- recursivitate                                                                            ( 1)\n";
      cout<<"Problema 1- Cel mai mare divizor comun recursiv                                                   - sursa    ( 2)\n";
      cout<<"Problema 1- Cel mai mare divizor comun recursiv                                                              ( 3)\n";
      cout<<"Problema 2- Citire si afisare matrice recursiv                                                    - sursa    ( 4)\n";
      cout<<"Problema 2- Citire si afisare matrice recursiv                                                               ( 5)\n";
      cout<<"Problema 3- Suma cifre in functie de pozitia din vector                                           - sursa    ( 6)\n";
      cout<<"Problema 3- Suma cifre in functie de pozitia din vector                                                      ( 7)\n";
      cout<<"Problema 4- Numarul de cifre distincte dintr-un nr n recursiv                                     - sursa    ( 8)\n";
      cout<<"Problema 4- Numarul de cifre distincte dintr-un nr n recursiv                                                ( 9)\n";
      cout<<"Problema 5- Afisare desene cu ajuorul caracterului *                                              - sursa    (10)\n";
      cout<<"Problema 5- Afisare desene cu ajuorul caracterului *                                                         (11)\n";
      cout<<"Problema 6- Descompunere in sume ale puterilor lui 2                                              - sursa    (12)\n";
      cout<<"Problema 6- Descompunere in sume ale puterilor lui 2                                                         (13)\n";
      cout<<"Problema 7- Impartire vector in alti 2 vectori in functie de paritate                             - sursa    (14)\n";
      cout<<"Problema 7- Impartire vector in alti 2 vectori in functie de paritate                                        (15)\n";

  }
////////////////////////////////////////////////////////////////////
void teorie()
{
    ifstream f(fis);
    sterge_ecran();
    printBuildDateTime ();
    char lin[1000];
    char x;
    while(f.getline(lin,1000))
    {
        cout<<lin;
        cout<<endl;
    }
    cin>>x;
    f.close();
}
////////////////////////////////////////////////////////////////////
int cmmdc(int x, int y)
{ if(x%y==0) return y;
  else return cmmdc(y,x%y);
}
void p1()
{
    sterge_ecran();
    printBuildDateTime();
    cout<<"Sa se calculeze CMMDC al doua numele naturale folosind o functie recursiva.";
    cout<<"introduceti 2 numere nenule:";
    cout<<endl;
    int x,y;
    cin>>x>>y;
    cout<<cmmdc(x,y);
    sleep(10.0);
}
////////////////////////////////////////////////////////////////////
void citire(int A[][101], int n, int m, int i, int j)
{
    if(i<=n)
    {
        cin>>A[i][j];
        if(j<m) citire(A,n,m,i,j+1);
        else citire(A,n,m,i+1,1);
    }
}
void afisare(int A[][101], int n, int m, int i, int j)
{
    if(i<=n)
    {
        cout<<A[i][j]<<" ";
        if(j<m) afisare(A,n,m,i,j+1);
        else
        {
            cout<<endl;
            afisare(A,n,m,i+1,1);
        }
    }
}
void p2()
{
    sterge_ecran();
    printBuildDateTime();
    int A[101][101],n,m,i=1,j=1;
    cout<<"Citirea si afisarea unei matrici folosind functii recursive."<<endl;
    cout<<"introduceti numarul de linii si de coloane si matricea pe care doriti sa o afisati:";
    cout<<endl;
    cin>>n>>m;
    citire(A,n,m,i,j);
    afisare(A,n,m,i,j);
    sleep(10.0);
}
////////////////////////////////////////////////////////////////////
void citire(int A[], int n)
{
    if(n>0)
    {
        citire(A,n-1);
        cin>>A[n];
    }
}
int sumcifp(int n, int p)
{
    if(n==0) return 0;
    else if(n%2==p) return sumcifp(n/10,p)+n%10;
         else return sumcifp(n/10,p);
}
void inlocuire(int A[], int n)
{
    if(n>0)
    {
        inlocuire(A,n-1);
        A[n]=sumcifp(A[n],n%2);
    }
}
void afisare(int A[], int n)
{
    if(n>0)
    {
        afisare(A,n-1);
        cout<<A[n]<<" ";
    }
}
void p3()
{
    sterge_ecran();
    printBuildDateTime();
    cout<<"Se citeste un vector cu n elemente numere naturale (n<=100)."<<endl;
    cout<<"Sa se inlocuiasca fiecare element al vectorului cu suma cifrelor cu aceeasi paritate ca si indicele elementului."<<endl;
    cout<<"Indexarea elementelor incepe de la 1."<<endl;
    cout<<"Se vor scrie si folosi functii recursive pentru:"<<endl;
    cout<<"- citirea vectorului"<<endl;
    cout<<"- afisarea vectorului"<<endl;
    cout<<"- calculul sumei cifrelor de o anumita paritate"<<endl;
    cout<<"- inlocuirea ceruta"<<endl;
    cout<<"Exemplu: Pentru datele de mai jos"<<endl;
    cout<<"7"<<endl;
    cout<<"223 435 6667 24 55 662 122"<<endl;
    cout<<"Sirul rezultat este"<<endl;
    cout<<"3 4 7 6 10 14 1"<<endl;
    cout<<"introduceti un numar n si n element eale unui vector:"<<endl;
    int A[100],n;
    cin>>n;
    citire(A,n);
    inlocuire(A,n);
    afisare(A,n);
    sleep(10.0);
}
////////////////////////////////////////////////////////////////////
int apcif(int n, int c)
{//numarul de aparitii ale lui c in n
    if(n<=9) return n==c;
    else if(n%10==c) return apcif(n/10,c)+1;
         else return apcif(n/10,c);
}
int dist(int n, int c)
{//numara cifrele distincte ale lui n
    if(c==-1) return 0;
    else if(apcif(n,c)) return dist(n,c-1)+1;
         else return dist(n,c-1);
}

void p4()
{
    sterge_ecran();
    printBuildDateTime();
    cout<<"Se citeste un numar natural n cu cel mult 9 cifre."<<endl;
    cout<<"Afisati numarul de cifre distincte ale lui n."<<endl;
    cout<<"Se vor folosi exclusiv subprograme recursive."<<endl;
    cout<<"Exemplu:"<<endl;
    cout<<"Pentru n=38837 se afiseaza 3 (cifrele distinte sunt 3,7 si 8)."<<endl;
    cout<<"introduceti un nr natural n:"<<endl;
    int n;
    cin>>n;
    cout<<dist(n,9);
    sleep(10.0);

}
////////////////////////////////////////////////////////////////////
void linie(int n, char c)
{
    if(n>0)
    {
        linie(n-1,c);
        cout<<c;
    }
}
void sus(int n, int r)
{
    if(r<=n)
    {
        linie(n-r,' ');
        linie(2*r-1,'*');
        cout<<endl;
        sus(n,r+1);
    }
}
void jos(int n, int r)
{
    if(r<=n)
    {
        jos(n,r+1);
        linie(n-r+1,' ');
        linie(2*r-1,'*');
        cout<<endl;
    }
}

void p5()
{
    sterge_ecran();
    printBuildDateTime();
    int n;
    cout<<"Se citeste un numar natural n (n<=20). Afisati un desen format din caracterul * ca in exemplul de mai jos. "<<endl;
    cout<<"Se vor folosi exclusiv subprograme recursive."<<endl;
    cout<<"Exemplu:"<<endl;
    cout<<"Pentru n=3 se afiseaza:"<<endl;
    cout<<"  *  "<<endl;
    cout<<" *** "<<endl;
    cout<<"*****"<<endl;
    cout<<" *** "<<endl;
    cout<<"  *  "<<endl;
    cout<<"introduceti un numar natural:"<<endl;
    cout<<endl;
    cin>>n;
    sus(n,1);
    jos(n-1,1);
    sleep(10.0);
}
//////////////////////////////////////////////////////////////////
unsigned int pm2(int n, unsigned int p)
{
    if(p*2>n) return p;
    else return pm2(n,p*2);
}
void puteri2(int n)
{
    if(n>0)
    {
        unsigned int p=pm2(n,1);
        puteri2(n-p);
        cout<<p<<" ";
    }
}
void p6()
{
    sterge_ecran();
    printBuildDateTime();
    cout<<"Se citeste un numar natural n. Sa se descompuna ca suma de puteri crescatoare ale lui 2."<<endl;
    cout<<"Se vor folosi doar prelucrari/calcule realizate cu ajutorul functiilor implementate recursiv."<<endl;
    cout<<"Exemplu: Pentru n=84 va afisa 4 16 64 (84 se descompune ca 4+16+64)"<<endl;
    cout<<endl;
    cout<<"introduceti un numar n";
    int n;
    cin>>n;
    puteri2(n);
    sleep(10.0);
}
//////////////////////////////////////////////////////////////////
void citiree(int a[], int n)
{
    if(n>0)
    {
        citire(a,n-1);
        cin>>a[n];
    }
}
void afisaree(int a[], int n)
{
    if(n>0)
    {
        afisare(a,n-1);
        cout<<" "<<a[n];
    }
}
void split(int a[],int n,int b[],int &m,int c[],int &k)
{
    if(n>0)
    {
        split(a,n-1,b,m,c,k);
        if(a[n]%2==0)
            b[++m]=a[n];
        else
            c[++k]=a[n];
    }
}
void p7()
{
    sterge_ecran();
    printBuildDateTime();
    cout<<"Se citeste un vector a cu n elemente numere intregi. Construiti si afisati doi vectori b si c contruiti astfel:"<<endl;
    cout<<"- vectorul b contine elementele pare din vectorul a";
    cout<<"- vectorul c contine elementele impare din vectorul a";
    cout<<"Se vor folosi functii recursive pentru citire si afisare, precum si pentru construirea celor doi vectori ceruti."<<endl;
    cout<<"Exemplu:"<<endl;
    cout<<"7"<<endl;
    cout<<"2 5 7 9 2 5 4"<<endl;
    cout<<"2 2 4"<<endl;
    cout<<"5 7 9 5"<<endl;
    cout<<endl;
    cout<<"introduceti un numar n si un vector format din n elemente";
    int a[200],b[100],c[100],n,m=0,k=0;
    cin>>n;
    citiree(a,n);
    split(a,n,b,m,c,k);
    afisaree(b,m);
    cout<<endl;
    afisare(c,k);
    sleep(10.0);

}
//////////////////////////////////////////////////////////////////
int main()
{

ecran_principal();
do{
    meniu_principal();
    cin>>opt;
    switch (opt)
    {
        case 1: {strcpy(fis,"teorie.in");teorie();break;};
        case 2: {strcpy(fis,"p1.in");teorie();break;};
        case 3: p1();break;
        case 4: {strcpy(fis,"p2.in");teorie();break;};
        case 5: p2();break;
        case 6: {strcpy(fis,"p3.in");teorie();break;};
        case 7: p3();break;
        case 8: {strcpy(fis,"p4.in");teorie();break;};
        case 9: p4();break;
        case 10:{strcpy(fis,"p5.in");teorie();break;};
        case 11:p5();break;
        case 12:{strcpy(fis,"p6.in");teorie();break;};
        case 13:p6();break;
        case 14:{strcpy(fis,"p7.in");teorie();break;};
        case 15:p7();break;
    }


}while (opt);
   return 0;
}





