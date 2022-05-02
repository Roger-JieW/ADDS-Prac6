#ifndef MUTATOR_H
#define MUTATOR_H
#include "individual.h"

class Mutator{

    public:
    virtual Individual * mutate(Individual *, int) = 0;

};
#endif // !MUTATOR_H