//
// Created by Samay Magecha on 21/02/2023.
//

#ifndef SRC_BANKACCOUNT_H
#define SRC_BANKACCOUNT_H
#define MINIMUM_FEE 50
#define MAX_QUICK_WITHDRAWAL 10000

class BankAccount {
private:
    double balance;
    double deposit;
private:
    double getDeposit() const;
    void setDeposit(double d);

public:
    BankAccount();

public:
    double getBalance() const;
    void setBalance(double val);
public:
    void withdraw_balance(double val);
    void deposit_balance(double val);
};


#endif //SRC_BANKACCOUNT_H
