#ifndef PRIME_H
#define PRIME_H
#include<iostream>
using namespace std;

class Prime
{
private:
    unsigned long long value;
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
};
#endif