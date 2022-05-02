#ifndef BITFLIPPROB
#define BITFLIPPROB
#include "Mutator.h"
#include "Individual.h"
class BitFlipProb : public Mutator{
    public:
    double prob;
    BitFlipProb(double);
    Individual * mutate(Individual *, int);
};
#endif // !BITFLIPPROB