#include <iostream>
#include "CreditLimits.h"
using namespace std;

CreditLimits::CreditLimits(int accountNumber, double balance, double totalCharges, double totalCredits, double creditLimit) :
    m_accountNumber(accountNumber), m_balance(balance), m_totalCharges(totalCharges), m_totalCredits(totalCredits), m_creditLimit(creditLimit) {

}

double CreditLimits::askBalance() {
    double balance = 0.00;

    cout << "Enter beginning balance: " << endl;
    cin >> balance;

    return balance;
}

int CreditLimits::askAccountNumber() {
    int accountNumber = 0;

    cout << "Enter account number for (or -1 to quite): " << endl;
    cin >> accountNumber;

    return accountNumber;
}

double CreditLimits::askCreditLimit() {
    double creditLimit = 0.00;

    cout << "Enter credit limit: " << endl;
    cin >> creditLimit;

    return creditLimit;
}

double CreditLimits::askTotalCredits() {
    double totalCredits = 0.00;

    cout << "Enter total credits: " << endl;
    cin >> totalCredits;

    return totalCredits;
}

double CreditLimits::askTotalCharges() {
    double totalCharges = 0.00;

    cout << "Enter total charges: " << endl;
    cin >> totalCharges;

    return totalCharges;
}

double CreditLimits::calculate() {
    return m_balance + m_totalCharges - m_totalCredits;
}

bool CreditLimits::isOverLimit() {
    if(calculate() > m_creditLimit) {
        return true;
    }
    return false;
}

void CreditLimits::print() {

    double newBalance = calculate();

    cout << "New balance is:\t" << newBalance
        << "\nAccount:\t" << m_accountNumber
        << "\nCredit limit:\t" << m_creditLimit
        << "\nBalance:\t" << newBalance << endl;

    isOverLimit() ? cout << "\nExceeded credit limit." : cout << "\nDid not exceed credit limit.";
}
