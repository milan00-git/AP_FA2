#include <iostream>
#include "src/include/pallet.hpp"
#include "src/include/shelf.hpp"
#include "src/include/employee.hpp"
#include "src/include/warehouse.hpp"
#include <string>
#include <array>

int main(void){

    // intances van pallets
    //(item count, string name, item capacity)
    Pallet p1 = Pallet(10, "appel", 10);
    Pallet p2 = Pallet(0, "brood", 10);
    Pallet p3 = Pallet(0, "melk", 5);
    Pallet p4 = Pallet(0, "kaas", 8);

    Pallet p5 = Pallet(11, "banaan", 8);
    Pallet p6 = Pallet(7, "cola", 9);
    Pallet p7 = Pallet(6, "sinasappel", 10);

    //shelf aanmaken
    Shelf warehouse_shelf = Shelf();
    Shelf warehouse_shelf_2 = Shelf();

    warehouse_shelf.pallets = {p1, p2, p3, p4}; //zet pallets in warehouse_shelf
    warehouse_shelf_2.pallets = {p5, p6, p7}; //zet pallets in warehouse_shelf 2
    
    //warehouse aanmaken
    Warehouse warehouse_1 = Warehouse();

    //employees aanmaken
    Employee employee_1 = Employee("henk", true);
    Employee employee_2 = Employee("maurice", false);
    Employee employee_3 = Employee("jaap", true);

    //employees toevoegen aan warehouse
    warehouse_1.addEmployee(employee_1);
    warehouse_1.addEmployee(employee_2);
    warehouse_1.addEmployee(employee_3);

    //warehouse_shelf toevoegen aan warehouse
    warehouse_1.addShelf(warehouse_shelf);
    warehouse_1.addShelf(warehouse_shelf_2);

    std::cout << warehouse_1.pickItems("appel", 11);

    /*pickitems test*/
    // if ()
    // /*
    // shelf test:
    // Als een shelf leeg is, zitten er 4 pallets op die een itemcount van 0 hebben. 
    // De shelf is vol wanneer alle pallets vol zijn.
    // */

    // //swapped pallets in shelf
    // // voor de swap
    //     for (auto& pallet : shelf.pallets) {
    //         std::cout << pallet.getItemName() << std::endl;
    //         }
    //     shelf.swapPallet(0, 1); //swap pallet p1 met p2

    //     for (auto& pallet : shelf.pallets) {
    //         std::cout << pallet.getItemName() << std::endl;
    // }

    // for (auto& pallet : shelf.pallets) { //loop over elke pallet in shelf
    //     //kijk of shelf leeg is, of vol zit
    //     if (pallet.isEmpty() == false) {
    //         std::cout << pallet.isEmpty() << " " << "er zitten een paar items in een van de pallets in shelf " << std::endl; 
                
    //     }

    //     else if (pallet.isEmpty() == true) {
    //         std::cout << pallet.isEmpty() << " " << "shelf is leeg" << std::endl;
    //     }
        
    //     else if (pallet.isFull() == true){
    //         std::cout << pallet.isEmpty() << " " << "shelf zit vol" << std::endl;
    //     }
    // }
    // Employee warehouse_boy = {"Dan", true};

    return 0; 

}