#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include<string>
using namespace std;
class Individual{
    
    string binaryString;

    public:
    Individual(int);
    Individual(string);
    string getString();
    int getBit(int);
    void flipBit(int); 
    int getMaxOnes();
    int getLength();

};

#endif // !INDIVIDUAL_H