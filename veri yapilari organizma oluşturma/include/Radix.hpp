#ifndef Radix_hpp
#define Radix_hpp
#include "Kuyruk.hpp"

class Radix
{
public:
    Radix(int* sayilar,int adet);
    ~Radix();
    void    genislet(int boyut);
    void    kuyruklariYazdir();

    int* sirala();

private:
    int     maxBasamakSayisiGetir();
    int     basamakSayisiGetir(int sayi);
    void    kuyrukUzunluklariGetir(int* uzunluklar);
    Kuyruk** kuyruklar;
    int*    sayilar;
    int     sayiAdedi;
    int kapasite;
};

#endif