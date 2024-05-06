#include<iostream>
#include "Bank.h"
using namespace std;






int main(){
	int option;
    Customer show;
    string name,surname;
    int age, accountNumber;
    Customer show1(name,surname,age,accountNumber,0);
    do {
		cout << "* * * * * * * * * * * * * * * * * " << endl;
       	cout << "* * Bank Account Manager      * * "<< endl;
        cout << "* * 1. Add account            * * " << endl;
        cout << "* * 2. Deposit                * * "<< endl;
        cout << "* * 3. Withdraw               * * "<< endl;
        cout << "* * 4. View balance           * * "<< endl;
        cout << "* * 5. Exit                   * * " << endl;
        cout << "* * Choose an option:         * * "<< endl;
        cout << "* * * * * * * * * * * * * * * * * " << endl<<endl<<endl;
        cin >> option;
        

        if(option==1) {
            
            	cin.ignore();
            	
            	cout << "Enter name: " <<endl;
            	getline(cin, name);
            	
            	cout <<"Enter surname" <<endl;
                getline(cin,surname);
               
                cout << "Enter age: " <<endl;
                cin >> age;
                
                cout << "Enter account number: ";
                cin >> accountNumber;
                
                
                
                Customer show1(name,surname,age,accountNumber,0);
                DisplayCustomerInfo(show1);
                
	    	}
	    	else if(option==2) {
				int accountNumber;
	    		int amount;
	              
	            cout << "Enter account number: ";
                cin >> accountNumber;
                if(accountNumber==show1.GetaccountNumber()||accountNumber==show.GetaccountNumber()){
                	cout<<"Login is successful"<<endl;
                    cout << "Enter amount to deposit: "<<endl;
                    cin >> amount;
                	show.Deposit(amount);
                	cout<<"Your Balance is "<<show.GetBalance()<<endl;
				}
				else{
					cout<<"AccountNumber is wrong."<<endl;
				}
                        
				
			}
			else if(option==3){
				int accountNumber;
	    		int amount;
	    
	            cout << "Enter account number: ";
                cin >> accountNumber;
                if(accountNumber==show.GetaccountNumber()){
                	cout<<"Login is successful"<<endl;
                    cout << "Enter amount to Withdraw: "<<endl;
                    cin >> amount;
                	show.Withdraw(amount);
                    cout<<"Your Balance is "<<show.GetBalance()<<endl;
				}
				else{
					cout<<"AccountNumber is wrong."<<endl;
				}
				
			}
			else if(option==4){
				static int totalDeposits=0;
				totalDeposits++;
				cout<<"Your Balance is "<<show.GetBalance()<<endl;
				cout<<"You checked balance "<<totalDeposits<<" times."<<endl;
				
			
				
			}
			else if(option==5) {
                cout << "Exiting..." << endl;
            	
            }
            
            else{
                cout << "Invalid option" << endl;
                
            }
		}while(option !=5);
	}
	
	







