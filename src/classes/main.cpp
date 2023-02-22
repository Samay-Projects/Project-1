#include <iostream>
#include <string>
#include "BankAccount/BankAccount.h"
using namespace std;



int main() {
    auto *currentAccount = new BankAccount();
    bool bankAccountOpen = true;
    int inputVal;
    string instr;
    while(bankAccountOpen){
        cout << "What would you like to do?" << endl
        << "1. Withdraw Funds" << endl
        << "2. Deposit Funds" << endl
        << "3. Check Balance" << endl
        << "4. Sign Out" << endl;
        try {
            cin >> inputVal;
            if (inputVal < 1 || inputVal > 4){
                cout << "Invalid Selection (please type the number of the action you wish to take)" << endl;
            }
        } catch (exception &e) {
            cout << "Invalid Selection (please type the number of the action you wish to take)" << endl;
            continue;
        }
        try {
            switch (inputVal) {
                case (1):
                    cout << "Please enter how much you would like to withdraw or type BACK" << endl;
                    cin >> instr;
                    if (instr == "BACK")
                        break;
                    currentAccount->withdraw_funds(stod(instr));
                    break;
                case (2):
                    cout << "Please enter how much you would like to deposit or type BACK" << endl;
                    cin >> instr;
                    if (instr == "BACK")
                        break;
                    currentAccount->deposit_funds(stod(instr));
                    break;
                case (3):
                    cout << "Type BACK once you are done" << endl;
                    currentAccount->check_balance();
                    cin >> instr;
                    while (instr != "BACK"){
                        cin >> instr;
                        if (instr == "BACK")
                            break;
                    }
                    break;
                case (4):
                    bankAccountOpen = false;
                    cout << "Signed Out";
                    break;
                default:
                    break;
            }
        } catch (exception &e) {
            cout << "ERROR: Invalid Input" << endl;
        }
    }
    return 0;
}
