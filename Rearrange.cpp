#include<iostream>
#include <string>
#include "Rearrange.h"
#include "Individual.h"

using namespace std;

Rearrange :: Rearrange(){};

Individual * Rearrange :: mutate(Individual * person, int k){
    Individual * offspring = person;
    int index = k % offspring->getString().length() -1;
    string tail = offspring->getString().substr(index);
    string head = offspring->getString().erase(index);
    Individual * newOffSpring = new Individual(tail + head);
    //cout<<"inside function "<<newOffSpring->getString()<<endl;
    return newOffSpring;
}