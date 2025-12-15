#include "BusinessAccount.h"
#include <iostream>
using namespace std;

BusinessAccount::BusinessAccount(int id, double bal, string name)
    : Account(id, bal)
{
}

double BusinessAccount::withdraw(double amount)
{
    return 0.0;
}

BusinessAccount::~BusinessAccount()
{

}
