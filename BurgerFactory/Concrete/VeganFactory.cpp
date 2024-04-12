#include "../Abstract/BurgerFactory.hpp"
#include "../../Burger/Concrete/VeganBurger.cpp"

class VeganFactory : public BurgerFactoryClass
{
    public:
        BurgerClass* TakeOrder() override
        {
            cout << "VeganBurger has ordered!" << endl;
            return new VeganBurger();
        };
};