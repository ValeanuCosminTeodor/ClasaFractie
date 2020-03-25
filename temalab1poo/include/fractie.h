#include <iostream>
#include <vector>

class Fractie {
    int numarator;
    int numitor;
public:
    Fractie();
    Fractie(int x, int y);
    ~Fractie();
    Fractie(const Fractie& fractie);
    void afisare();
    void setNumarator(int x);
    void setNumitor(int x);
    int getNumarator();
    int getNumitor();
    void simplificare();
    Fractie& cmmmc(Fractie f1);
    Fractie& operator+(Fractie f1);
    Fractie& operator-(Fractie f1);
    Fractie& operator*(Fractie f1);
    Fractie& operator/(Fractie f1);
    Fractie& operator*(int x);
    friend std::istream& operator >>(std::istream& in,Fractie& f1);
    friend std::ostream& operator <<(std::ostream& out,Fractie& f1);
    void afisare2(Fractie *vector1);
    void functie(std::vector<Fractie> ve);
};
