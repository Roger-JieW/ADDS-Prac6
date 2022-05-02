    // Individual(int);
    // Individual(string);
    // string getString();
    // int getBit(int);
    // void flipBit(int); 
    // int getMaxOnes();
    // int getLength();
#include<iostream>
#include<string>
#include "Individual.h"

using namespace std;


Individual :: Individual(int n){
    string x = "";
    for(int i = 0; i<n; i++)
    {
        x+='0';
    }
    this->binaryString = x;
}
Individual::Individual(string str){

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != '0' && str[i] != '1')
        {
            cout<<"This input is illegal..."<<endl;
            exit(1);
        }
    }
    this->binaryString = str;
}

int Individual:: getBit(int pos){

    if(pos > binaryString.length() - 1)
    {
        return -1;
    }

    if(binaryString[pos] == '0')
    {
        return 0;

    }else{
        return 1;
    }

}


void Individual:: flipBit(int pos){
    if(binaryString[pos] == '0')
    {
        binaryString[pos] = '1';
    }else if(binaryString[pos] == '1')
    {
        binaryString[pos] = '0';
    }
}
int Individual:: getLength(){

    return binaryString.length();
}


int Individual::getMaxOnes(){    // 100111011111

    int countMax = 0; int countOnes = 0;

    for(int i = 0; i<binaryString.length(); i++)
    {
        if(binaryString[i] == '1')
        {
            countOnes++;
        }else if (binaryString[i] == '0')
        {
            if(countOnes > countMax)
            {
                countMax = countOnes;
            }
            countOnes = 0;
        }
    }
            if(countOnes > countMax)
            {
                countMax = countOnes;
            }

    return countMax;
}





string Individual :: getString(){
    return binaryString;
}