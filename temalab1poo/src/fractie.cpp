#include "fractie.h"
#include <math.h>
Fractie::Fractie()=default;
Fractie::Fractie(int x, int y)
{
    numarator=x;
    numitor=y;
}
Fractie::~Fractie()
{
    this->numarator=0;
    this->numitor=0;
}

Fractie::Fractie(const Fractie& fractie)
{
        numarator=fractie.numarator;
        numitor=fractie.numitor;
}

void Fractie::afisare()
{
    if (numitor==1 || numarator==0)
        std::cout<<numarator<<std::endl;
    else if (numitor==-1)
        std::cout<<-numarator<<std::endl;
    else if (numarator<0 && numitor>0)
        std::cout<<numarator<<"/"<<numitor<<std::endl;
    else if (numarator<0 && numitor<0)
        std::cout<<-numarator<<"/"<<-numitor<<std::endl;
    else if (numarator>0 && numitor>0)
        std::cout<<numarator<<"/"<<numitor<<std::endl;
    else
        std::cout<<-numarator<<"/"<<-numitor<<std::endl;
}
void Fractie::setNumarator(int x)
{
    numarator=x;
}
void Fractie::setNumitor(int x)
{
    numitor=x;
}
int Fractie::getNumarator()
{
    return numarator;
}
int Fractie::getNumitor()
{
    return numitor;
}
void Fractie::simplificare()
{
    int x,y;
    x=abs(numarator);
    y=abs(numitor);
    while (x!=y && x!=0)
    {
        if (x>=y) x=x-y;
        else y=y-x;
    }
    if (x==0) x=1;
    numarator=numarator/x;
    numitor=numitor/x;
    if (numitor==-1)
    {
        numarator=-numarator;
        numitor=1;
    }
}
Fractie& Fractie::cmmmc(Fractie f1)
{
    int x,y,p,cmmdcnumit,cmmmcnumar;
    x=abs(f1.numitor);
    y=abs(this->numitor);
    if (x==y)
    {
        cmmdcnumit=x;
    }
    else
      {
        while (x!=y)
        {
            if (x>=y)
                x=x-y;
            else
                y=y-x;
        }
        cmmdcnumit=x;
      }
    x=abs(f1.numarator);
    y=abs(this->numarator);
    p=x*y;
    if (x==y)
    {
        cmmmcnumar=x;
    }
    else
      {
        while (x!=y)
        {
            if (x>=y)
                x=x-y;
            else
                y=y-x;
        }
        cmmmcnumar=p/x;
      }
      this->numarator=cmmmcnumar;
      this->numitor=cmmdcnumit;
      return *this;
}
Fractie& Fractie::operator+(Fractie f1)
{
    int x,y,p;
    x=abs(f1.numitor);
    y=abs(this->numitor);
    p=x*y;
    if (x==y)
    {
        this->numarator+=f1.numarator;
        return *this;
    }
    else
      {
        while (x!=y)
        {
            if (x>=y)
                x=x-y;
            else
                y=y-x;
        }
      }
    x=p/x;
    f1.numarator=f1.numarator*(x/f1.numitor);
    f1.numitor=x;
    this->numarator=this->numarator*(x/this->numitor);
    this->numitor=x;
    this->numarator+=f1.numarator;
    return *this;
}

Fractie& Fractie::operator-(Fractie f1)
{
    int x,y,p;
    x=abs(f1.numitor);
    y=abs(this->numitor);
    p=x*y;
    if (x==y)
    {
        this->numarator-=f1.numarator;
        return *this;
    }
    else
      {
        while (x!=y)
        {
            if (x>=y)
                x=x-y;
            else
                y=y-x;
        }
      }
    x=p/x;
    f1.numarator=f1.numarator*(x/f1.numitor);
    f1.numitor=x;
    this->numarator=this->numarator*(x/this->numitor);
    this->numitor=x;
    this->numarator-=f1.numarator;
    return *this;
}

Fractie& Fractie::operator*(Fractie f1)
{
    this->numarator*=f1.numarator;
    this->numitor*=f1.numitor;
    return *this;
}

Fractie& Fractie::operator/(Fractie f1)
{
    this->numarator*=f1.numitor;
    this->numitor*=f1.numarator;
    return *this;
}

Fractie& Fractie::operator*(int x)
{
    this->numarator*=x;
    return *this;
}
std::istream& operator >>(std::istream& in,Fractie& f1)
{
    int numarator,numitor;
    in >> f1.numarator >> f1.numitor;
    return in;
}
std::ostream& operator <<(std::ostream& out,Fractie& f1)
{
    if (f1.numitor==1 || f1.numarator==0)
        out<<f1.numarator<<std::endl;
    else if (f1.numitor==-1)
        out<<-f1.numarator<<std::endl;
    else if (f1.numarator<0 && f1.numitor>0)
        out<<f1.numarator<<"/"<<f1.numitor<<std::endl;
    else if (f1.numarator<0 && f1.numitor<0)
        out<<-f1.numarator<<"/"<<-f1.numitor<<std::endl;
    else if (f1.numarator>0 && f1.numitor>0)
        out<<f1.numarator<<"/"<<f1.numitor<<std::endl;
    else
        out<<-f1.numarator<<"/"<<-f1.numitor<<std::endl;
    return out;
}
void Fractie::functie(std::vector<Fractie> ve) {
    std::cout << "cate elemente sa aiba vectorul? ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        Fractie aux;
        std::cin >> aux;
        ve.push_back(aux);
    }
    for (int i = 0; i < n; i++) {
        std::cout << ve[i];
    }

}
