#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingsAccount.h"

int main() {
    int arr_size = 3;
    BankAccount* arr_pointer[arr_size];

    arr_pointer[0] = new BankAccount(800.58);
    arr_pointer[1] =  new SavingsAccount(700.58, 10);
    arr_pointer[2] = new CheckingsAccount(500.39, "Noah");

    for (int i = 0; i < arr_size; i++) {
        cout << arr_pointer[i]->print_info() << endl;
    }

    for (int i = 0; i < arr_size; i++) {
        delete arr_pointer[i];
    }

    return 0;
}
