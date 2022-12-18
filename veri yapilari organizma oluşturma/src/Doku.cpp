/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include "Doku.hpp"
#include "iomanip"
#include<fstream>
#include <sstream>
using namespace std;



Doku::Doku()
{   
    ilk=0;
    sag=sol=0;
    
}
Doku::~Doku()
{
    DokuDugum*gec=ilk;
    while (gec!=0)
    {   DokuDugum*silinecek=gec;
        gec=gec->sonraki;
        delete silinecek;
    }
    
}
void Doku::ekle(int veri)
{  
    DokuDugum*yeniDugum=new DokuDugum(veri);
    if(ilk==0)
    {
        ilk=yeniDugum;
        

    }
    else
    {
        DokuDugum*gec= ilk;
        
        while (gec->sonraki!=0)
        {
            
           gec=gec->sonraki;
           
        }
         
        gec->sonraki=yeniDugum; 
        
 
        
    }
    
    
}



