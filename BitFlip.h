#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
#include "Individual.h"
class BitFlip : public Mutator{
    public:
    BitFlip();
    Individual * mutate(Individual *, int);
};
#endif // !BITFLIP_H