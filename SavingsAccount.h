#ifndef POLYMORPHISM_SAVINGSACCOUNT_H
#define POLYMORPHISM_SAVINGSACCOUNT_H
#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    int interest_rate;
public:
    SavingsAccount(double balance, int interest_rate);
    int get_interest_rate() const;
    virtual string print_info() const;
};

#endif //POLYMORPHISM_SAVINGSACCOUNT_H
