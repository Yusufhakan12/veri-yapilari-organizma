/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/
#include "Radix.hpp"
#include<iomanip>
#include"Kuyruk.hpp"
Radix::Radix(int* sayilar,int adet)
{   kapasite=0;
    this->sayiAdedi = adet;

    this->sayilar = new int[sayiAdedi];

    for(int i=0;i<sayiAdedi;i++)
        this->sayilar[i] = sayilar[i];

    kuyruklar = new Kuyruk*[10];
    for(int i=0;i<10;i++)
        kuyruklar[i] = new Kuyruk();
    
    genislet(adet);
}
Radix::~Radix()
{
    delete[] sayilar;
    for(int i=0;i<10;i++)
        delete kuyruklar[i];
    
    delete [] kuyruklar;

    
}

int *Radix::sirala()
{

    for(int i=0;i<sayiAdedi;i++)
    {
        int sonBasamak = sayilar[i]%10;

        kuyruklar[sonBasamak]->ekle(sayilar[i]);

    }
    int maxBasamakSayisi = maxBasamakSayisiGetir();
    
    
    int basamakCarpani = 10;

    for(int i = 1;i<maxBasamakSayisi;i++ )
    {
        int uzunluklar[10];

        kuyrukUzunluklariGetir(uzunluklar);

        for(int j=0;j<10;j++)
        {
            int es = uzunluklar[j];

            while(es)
            {
                int siradakiSayi = kuyruklar[j]->getir();

                kuyruklar[j]->cikar();
                int basamak = (siradakiSayi/basamakCarpani)%10;
                kuyruklar[basamak]->ekle(siradakiSayi);
                es--;
            }
        }
        basamakCarpani*=10;
    }
    int diziIndex = 0;
    for(int i=0;i<10;i++)
    {
        while(!kuyruklar[i]->bosmu())
        {
            sayilar[diziIndex] = kuyruklar[i]->getir();
            kuyruklar[i]->cikar();
            diziIndex++;
        }
    }
    
    return sayilar;
}

int Radix::maxBasamakSayisiGetir()
{
    int maxBasamakSayisi = basamakSayisiGetir(sayilar[0]);

    for(int i=1;i<sayiAdedi;i++)
    {
        int siradakiBasamakSayisi = basamakSayisiGetir(sayilar[i]);
        if(maxBasamakSayisi<siradakiBasamakSayisi)
            maxBasamakSayisi = siradakiBasamakSayisi;
    }
    return maxBasamakSayisi;
}
int Radix::basamakSayisiGetir(int sayi)
{
    int basamakSayisi = 0;
    while(sayi)
    {
        sayi = sayi/10;
        basamakSayisi++;
    }
    return basamakSayisi;

}

void Radix::genislet(int boyut)
{   Kuyruk*kuyruk=new Kuyruk();
    int *yeniAlan=new int[kapasite+boyut];
    for(int i=0;i<kapasite+boyut;i++)
    {
        yeniAlan[i]=sayilar[i];
    }
    delete[] sayilar;
    sayilar=yeniAlan;
    boyut+=kapasite;
}
void Radix::kuyruklariYazdir()
{
    for(int i=0;i<10;i++)
    {
        cout<<setw(5)<<std::left<<i<<":"<<*kuyruklar[i];
    }
    cout<<"------------------------"<<endl;
}

void Radix::kuyrukUzunluklariGetir(int* uzunluklar)
{
    for(int i=0;i<10;i++)
    {
        uzunluklar[i] = kuyruklar[i]->elemanSayisiGetir();
    } 
}