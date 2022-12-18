/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/
#include "organizmaDugum.hpp"
#include"agacDugum.hpp"
organizmaDugum::organizmaDugum(sistemDugum* sistem)
{
    this->sistem=sistem;
    sonraki=0;
   
}