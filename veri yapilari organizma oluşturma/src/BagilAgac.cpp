/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/
#include "BagilAgac.hpp"
#include"Hucre.hpp"
#include"DokuDugum.hpp"
#include"agacDugum.hpp"
using namespace std;
BagilAgac::BagilAgac()
{
    kok=0;
}


void BagilAgac::ekle(DokuDugum*a,agacDugum*aktif)
{
    if(aktif->veri<a->veri)
    {
        if(aktif->sag)
        {
            return ekle(a,aktif->sag);
        }
        else
        {
            aktif->sag=new agacDugum(a);
        }
    }
    else if(aktif->veri>a->veri)
    {
        if(aktif->sol)
        {
            return ekle(a,aktif->sol);
        }
        else
        {
            aktif->sol=new agacDugum(a);
            
        }
    }
    else
        return;

}
