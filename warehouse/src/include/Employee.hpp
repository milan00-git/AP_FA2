#pragma once
#include <string>

class Employee
{
    private:
        const std::string name;
        bool busy;
        bool forkliftCertificate;
    
    public:
        Employee(std::string name, bool forkliftCertificate);
        std::string getName();
        bool getBusy();
        void setBusy(bool busy);
        bool getForkliftCertificate();
        void setForkliftCertificate(bool forkliftCertificate);

    //constructor
    Employee(const std::string name, bool busy, bool forkliftCertificate);
};