#ifndef organizma_hpp
#define organizma_hpp
#include<iostream>
#include"Hucre.hpp"
#include<exception>
#include"organizmaDugum.hpp"
#include"math.h"
using namespace std;

class organizma
{
    public:
    organizmaDugum*ilk;
    organizma();
    ~organizma();
    void ekle(sistemDugum* veri);;
    
    
};



#endif