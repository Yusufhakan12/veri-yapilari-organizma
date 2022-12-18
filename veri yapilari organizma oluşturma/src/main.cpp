/**
* @file B211210053
* @description hücreden organizmaya giderek ekrana bir şekil çıkarmak
* @course veri yapilari 1C
* @assignment 2
* @date Kodu 18.12.2022
* @author yusuf hakan güneş/yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include<iostream>
#include"Yukseklik.hpp"
#include<iomanip>
#include "Radix.hpp"
#include"Hucre.hpp"
#include"Kuyruk.hpp"
#include"fstream"
#include"sstream"
#include"DinamikDizi.hpp"
#include"Doku.hpp"
#include"organ.hpp"
#include"DokuDugum.hpp"
#include"sistemDugum.hpp"
#include"sistem.hpp"
#include"organizma.hpp"
#include"math.h"
#include"BagilAgac.hpp"
using namespace std;
int siradaki;
string line;
 int b=0;
 int x=0;
 int durum=0;
 int mutasyonsayac=0;

int main()
{
    Yukseklik*y=new Yukseklik();

    ifstream Myfile("Veri1.txt");
     organizma*yeniorganizma=new organizma();
    if(Myfile.is_open())
    {   
       
        DokuDugum* dokudizi[20];
        agacDugum*agacDizi[100];
        int say=0;
       
        BagilAgac*bagilagac=new BagilAgac();
        cout<<setw(42)<<"ORGANIZMA"<<endl;
        while (getline(Myfile,line))
        {    
            DinamikDizi*dizi=new DinamikDizi();
            
            stringstream ss(line);
           
             while (ss>>siradaki)
            {  
                say++;
                
                dizi->sonaEkle(siradaki);
  
           
            }  
        Radix *radix = new Radix(dizi->sayilar,say);
        int *siraliSayilar = radix->sirala();
        b++;
      
              
        if(b<=20)
        {  
            Doku*doku=new Doku();
            for(int i=0;i<say;i++)
            {   
            doku->ekle(siraliSayilar[i]);
        
            } 
            for(int i=0;i<say;i++)
            {   
                
                if(i==say/2)
                {  
                    dokudizi[b-1]=doku->ilk;
                }
                doku->ilk=doku->ilk->sonraki;
                
            }

                if(b==20)
                {
               
                  
                 
                organ*agac=new organ(); 
                agac->kok=new agacDugum(dokudizi[0]);
                for(int i=0;i<20;i++)
                {    
                    agac->ekle(dokudizi[i+1],agac->kok);


                }   
                durum=y->yukseklikmax(agac->kok)-y->yukseklikmin(agac->kok);
                if(durum<=2)
                {
                    cout<<" ";
                }
                else if(durum>2)
                cout<<"#";

                
                agacDizi[x]=agac->kok;

                x++;
                if(x==100)
                {
                  
                    sistem*Sistem=new sistem();
                    
                        for(int i=0;i<x;i++)
                        {
                        
                            Sistem->ekle(agacDizi[i]);
                            yeniorganizma->ekle(Sistem->ilk);
                            Sistem->ilk=Sistem->ilk->sonraki;
                        }
                    
                        
                    cout<<endl;
                    
                    x=0;
                }
                b=0;
                }
   
                
        }
        
        say=0;
        }
        
    }           
    else
    {
        cout<<"dosya bulunamadi";
    }
    Myfile.close();
    system("pause");

    system("cls");

     ifstream Myfile1("Veri1.txt");
    if(Myfile1.is_open())
    {   DokuDugum*mutasyonDizi[20];
        DokuDugum* dokudizi[20];
        agacDugum*agacDizi[100];
        int say=0;
        organizma*yeniorganizma=new organizma();
        cout<<setw(52)<<"ORGANIZMA(MUTASYONA UGRADI)"<<endl;
        while (getline(Myfile1,line))
        {    
            DinamikDizi*dizi=new DinamikDizi();
            
            stringstream ss(line);
           
             while (ss>>siradaki)
            {  
                say++;
                
                dizi->sonaEkle(siradaki);
  
           
            }  
        Radix *radix = new Radix(dizi->sayilar,say);
        int *siraliSayilar = radix->sirala();
        b++;
      
             
        
        if(b<=20)
        {  

            Doku*doku=new Doku();
            for(int i=0;i<say;i++)
            {   
            doku->ekle(siraliSayilar[i]);
        
            } 
            for(int i=0;i<say;i++)
            {   
                
                if(i==say/2)
                {  
                
                   dokudizi[b-1]=doku->ilk;
                }
                doku->ilk=doku->ilk->sonraki;
                
            }

                if(b==20)
                {
                
                int sayac=0; 
                organ*agac=new organ(); 
                agac->kok=new agacDugum(dokudizi[0]);
                if(agac->kok->veri%50==0)
                {  
                    mutasyonsayac++;
                    Doku*newDoku=new Doku();
                    DinamikDizi*newDizi=new DinamikDizi();
                    for(int i=0;i<say;i++)
                    {
                        if(siraliSayilar[i]%2==0)
                        {   
                            siraliSayilar[i]=siraliSayilar[i]/2;
                            
                        }

                      newDizi->sonaEkle(siraliSayilar[i]);      
                    }
                    Radix *radix = new Radix(newDizi->sayilar,say);
                    int*yenisirali=radix->sirala();
                    for(int i=0;i<say;i++)
                    {
                        newDoku->ekle(yenisirali[i]);
                    }
                    
                    for(int i=0;i<say;i++)
                    {
                        if(i==say/2)
                        {
                            mutasyonDizi[mutasyonsayac-1]=newDoku->ilk;
                        }
                    }
                    newDoku->ilk=newDoku->ilk->sonraki;

                    if(mutasyonsayac==20)
                    {   
                        
                        organ*mutasyonagac=new organ();
                        mutasyonagac->kok=new agacDugum(mutasyonDizi[0]);
                        for(int i=0;i<20;i++)
                        {   
                            mutasyonagac->ekle(mutasyonDizi[i+1],mutasyonagac->kok);
                            
                        }
                    
                        
                    }


                    
                }
                  
                    for(int i=0;i<20;i++)
                    {    
                        agac->ekle(dokudizi[i+1],agac->kok);
                    } 
                  

                agacDizi[x]=agac->kok;

                x++;
                if(x==100)
                {
                  
                    sistem*Sistem=new sistem();
                    
                        for(int i=0;i<x;i++)
                        {
                            Sistem->ekle(agacDizi[i]);
                        }
                            yeniorganizma->ekle(Sistem->ilk);
                    x=0;
                }
                b=0;
                }
        }
        
        say=0;
        }
    organizmaDugum*gec=yeniorganizma->ilk;
    while (gec!=0)
    {
        for(int i=0;i<100;i++)
        {   durum=y->yukseklikmax(gec->sistem->agac)-y->yukseklikmin(gec->sistem->agac);
            if(durum<=2)
            {
                cout<<" ";
            }
            else
            cout<<"#";
            gec->sistem=gec->sistem->sonraki;
        }
        gec=gec->sonraki;
        cout<<endl;

    }
    
    } 
    
    else
    {
        cout<<"dosya bulunamadi";
    }
    Myfile1.close();
  
}