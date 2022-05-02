#ifndef BITFLIP_H
#define BITFLIP_H
#include "mutator.h"
#include "individual.h"
class BitFlip : public Mutator{
    public:
    BitFlip();
    Individual * mutate(Individual *, int);
};
#endif // !BITFLIP_H