#include <iostream>
#include "src/include/pallet.hpp"
#include <string>

int main(void){
    Pallet p = Pallet("brood", 0, 0);
    std::cout << p.reallocateEmptyPallet("electronica", 5);
}
