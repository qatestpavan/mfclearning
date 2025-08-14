#include<iostream>
# pragma warning(disable:4996)
using namespace std;
//int x = 10;

class BankAccount
{ 
public:
	long long account_number;
	char* account__holder_name;
	long branch_code;
	float available_balance;
	float new_balance;
	//const int x = 10;
	
public:
	// default constructor
	BankAccount()
	{
		account_number = 0;
		account__holder_name = new char;
		*account__holder_name = '\0';
		branch_code = 0;
		available_balance = 0.0;
		new_balance = available_balance;
		//x = 20;

	}
	BankAccount(long long acnum, const char* acname, long bcode, float avbal)
	{
		account_number = acnum;
		account__holder_name = new char[strlen(acname) + 1];
		strcpy(account__holder_name, acname);
		branch_code = bcode;
		available_balance = avbal;


	}
	float newBalance(long deposit_amount)
	{
		return new_balance = available_balance + deposit_amount;
		
		

	}
	// copy constructor
	BankAccount(const BankAccount& bacnt)// classname (const classname&obj)
	{
		account_number = bacnt.account_number;
		account__holder_name = new char[strlen(bacnt.account__holder_name) + 1];// account__holder_name = bacnt.account__holder_name
		strcpy(account__holder_name, bacnt.account__holder_name);
		branch_code = bacnt.branch_code;
		available_balance = bacnt.available_balance;

	}
	// over load constructor
	BankAccount& operator = (const BankAccount& bacnt)//classname& operator = (const classname& obj)
	{
		account_number = bacnt.account_number;
		if (account__holder_name != nullptr)
		{
			delete[] account__holder_name;
			account__holder_name = nullptr;
		}
		account__holder_name = new char[strlen(bacnt.account__holder_name) + 1];
		strcpy(account__holder_name, bacnt.account__holder_name);
		branch_code = bacnt.branch_code;
		available_balance = bacnt.available_balance;
		return *this;
	}
	// destructor
	~BankAccount()
	{
		if (account__holder_name != nullptr)
		{
			delete[] account__holder_name;
	
		}
	}
	void show()
	{
		cout << "account_number\n  " << account_number << endl << "account__holder_name\n" << account__holder_name << endl << "branch_code\n" << branch_code <<
			endl << "available_balance\n" << available_balance << endl << "new_balance" << new_balance << endl;

	 }



};
void main()
{
	BankAccount b1;//encapsulation
	b1.show();
	b1.newBalance(2999);
	b1.account_number;
	BankAccount b2(67895674, "akshara", 14467296, 50894.6);//parameterised constructor
	b2.show();
	BankAccount b3(b2);//copy constructor b3 = b2;
	b3.show();
	b3.newBalance(5000);
	b3.show();
	BankAccount b4(456789568, "siva", 14467296, 49000);
	b4.show();
	BankAccount b5;
	b5 = b4;//over load assignment operator
	b5.newBalance(600);
	b5.show();






 }