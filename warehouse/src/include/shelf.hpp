#pragma once
#include <array>
#include "Pallet.hpp"
#include "IContainer.hpp"

class Shelf : public IContainer //inherit public functies van IContainer
{
    public:
        std::array<Pallet, 4> pallets;
        Shelf(); //default constructor
        bool swapPallet(int slot, int slot2);

        bool isEmpty() override;
        bool isFull() override;
};