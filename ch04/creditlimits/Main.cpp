#include "CreditLimits.h"

int main() {

    int accountNumber = 0;

    while(true) {
        accountNumber = CreditLimits::askAccountNumber();
        if(accountNumber == -1) {
            break;
        }

        double balance = CreditLimits::askBalance();
        double totalCharges = CreditLimits::askTotalCharges();
        double totalCredits = CreditLimits::askTotalCredits();
        double creditLimit = CreditLimits::askCreditLimit();

        CreditLimits creditLimits(accountNumber, balance, totalCharges, totalCredits, creditLimit);
        creditLimits.print();
    }
}
