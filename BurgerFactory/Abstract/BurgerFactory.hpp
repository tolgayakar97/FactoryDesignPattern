#ifndef BURGER_FACTORY_H
#define BURGER_FACTORY_H

#include "../../Burger/Abstract/Burger.hpp"

class BurgerFactoryClass
{
    protected:
        BurgerClass* burger = nullptr;
        
    public:
        virtual BurgerClass* TakeOrder() = 0;
        
        BurgerClass* DeliverBurger()
        {
            if(burger != nullptr)
            {
                return burger;
            }
            else
            {
                cout << "Order has not been taken yet. TakeOrder method is being called." << endl;
                return TakeOrder();
            }
        }     
};

#endif