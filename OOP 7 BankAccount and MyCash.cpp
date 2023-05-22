#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
   string accountHolder;
   string address;
   int age;
   int accountNumber;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string accountHolder, string address, int age, string password)
    {
        this->accountHolder=accountHolder;
        this->address=address;
        this->age=age;
        this->password=password;
        this->accountNumber=rand()%1000000000;
        this->balance=0;
        cout<<"Your account number is "<<this->accountNumber<<endl;
    }

    int showBalance(string password)
    {
        if(this->password == password)
        {
            return this->balance;
        }
        else
        {
            cout<<"Password didn't match"<<endl;
            return -1;
        }
    }

    void addMoney(string password, int amount)
    {
        if(amount<0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(this->password == password)
        {
            this->balance= this->balance+amount;
            cout<<"Add money successful"<<endl;
        }
        else
        {
            cout<<"Wrong password!"<<endl;
        }
    }

    void drawMoney(string password, int amount)
    {
        if(amount<0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(amount>this->balance)
        {
            cout<<"Insufficient balance!"<<endl;
            return;
        }
        if(this->password == password)
        {
            this->balance= this->balance-amount;
            cout<<"Draw money successful"<<endl;
        }
        else
        {
            cout<<"Password should be matched first!"<<endl;
        }
    }
    friend class MyCash;
};

class MyCash
{
protected:
    int balance;
public:
    MyCash()
    {
        this->balance=0;
    }

    void addMoneyFromBank(BankAccount* myAccount, string password, int amount)
    {
        if(amount<0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(amount > myAccount->balance)
        {
            cout<<"Insufficient balance!"<<endl;
            return;
        }
        if(myAccount->password == password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout<<"Add money from bank is successful"<<endl;
        }
        else
        {
            cout<<"Password must be correct"<<endl;
        }
    }

    int showBalance()
    {
        return this->balance;
    }
};

BankAccount* createAccount()
{
    string accountHolder, address, password;
    int age;
    cout<<"CREATE ACCOUNT"<<endl;
    cin>>accountHolder>>address>>age>>password;
    BankAccount *myAccount= new BankAccount(accountHolder, address, age, password);
    return myAccount;
}

void addMoney(BankAccount* myAccount)
{
    string password;
    int amount;
    cout<<"ADD MONEY"<<endl;
    cin>>password>>amount;
    myAccount->addMoney(password, amount);
    cout<<"Your Account Balance is "<<myAccount->showBalance("abc")<<endl;
}

void drawMoney(BankAccount* myAccount)
{
    string password;
    int amount;
    cout<<"DRAW MONEY"<<endl;
    cin>>password>>amount;
    myAccount->drawMoney(password, amount);
    cout<<"Your Account Balance is "<<myAccount->showBalance("abc")<<endl;
}

void addMoneyFromBank(MyCash* myCash, BankAccount* myAccount)
{
    string password;
    int amount;
    cout<<"MyCash: ADD MONEY FROM BANK"<<endl;
    cin>>password>>amount;
    myCash->addMoneyFromBank(myAccount, password, amount);
    cout<<"Your Bank Account Balance is "<<myAccount->showBalance("abc")<<endl;
    cout<<"Your MyCash Balance is "<<myCash->showBalance()<<endl;
}

int main()
{
    BankAccount *myAccount= createAccount();
    cout<<"Your Account Balance is "<<myAccount->showBalance("abc")<<endl;
    MyCash* myCash= new MyCash();

    while(1)
    {
        cout<<"Select Option: "<<endl;
        cout<<"1. Add Money to Bank: "<<endl;
        cout<<"2. Draw Money from Bank: "<<endl;
        cout<<"3. Add Money to MyCash from Bank: "<<endl;
        cout<<"4. Exit"<<endl;
        int option;
        cin>>option;

        if(option == 1)
        {
            addMoney(myAccount);
        }
        else if(option == 2)
        {
            drawMoney(myAccount);
        }
        else if(option == 3)
        {
            addMoneyFromBank(myCash, myAccount);
        }
        else if (option == 4)
        {
            cout<<"EXIT"<<endl;
            exit(1);
        }
        else
        {
            cout<<"Invalid Option"<<endl;
        }
    }
}
