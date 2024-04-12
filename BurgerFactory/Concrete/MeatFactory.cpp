#include "../Abstract/BurgerFactory.hpp"
#include "../../Burger/Concrete/MeatBurger.cpp"

class MeatFactory : public BurgerFactoryClass
{
    public:
        BurgerClass* TakeOrder() override 
        {
            cout << "MeatBurger has ordered!" << endl;
            return new MeatBurger();
        };
};