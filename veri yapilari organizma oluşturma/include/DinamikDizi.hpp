#ifndef DinamikDizi_hpp
#define DinamikDizi_hpp

class DinamikDizi
{public:
    DinamikDizi();
    ~DinamikDizi();
    int boyut();
    int kullanilan();
    void sonaEkle(int sayi);
    void genislet(int ekBoyut);
    int m_boyut;
    int m_kullanilan;
    int*sayilar;
};

#endif