#pragma once 

//abstract class
class IContainer 
{
    public:
        virtual bool isEmpty() = 0; 
        virtual bool isFull() = 0;
};