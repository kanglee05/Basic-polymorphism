#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, int interest_rate) : BankAccount(balance) {
    this->interest_rate = interest_rate;
}

int SavingsAccount::get_interest_rate() const {
    return this->interest_rate;
}

string SavingsAccount::print_info() const {
    return BankAccount::print_info() + " " + to_string(get_interest_rate());
}