//
// Created by Samay Magecha on 21/02/2023.
//
#include <iostream>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount() {
    balance = 0;
    deposit = 0;
    cout << "Please enter your deposit! (min: £" << MINIMUM_FEE << ")" << endl;
    double tempFee;
    cin >> tempFee;
    setDeposit(tempFee);
    while(getDeposit() < MINIMUM_FEE){
        cout << "Your deposit is too small, please try again!" << endl;
        cin >> tempFee;
        setDeposit(tempFee);
    }
    setBalance(getDeposit());
    setDeposit(0);
    cout << "Your account is now open with a balance of £"<< getBalance() << "!" << endl;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setBalance(double b) {
    balance = b;
}

double BankAccount::getDeposit() const {
    return deposit;
}

void BankAccount::setDeposit(double d) {
    BankAccount::deposit = d;
}

void BankAccount::withdraw_balance(double val) {
    double currentBal = getBalance();
}

void BankAccount::deposit_balance(double val) {

}


