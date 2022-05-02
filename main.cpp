#include<iostream>
#include<string>
#include <sstream>
#include<vector>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual * execute(Individual* indPtr, Mutator * mPtr, int k){
    return mPtr->mutate(indPtr, k);
}

int main()
{
    string output_vect1 = ""; 
    string output_vect2 = ""; 
    int output_vect3 = 0;

    string string_inputs = "";
    getline(cin, string_inputs);

    vector<string>output_vect;
    istringstream iss(string_inputs);
    for (string s; iss >> s;)
    {
        output_vect.push_back(s);
    }

    Individual * individual1 = new Individual(output_vect[0]);
    Individual * individual2 = new Individual(output_vect[2]);
    
    BitFlip * bitFlip1 = new BitFlip();
    output_vect1 = bitFlip1->mutate(individual1,stoi(output_vect[1]))->getString();
    
    Rearrange * rearrange1 = new Rearrange();
    output_vect2 = rearrange1->mutate(individual2,stoi(output_vect[3]))->getString();
    
    Individual * individual_for_max_ones = new Individual(output_vect2);
    output_vect3 = individual_for_max_ones->getMaxOnes();

    cout<< output_vect1 << " " << output_vect2 << " " <<output_vect3<<endl;

    return 0;
}

