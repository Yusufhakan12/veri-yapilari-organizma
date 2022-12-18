#ifndef organizmaDugum_hpp
#define organizmaDugum_hpp
#include"sistemDugum.hpp"
class organizmaDugum
{
public:
    organizmaDugum(sistemDugum*sistem);
    int veri;
    organizmaDugum*sonraki;
    sistemDugum*sistem;
    
   
};

#endif