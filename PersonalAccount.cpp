#include "PersonalAccount.h"
#include <iostream>
using namespace std;

PersonalAccount::PersonalAccount(int id, double bal, string nID)
    : Account(id, bal)
{
}

double PersonalAccount::withdraw(double amount)
{
    return 0.0;
}

PersonalAccount::~PersonalAccount()
{

}
