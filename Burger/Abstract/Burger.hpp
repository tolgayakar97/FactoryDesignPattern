#ifndef BURGER_H
#define BURGER_H

#include <iostream>

using namespace std;

class BurgerClass
{
    public:
        virtual void Patties() = 0;
        virtual void Buns() = 0;
        
        void OtherIngredients()
        {
            cout << "Other ingredients have been added!" << endl;
        }
};

#endif