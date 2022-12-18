#ifndef Yukseklik_hpp
#define Yukseklik_hpp
#include"agacDugum.hpp"

class Yukseklik
{

    public:
    Yukseklik();
    ~Yukseklik();
    int yukseklikmax(agacDugum*aktif);
    int yukseklikmin(agacDugum*aktif);
    agacDugum*aktif;

};

#endif


