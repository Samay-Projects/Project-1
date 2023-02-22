//
// Created by Samay Magecha on 21/02/2023.
//
#include <iostream>
#include <iomanip>
#include <string>
#include "BankAccount.h"
#include "../Manipulation/stringmanipulation/StringManipulation.h"
using namespace std;

BankAccount::BankAccount() {
    balance = 0;
    deposit = 0;
    auto* strman = new StringManipulation();
    string tempstr;
    cout << "Minimum Deposit = £" << MINIMUM_FEE << endl << "Maximum Balance = £" << MAX_BALANCE << endl;
        while(getDeposit() < MINIMUM_FEE || getDeposit() > MAX_BALANCE){
            cout << "Please enter your deposit!" << endl;
            cin >> tempstr;
            strman->setStr(tempstr);
            if (!strman->isOnlyDouble())
                cout << "Your entry is invalid" << endl;
            else if (stod(tempstr) < MINIMUM_FEE)
                cout << "Your deposit is too small, please try again!" << endl;
            else if (stod(tempstr) > MAX_BALANCE)
                cout << "Your deposit exceeds the maximum allowed balance (£" << MAX_BALANCE << ")" << endl;
            else
                setDeposit(stod(tempstr));
        }
    setBalance(getDeposit());
    setDeposit(0);
    cout << "Your account is now open with a balance of £"<< fixed << setprecision(2) << getBalance() << "!" << endl;
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

void BankAccount::withdraw_funds(double val) {
    if (val > MAX_QUICK_WITHDRAWAL){
        cout << "You are attempting to draw more than you are allowed to withdraw in one transaction." << endl;
    } else if (getBalance() < val) {
        cout << "You have insufficient funds for this withdrawal." << endl;
    } else {
        setBalance(getBalance() - val);
        cout << "You've successfully withdrawn £" << val << ". You have a total of £" << getBalance() << " remaining." << endl;
    }
}

void BankAccount::deposit_funds(double val) {
    if (getBalance() + val > MAX_BALANCE){
        cout << "The amount of money you are attempting to store exceeds the amount you are allowed." << endl;
    } else {
        setBalance(getBalance() + val);
        cout << "You've successfully deposited £" << val << ", You have a total of £" << getBalance() << "remaining" << endl;
    }
}

double BankAccount::check_balance() {
    cout << "Your balance is £" << getBalance() << endl;
    return getBalance();
}

string BankAccount::getBalanceAsString() {
    return to_string(getBalance());
}


