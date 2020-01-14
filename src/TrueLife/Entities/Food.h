/**
 * @author Paweł Lech
 */
#ifndef FOOD_H
#define FOOD_H

class Food
{
public:
    Food(int cal): calories(cal) {}
    virtual void beEeaten();
    int getCalories() {return calories;}
protected:
    int calories;
};

#endif // FOOD_H
