#include <array>
#include "include/shelf.hpp"
#include "include/pallet.hpp"

//default constructor gedefinieerd
Shelf::Shelf() 
{}

bool Shelf::swapPallet(int slot, int slot2) {
    //check of index out of range is voor zowel slot 1 als 2, dit doet hij door te kijken naar de lengte van de array pallets 
    //en door te kijken of de index niet onder de 0 is (voor negatieve indexing out of range). 
    if (slot < 0 || slot >= pallets.size() || slot2 < 0 || slot2 >= pallets.size()) { 
        return false; //pallets zijn niet geswapped, output is 0
    }

    else {
        std::swap(pallets[slot], pallets[slot2]); //swap de pallets
        return true; //pallets zijn geswapped, output is 1
    }
}

bool Shelf::isEmpty() {
    //wanneer is een shelf leeg?
    for (auto& pallet : pallets) { //loopen over pallets in de array pallets
        if ((pallet.getitemCount()) != 0) { //als de pallets wel items bevat return false
            return false;
        }
    }
    return true; //pallets bevatten geen items en is dus leeg
}

bool Shelf::isFull() {
    //wanneer is een shelf vol?
    for (auto& pallet : pallets) { //reference om direct in pallets array te loopen over pallets
        if (pallet.getRemainingSpace() == 0) { //er is geen ruimte meer over, shelf is vol
            return true;
        }
        
    }
    return false; //shelf is niet vol
}