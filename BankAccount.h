#ifndef POLYMORPHISM_BANKACCOUNT_H
#define POLYMORPHISM_BANKACCOUNT_H
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double balance);
    double get_balance() const;
    virtual string print_info() const;
};

#endif //POLYMORPHISM_BANKACCOUNT_H
