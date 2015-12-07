#ifndef CREDITLIMITS_H
#define CREDITLIMITS_H

class CreditLimits {
    int m_accountNumber;
    double m_balance;
    double m_totalCharges;
    double m_totalCredits;
    double m_creditLimit;

public:
    CreditLimits(int accountNumber, double balance, double totalCharges, double totalCredits, double creditLimit);
    static int askAccountNumber();
    static double askBalance();
    static double askTotalCharges();
    static double askTotalCredits();
    static double askCreditLimit();
    void print();
    double calculate();
    bool isOverLimit();
};

#endif
