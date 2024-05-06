#include "Bank.h"

using namespace std;

Customer::Customer(string _name, string _surname, int _age, int _accountNumber, int _Balance) {
    name = _name;
    age = _age;
    surname = _surname;    
    accountNumber = _accountNumber;
    Balance = _Balance; 
}


Customer::~Customer() {
 
}


string Customer::Getsurname(){
    return surname;
}

string Customer::GetName(){
    return name;
}

int Customer::GetAge(){
    return age;
}

int Customer::GetaccountNumber(){
    return accountNumber;
}

int Customer::GetBalance(){
    return Balance; 
}

void Customer::Deposit(int amount){
    Balance += amount;
}

void Customer::Withdraw(int amount) {
    if (Balance >= amount) {
        Balance -= amount;
    }
    else {
        cout << "Insufficient balance" << endl;
    }
}
void DisplayCustomerInfo(Customer customer) {
    cout << "Customer Name: " << customer.name << endl;
    cout << "Customer Surname: " << customer.surname << endl;
    cout << "Customer Age: " << customer.age << endl;
    cout << "Customer Account Number: " << customer.accountNumber << endl;
    cout << "Customer Balance: " << customer.Balance << endl;
}





