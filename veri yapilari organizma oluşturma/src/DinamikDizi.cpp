/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/



#include"DinamikDizi.hpp"
DinamikDizi::DinamikDizi()
{
    m_boyut=5;
    sayilar=new int[m_boyut];
    m_kullanilan=0;
}
DinamikDizi::~DinamikDizi()
{
    delete sayilar;
}
int DinamikDizi::boyut()
 {
    return m_boyut;
 }
 int DinamikDizi::kullanilan()
 {
    return m_kullanilan;
 }

 void DinamikDizi::sonaEkle(int sayi)
 {
    if(m_kullanilan>=m_boyut)
    genislet(m_boyut);
       sayilar[m_kullanilan]=sayi;
       m_kullanilan++; 
 }
void DinamikDizi::genislet(int ekBoyut)
{
    int*yeniSayilar=new int[m_boyut+ekBoyut];
    for(int i=0;i<m_kullanilan;i++)
        yeniSayilar[i]=sayilar[i];
        delete[] sayilar;
        sayilar=yeniSayilar;
        m_boyut+=ekBoyut;
}