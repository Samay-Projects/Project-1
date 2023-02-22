//
// Created by Samay Magecha on 21/02/2023.
//

#ifndef SRC_BANKACCOUNT_H
#define SRC_BANKACCOUNT_H
#define MINIMUM_FEE 50
#define MAX_QUICK_WITHDRAWAL 10000
#define MAX_BALANCE 5000000

class BankAccount {
private:
    double balance;
    double deposit;
public:
    BankAccount();
private:
    double getDeposit() const;
    void setDeposit(double d);
private:
    double getBalance() const;
private:
    void setBalance(double val);
public:
    void withdraw_funds(double val);
    void deposit_funds(double val);
    double check_balance();
};


#endif //SRC_BANKACCOUNT_H
