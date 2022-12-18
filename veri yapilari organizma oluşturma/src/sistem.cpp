/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include "sistemDugum.hpp"
#include"sistem.hpp"
#include "iomanip"
#include"agacDugum.hpp"
#include<fstream>
#include <sstream>
using namespace std;



sistem::sistem()
{   
    ilk=0;
    
}
sistem::~sistem()
{
    sistemDugum*gec=ilk;
    while (gec!=0)
    {   sistemDugum*silinecek=gec;
        gec=gec->sonraki;
        delete silinecek;
    }
    
}
void sistem::ekle(agacDugum* veri)
{  
    sistemDugum*yeniDugum=new sistemDugum(veri);
    if(ilk==0)
    {
        ilk=yeniDugum;
        

    }
    else
    {
        sistemDugum*gec= ilk;
        
        while (gec->sonraki!=0)
        {
            
           gec=gec->sonraki;
           
        }
         
        gec->sonraki=yeniDugum; 
        
 
        
    }
    
    
}