#ifndef POLYMORPHISM_CHECKINGSACCOUNT_H
#define POLYMORPHISM_CHECKINGSACCOUNT_H
#include "BankAccount.h"

class CheckingsAccount : public BankAccount {
private:
    string account_owner;
public:
    CheckingsAccount(double balance, string account_owner);
    string get_account_owner() const;
    virtual string print_info() const;
};

#endif //POLYMORPHISM_CHECKINGSACCOUNT_H
