#include "CheckingsAccount.h"

CheckingsAccount::CheckingsAccount(double balance, string account_owner) : BankAccount(balance) {
    this->account_owner = account_owner;
}

string CheckingsAccount::get_account_owner() const {
    return this->account_owner;
}

string CheckingsAccount::print_info() const {
    return BankAccount::print_info() + " " + get_account_owner();
}
