#ifndef Doku_hpp
#define Doku_hpp
#include<iostream>
#include"Hucre.hpp"
#include<exception>
#include"DokuDugum.hpp"
#include"math.h"
using namespace std;

class Doku
{
    public:
    DokuDugum*ilk;
    Doku();
    ~Doku();
    void ekle(int veri);;
    int  ortancaDeger;
    int veri;
    Doku*sag;
    Doku*sol;
    
};



#endif