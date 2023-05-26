#pragma once
#include <string>
#include "include/employee.hpp"


//constructor
Employee::Employee(std::string name, bool forkliftCertificate) :
    name(name),
    forkliftCertificate(forkliftCertificate)
{}

std::string Employee::getName() {
    return name;
}

bool Employee::getBusy() { //busy functie kan getest worden met warehouse
    return busy;
}

void Employee::setBusy(bool busy) {
    this->busy = busy; //setbusy functie zetten op busy (attribute)
}

bool Employee::getForkliftCertificate() {
    return forkliftCertificate;
}

void Employee::setForkliftCertificate(bool forkliftCertificate) {
    this->forkliftCertificate = forkliftCertificate; //forkliftcertificate zetten op attribute
}

