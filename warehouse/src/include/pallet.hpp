#pragma once
#include <string>
#include "IContainer.hpp"

class Pallet : public IContainer //inherit public functies van IContainer
{
    private:
        int itemCount;
        std::string itemName;
        int itemCapacity;
    
    public:
        //constructor
        Pallet(int itemCount, std::string itemName, int itemCapacity); //constructor reordered 
        Pallet();

        std::string getitemName();
        int getitemCount();
        int getRemainingSpace();
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();

        bool isEmpty() override;
        bool isFull() override;
};