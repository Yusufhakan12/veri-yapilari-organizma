/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/
#include "organ.hpp"
#include"Hucre.hpp"
#include"DokuDugum.hpp"
#include"agacDugum.hpp"
using namespace std;
organ::organ()
{
    kok=0;
}



void organ::ekle(DokuDugum*a,agacDugum*aktif)
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
    else if(aktif->veri>=a->veri)
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
DokuDugum*organ::postOrder(agacDugum*aktif)
{
    if(aktif)
    {
        postOrder(aktif->sol);
        postOrder(aktif->sag);
    }
}


