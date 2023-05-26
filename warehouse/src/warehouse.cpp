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

// bool Warehouse::rearrangeShelf(Shelf& shelf) {
//     //gebruik swap pallets maar dan voor shelves
//     if (shelf < 0 || shelf >= Shelves.size() || slot2 < 0 || slot2 >= pallets.size()) { 
//         return false; //pallets zijn niet geswapped, output is 0
//     }

//     else {
//         std::swap(pallets[slot], pallets[slot2]); //swap de pallets
//         return true; //pallets zijn geswapped, output is 1
//     }
// }

// bool Warehouse::pickItems(std::string itemName, int itemCount) {
// //haal items uit shelf (zitten in pallet)
//     for(auto& pallet : Shelves) {
//         if ()
//     }

// }