#ifndef REARRANGE_H
#define REARRANGE_H
#include "mutator.h"
#include "individual.h"
class Rearrange : public Mutator{
    public:
    Rearrange();
    Individual * mutate(Individual *, int);
};
#endif // !REARRANGE_H