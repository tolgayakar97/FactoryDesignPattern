#include "../Abstract/Burger.hpp"

class VeganBurger : public BurgerClass
{
    private:
        void Patties() override
        {
            cout << "Vegan patty has been added" << endl;
        }

        void Buns() override
        {
            cout << "Vegan buns has been added" << endl;
        }
};