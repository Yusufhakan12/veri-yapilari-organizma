#ifndef organ_hpp
#define organ_hpp
#include"Hucre.hpp"
#include"Doku.hpp"
#include"agacDugum.hpp"
 class organ
 {


 public:
   agacDugum*kok;
   void ekle(DokuDugum*a,agacDugum*aktif); 
   DokuDugum* postOrder(agacDugum*aktif);
   organ();
   ~organ();
   
  
 };
 
 
 

#endif