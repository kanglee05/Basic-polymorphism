#include "BankAccount.h"

BankAccount::BankAccount(double balance) {
    this->balance = balance;
}

double BankAccount::get_balance() const {
    return this->balance;
}

string BankAccount::print_info() const {
    return to_string(get_balance());
}