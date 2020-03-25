#include <iostream>
#include "fractie.h"

int main()
{
    std:: vector<Fractie> vect ;
    Fractie aux;
    aux.functie(vect);
    Fractie a,b,c,d,e,f;
    std::cout<<"a=";
    std::cin>>a;
    std::cout<<"b=";
    std::cin>>b;
    std::cout<<"c=";
    std::cin>>c;
    std::cout<<"d=";
    std::cin>>d;
    std::cout<<"e=";
    std::cin>>e;
    std::cout<<"f=";
    std::cin>>f;
    a.simplificare();
    b.simplificare();
    c.simplificare();
    d.simplificare();
    e.simplificare();
    f.simplificare();
    Fractie multiplu(b);
    multiplu=multiplu.cmmmc(e);
    multiplu.simplificare();
    Fractie z1(multiplu);
    Fractie z2(multiplu);
    z1=z1/b;
    z2=z2/e;
    z1.simplificare();
    z2.simplificare();
    Fractie noua(a);
    Fractie nouc(c);
    Fractie noud(d);
    Fractie nouf(f);
    noua=noua*z1;
    nouc=nouc*z1;
    noud=noud*z2;
    nouf=nouf*z2;
    noua=noua-noud;
    nouc=nouc-nouf;
    Fractie x;
    x=nouc/noua;
    x.simplificare();
    z1=a;
    z1=z1*x;
    z2=c;
    z2=z2-z1;
    Fractie y;
    y=z2/b;
    y.simplificare();
    std::cout<<"Solutiile sunt \n";
    std::cout<<"x=";
    x.afisare();
    std::cout<<"y=";
    y.afisare();
    return 0;
}
