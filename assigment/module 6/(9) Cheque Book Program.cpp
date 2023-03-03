#include <iostream>
using namespace std;
class Account 
{
protected:
    int accNum;
    string accHolderName;
    float balance;
public:
    Account(int num, string name, float bal) 
	{
        accNum = num;
        accHolderName = name;
        balance = bal;
    }

    virtual void withdraw(float amount) = 0;
    virtual void deposit(float amount) = 0;
    virtual void display() = 0;
};

class SavingsAccount : public Account 
{
    float interestRate;
public:
    SavingsAccount(int num, string name, float bal, float rate) : Account(num, name, bal) 
	{
        interestRate = rate;
    }

    void withdraw(float amount) 
	{
        if (balance >= amount) 
		{
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else 
		{
            cout << "Insufficient funds." << endl;
        }
    }

    void deposit(float amount) 
	{
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void display() 
	{
        cout << "Account Number: " << accNum << endl;
        cout << "Account Holder Name: " << accHolderName << endl;
        cout << "Account Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account 
{
    float minBalance;
public:
    CurrentAccount(int num, string name, float bal, float minBal) : Account(num, name, bal) 
	{
        minBalance = minBal;
    }

    void withdraw(float amount) 
	{
        if (balance >= amount) 
		{
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void deposit(float amount) 
	{
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void display() 
	{
        cout << "Account Number: " << accNum << endl;
        cout << "Account Holder Name: " << accHolderName << endl;
        cout << "Account Balance: " << balance << endl;
        cout << "Minimum Balance: " << minBalance << endl;
    }

    void applyServiceCharge() 
	{
        if (balance < minBalance) 
		{
            float serviceCharge = 50.0;
            balance -= serviceCharge;
            cout << "Service charge applied. New balance: " << balance << endl;
        }
    }
};

int main() {
    SavingsAccount s(12345, "sujal", 10000.0, 5.0);
    s.display();
    s.withdraw(5000.0);
    s.deposit(2000.0);
    s.display();

    CurrentAccount c(67890, " Smit", 5000.0, 1000.0);
    c.display();
    c.withdraw(2000.0);
    c.applyServiceCharge();
    c.display();

    return 0;
}

