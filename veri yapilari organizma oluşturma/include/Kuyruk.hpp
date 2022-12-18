#ifndef Kuyruk_hpp
#define Kuyruk_hpp
#include<iostream>
#include "Hucre.hpp"
using namespace std;

class Kuyruk
{
public:
	Kuyruk();
	~Kuyruk();
	void ekle(int veri);
	void cikar();
    bool bosmu();
	int getir();
	int elemanSayisiGetir();
	Hucre* 	ilk;
	Hucre*	son;
	int elemanSayisi;

    friend ostream& operator<<(ostream& os,Kuyruk& kuyruk);
private:
	
    int kapasite;
};

#endif