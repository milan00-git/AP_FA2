#pragma once
#include <string>

class Pallet
{
    private:
        int itemCount;
        std::string itemName;
        int itemCapacity;
    
    public:
        //constructor
        Pallet (std::string itemName, int itemCapacity, int itemCount);
        Pallet();

        std::string getitemName();
        int getitemCount();
        int getRemainingSpace();
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
};