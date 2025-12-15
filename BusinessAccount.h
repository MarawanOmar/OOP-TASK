#ifndef BUSINESSACCOUNT_H
#define BUSINESSACCOUNT_H

#include "Account.h"
#include <string>
using namespace std;

class BusinessAccount : public Account
{
private:
    string businessName;

public:
    BusinessAccount(int id, double bal, string name);
    double withdraw(double amount);
    ~BusinessAccount();
};

#endif
