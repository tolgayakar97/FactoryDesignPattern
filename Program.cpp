#include "BurgerFactory/Concrete/VeganFactory.cpp"
#include "BurgerFactory/Concrete/MeatFactory.cpp"
#include <iostream>

int main()
{
     BurgerFactoryClass* meatBurger = new MeatFactory();

     meatBurger->TakeOrder();
     meatBurger->DeliverBurger();

     BurgerFactoryClass* veganBurger = new VeganFactory();

     veganBurger->DeliverBurger();

     delete meatBurger;
     delete veganBurger;

     return 0;
}

