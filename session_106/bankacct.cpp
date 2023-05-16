#include "bankacct.h"

#define SUCCESS 1
#define FAILED 0

BankAccount::BankAccount(double _balance, int _id)
{
    this->_balance = _balance;
    this->_id = _id;
}
int BankAccount::withdraw(double amount)
{
    if (amount <= this->_balance) {

        this->_balance -= amount;
        return SUCCESS;
    } else {

        return FAILED;
    }
}

int BankAccount::deposit(double amount)
{
    if(amount < 0){
        return FAILED;
    }else{
    
        this->_balance += amount;
        return SUCCESS;
    }
    
}
int BankAccount::transferTo( BankAccount & toAccount, double amount)
{
    if(amount <= 0){
        return FAILED;
    } else {
        
        int response = this->withdraw(amount);
        if (response == SUCCESS) {

            return toAccount.deposit(amount);
        } else {

            return FAILED;
        }
    }
}

bool BankAccount::richerThan ( BankAccount anotherBankAcct) {
    if (this->_balance > anotherBankAcct._balance) {
        return true;
    } else{
        return false;
    }
}

BankAccount::~BankAccount() {
    // TODO

}

int main () {

    BankAccount ba1( 1500.50, 1234);
    BankAccount ba2( 500.50, 1235);

    cout << ba1.richerThan(ba2) << endl;

}