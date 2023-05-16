#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

class BankAccount {

    private:
        double _balance; // balance of bank account
        int _id; // bank account id

    public:
        BankAccount(double _balance, int _id);
        int withdraw(double amount);
        int deposit(double amount);
        int transferTo( BankAccount & toAccount, double amount);
        bool richerThan ( BankAccount anotherBankAcct);
        ~ BankAccount();

};

#endif

