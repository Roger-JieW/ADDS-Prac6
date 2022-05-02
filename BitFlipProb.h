#ifndef BITFLIPPROB
#define BITFLIPPROB
#include "mutator.h"
#include "individual.h"
class BitFlipProb : public Mutator{
    public:
    double prob;
    BitFlipProb(double);
    Individual * mutate(Individual *, int);
};
#endif // !BITFLIPPROB