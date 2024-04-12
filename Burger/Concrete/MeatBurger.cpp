#include "../Abstract/Burger.hpp"

class MeatBurger : public BurgerClass 
{
    private:
        void Patties() override
        {
            cout << "Meat patty has been added" << endl;
        }

        void Buns() override
        {
            cout << "Meat buns has been added" << endl;
        }
};