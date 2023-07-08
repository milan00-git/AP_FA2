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
    /* Functie sorteert pallets in shelf oplopend van volgorde itemcount 
    1. sorteer de pallets op een shelf op volgorde itemcount, gebruik swappallets functie voor sorteren
    2. functie kan slagen als een employee een forkliftcertificate heeft
    */ 
   for (int i = 0; i < itemCount; )
   
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