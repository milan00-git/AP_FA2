#include <iostream>
#include "src/include/pallet.hpp"
#include "src/include/shelf.hpp"
#include "src/include/employee.hpp"
#include <string>
#include <array>

int main(void){

    Shelf shelf; //maakt een instance van de shelf class om nieuw object aan te maken 'shelf'

    // intances van pallets
    //(item count, string name, item capacity)
    Pallet p1 = Pallet(0, "appel", 10);
    Pallet p2 = Pallet(0, "brood", 10);
    Pallet p3 = Pallet(0, "melk", 5);
    Pallet p4 = Pallet(0, "kaas", 8);

    shelf.pallets = {p1, p2, p3, p4}; //zet test pallets in array

    /*pickitems test*/

    /*
    shelf test:
    Als een shelf leeg is, zitten er 4 pallets op die een itemcount van 0 hebben. 
    De shelf is vol wanneer alle pallets vol zijn.
    */

    //swapped pallets in shelf
    // voor de swap
        for (auto& pallet : shelf.pallets) {
            std::cout << pallet.getitemName() << std::endl;
            }
        shelf.swapPallet(0, 1); //swap pallet p1 met p2

        for (auto& pallet : shelf.pallets) {
            std::cout << pallet.getitemName();
    }

    for (auto& pallet : shelf.pallets) { //loop over elke pallet in shelf
        //kijk of shelf leeg is, of vol zit
        if (pallet.isEmpty() == false) {
            std::cout << pallet.isEmpty() << " " << "er zitten een paar items in een van de pallets in shelf " << std::endl; 
                
        }

        else if (pallet.isEmpty() == true) {
            std::cout << pallet.isEmpty() << " " << "shelf is leeg" << std::endl;
        }
        
        else if (pallet.isFull() == true){
            std::cout << pallet.isEmpty() << " " << "shelf zit vol" << std::endl;
        }
    }
    // Employee warehouse_boy = {"Dan", true};

    return 0; 

}