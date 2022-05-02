#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"
#include "Individual.h"
class Rearrange : public Mutator{
    public:
    Rearrange();
    Individual * mutate(Individual *, int);
};
#endif // !REARRANGE_H