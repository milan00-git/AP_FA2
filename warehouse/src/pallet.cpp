#include <iostream>
#include "include/pallet.hpp"
#include <string>

//constructor
Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount) :
    itemName(itemName), //verwijzing naar item name, return item name
    itemCapacity(itemCapacity),
    itemCount(itemCount)
{}

std::string Pallet::getitemName() {
    return itemName;
}

int Pallet::getitemCount() {
    return itemCount;
}

int Pallet::getRemainingSpace() { 
    return itemCapacity - itemCount; //kijk voor de overgebleven ruimte in een pallet als het nog niet vol zit
}

bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity) {
    if (itemCapacity == 0) { //als er geen items in een pallet inzitten, verander de naam om het te hergebruiken voor andere items
        itemName = getitemName(); //verander de item name met een andere item name
        return true;                     
    }
    else {
        return false;
    }
}

bool Pallet::takeOne() {
    if (itemCount != 0) { //als er nog items beschikbaar zijn kan je er er een pakken
        itemCount--;
        return true; 
    }
    else {
        return false; //er zijn geen items meer beschikbaar
    }
}

bool Pallet::putOne() {
    if (itemCount < itemCapacity) { 
        itemCount++; //doe er een item bij wanneer de itemcapacity niet vol zit
        return true;
    }
    else {
        return false; //itemCapacity zit vol, er kunnen geen items meer bij
    }
    
}

bool Pallet::isEmpty() {
    return itemCount == 0; //het is leeg wanneer er geen items meer in zitten
}

bool Pallet::isFull() {
    return getRemainingSpace() == 0; //het is vol wanneer er geen 'rmaining space' meer is
}