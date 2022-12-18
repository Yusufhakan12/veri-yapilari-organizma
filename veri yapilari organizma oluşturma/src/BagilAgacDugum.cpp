
/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/


#include "BagilAgacDugum.hpp"
#include"Doku.hpp"
BagilAgacDugum::BagilAgacDugum(DokuDugum*doku)
{
    this->veri = doku->veri;
    sag=sol=0;
   
}