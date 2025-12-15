#ifndef PERSONALACCOUNT_H
#define PERSONALACCOUNT_H

#include "Account.h"
#include <string>
using namespace std;

class PersonalAccount : public Account
{
private:
    string nationalID;

public:
    PersonalAccount(int id, double bal, string nID);
    double withdraw(double amount);
    ~PersonalAccount();
};

#endif
