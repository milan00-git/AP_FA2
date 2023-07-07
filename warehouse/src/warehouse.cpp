#pragma once
#include <iostream>
#include <vector>
#include "include/employee.hpp"
#include "include/shelf.hpp"
#include "include/warehouse.hpp"
#include "include/pallet.hpp"

// default constructor
Warehouse::Warehouse()
{}

void Warehouse::addEmployee(Employee employee) {
/*voegd employee toe aan vector employees*/
    Employees.push_back(employee);
}

void Warehouse::addShelf(Shelf shelf) {
/*voegd shelf toe aan vector shelves*/
    Shelves.push_back(shelf);
}

bool Warehouse::rearrangeShelf(Shelf& shelf) {
    //gebruik swap pallets maar dan voor shelves
    if (shelf < 0 || shelf >= Shelves.size() || slot2 < 0 || slot2 >= pallets.size()) { 
        return false; //pallets zijn niet geswapped, output is 0
    }

    else {
        std::swap(pallets[slot], pallets[slot2]); //swap de pallets
        return true; //pallets zijn geswapped, output is 1
    }
}

bool Warehouse::pickItems(std::string itemName, int itemCount) {
//haal items uit shelf (zitten in pallet)

    int num = 0; //houd bij hoeveel items uit de pallet zijn gehaald

    //kijk voor een shelf in shelves
    for(auto& shelf : Shelves) {

        //kijk voor pallet in shelfs
        for(auto& pallet : shelf.pallets) {
            if (pallet.getItemName() == itemName) { //kijk of de item name beschikbaar is in de shelf
                for (int i = 0; i < itemCount; i++) { // loop over het aantal items van de item name
                    if (!pallet.isEmpty()){ //check of de pallet leeg is of niet, zo niet dan neem een item eruit
                        pallet.takeOne();
                        num++; //update dat er een item uit de shelf is gehaald
                        if (num == itemCount) { //als het aantal items dat we willen hebben verkregen is dan geef true terug
                            return true;
                        }
                    } 
                }      
            }
        }
    }
    return false; // geeft false omdat we niet het aantal items hebben kunnen krijgen dat we willen krijgen
}