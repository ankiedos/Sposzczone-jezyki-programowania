#include "Funkcje.cpp"
#include <math.h>
using namespace std;

namespace mat
{
    static const double Pi = 3.14159265359;
    static double Odwrotnosc(double x)
    {
        funkcje::Zwroc(1 / x);
    }
    static double Przeciwna(double x)
    {
        funkcje::Zwroc(-x);
    }

    static double Pierw2(double arg)
    {
        funkcje::Zwroc(sqrt(arg));
    }
    static double Pierw(double arg, int grad)
    {
        funkcje::Zwroc(pow(arg, (1 / grad)));
    }
    static long double Potega(long double arg, unsigned int exp)
    {
        funkcje::Zwroc(pow(arg, exp));
    }

    namespace srednia
    {
        static double SredniaArytm(double a, double b, double c, double d, double e, double f, double g)
        {
            funkcje::Zwroc((a + b + c + d + e + f + g) / 7);
        }
        static double SredniaGeometryczna(double a, double b, double c, double d, double e, double f, double g)
        {
            funkcje::Zwroc(mat::Pierw(a * b * c * d * e * f * g, 7));
        }
        static double SredniaHarmoniczna(double a, double b, double c, double d, double e, double f, double g)
        {
            funkcje::Zwroc(7 / ((1 / a) + (1 / b) + (1 / c) + (1 / d) + (1 / e) + (1 / f) + (1 / g)));
        }
    };

    namespace polaObwody
    {
        static double PoleKola(double r) //Pole Kola
        {
            funkcje::Zwroc(Pi * mat::Potega(r, 2));
        }
        static double ObwodKola(double r) //Obwod Kola
        {
            funkcje::Zwroc(2 * Pi * r);
        }
        static int ObwodTrojkata(int a, int b, int c)
        {
            funkcje::Zwroc(a + b + c);
        }
        static int PoleTrapezu(int a, int b, int h) //Pole Trapezu
        {
            funkcje::Zwroc(((a + b) * h) / 2);
        }
        static int PoleRownolegloboku(int a, int h) //Pole Rownolegloboku
        {
            funkcje::Zwroc(a * h);
        }
        static int PoleProstokata(int a, int b) //Pole Prostokata
        {
            funkcje::Zwroc(a * b);
        }
        static int PoleRombu(int e, int f) //Pole Rombu
        {
            funkcje::Zwroc((e * f) / 2);
        }
        static int PoleKwadratu(int a) //Pole Kwadratu
        {
            funkcje::Zwroc(mat::Potega(a, 2));
        }
        static int PoleTrojkata(int a, int h) //Pole Trojkata
        {
            funkcje::Zwroc((a * h) / 2);
        }
    };
    namespace specjalneFunkcje
    {
        static int abs(int x) //Wartosc Bezwzgledna
        {
            funkcje::Zwroc(abs(x));
        }
        static int Sgn(int x) //Funkcja Signum
        {
            if (x > 0) funkcje::Zwroc(1);
            else if (x == 0) funkcje::Zwroc(0);
            else funkcje::Zwroc(-1);
        }
        static double Hiperbola(int x) //Hiperbola
        {
            funkcje::Zwroc(Odwrotnosc(x));
        }
        static int Parabola(int x) //Parabola
        {
            funkcje::Zwroc(mat::Potega(x, 2));
        }
    };
};
