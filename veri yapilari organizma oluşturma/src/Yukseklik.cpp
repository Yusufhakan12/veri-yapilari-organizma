/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/
#include"Yukseklik.hpp"
#include"math.h"
#include<iostream>
using namespace std;

Yukseklik::Yukseklik()
{
    
}

int Yukseklik::yukseklikmax(agacDugum*aktif)
{
    if(aktif)
    {
        
        return 1+ max(yukseklikmax(aktif->sol),yukseklikmax(aktif->sag));
        
    }
    return -1;
}

int Yukseklik::yukseklikmin(agacDugum*aktif)
{
    if(aktif)
    {
        return 1+min(yukseklikmin(aktif->sol),yukseklikmin(aktif->sag));
    }
    return -1;
}