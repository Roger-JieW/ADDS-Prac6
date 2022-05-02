#include<iostream>
#include<string>
#include "BitFlipProb.h"
#include "Individual.h"

using namespace std;

BitFlipProb :: BitFlipProb(double p){
    this->prob = p;
};

Individual * BitFlipProb :: mutate(Individual * person, int k){

    Individual * offspring = person;
    srand( (unsigned)time( NULL ) );
    for(int i = 0; i < offspring->getString().length(); i++)
    {
        double eachProb = (double) rand()/RAND_MAX;
        if(eachProb <= prob)
        {
            offspring->flipBit(i);
        }
        
    }
   
    return offspring;
}
