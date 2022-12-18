/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include "organizma.hpp"
#include "iomanip"
#include<fstream>
#include <sstream>
using namespace std;

organizma::organizma()
{   
    ilk=0;
  
    
}
organizma::~organizma()
{
    organizmaDugum*gec=ilk;
    while (gec!=0)
    {   organizmaDugum*silinecek=gec;
        gec=gec->sonraki;
        delete silinecek;
    }
    
}
void organizma::ekle(sistemDugum* veri)
{  
    organizmaDugum*yeniDugum=new organizmaDugum(veri);
    if(ilk==0)
    {
        ilk=yeniDugum;
        

    }
    else
    {
        organizmaDugum*gec= ilk;
        
        while (gec->sonraki!=0)
        {
            
           gec=gec->sonraki;
           
        }
         
        gec->sonraki=yeniDugum; 
        
 
        
    }
    
    
}




