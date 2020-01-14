/**
 * @author Paweł Lech
 */
#include "AnimalFactory.h"

AnimalFactory::AnimalFactory()
{

}

Animal * AnimalFactory::createAnimal(AnimalModel *animal_model){
    if (animal_model->type == PREDATOR)
        return new Predator(animal_model);
    else
        return new Herbivore(animal_model);
}
