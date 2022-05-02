#include<iostream>
#include<string>
#include "BitFlip.h"
#include "Individual.h"

using namespace std;

BitFlip:: BitFlip(){};

Individual * BitFlip:: mutate(Individual* person, int k){

    Individual * temp = person;

    if(k<=temp->getString().length())
    {
        temp->flipBit(k-1);
    }else{
        int index = k % temp->getString().length() -1;
        temp->flipBit(index);
    }
    return temp;
}