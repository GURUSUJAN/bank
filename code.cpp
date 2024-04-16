/*
// #include"bits/stdc++.h"
// using namespace std;
// class new_acc
// {
//     protected:
//     string name;
//     int age;
//     long long mobile_number;
//     int mpin;
//     int ba;
//     public:
//     void new1()
//     {
//         cout<<"Enter your name: "<<endl;
//         cin>>name;
//         cout<<"Enter your age: "<<endl;
//         cin>>age;
//         cout<<"Enter your Mobile Number: "<<endl;
//         cin>>mobile_number;
//         cout<<"Enter 8 digits for MPIN: "<<endl;
//         cin>>mpin;
//         cout<<"Opening balance for account: "<<endl;
//         cin>>ba;
//         ofstream ac1("bank.txt");
// 	    ac1<<name<<endl;
// 	    ac1<<age<<endl;
// 	    ac1<<mobile_number<<endl;
// 	    ac1<<mpin<<endl;
// 	    ac1<<ba<<endl;
// 	    ac1.close();
//     }
// };
// class new_acc1 : public virtual new_acc
// {
//     protected:
//     int num2;
//     int num3;
//     int num5;
//     long long num6;
//     string num4;
//     public:
//     	void new2()
//     	{
// 		    ifstream a1("bank.txt");
// 			a1>>num4;
// 			a1>>num3;
// 			a1>>num6;
// 			a1>>num2;
// 			new3(num2);	
// 		}
//     void new3(int x)
//     {
//     	cout<<"Enter MPIN: "<<endl;
//     	cin>>num5;
//     	if(num5==x)
//     	{
//     		cout<<"No Data Available"<<endl;
// 		}
//     }
// };

// class new_acc2 :public virtual new_acc
// {
// 	protected:
// 		int num16;
// 		int num2;
//     	int num3;
//     	long long num6;
//     	int num5;
//     	string num4;
// 		 int num17;
// 	public:
// 		void new4()
//     	{
// 		    ifstream a1("bank.txt");
// 		    ifstream a2("bank1.txt");
// 		    a1>>num4;
// 			a1>>num3;
// 			a1>>num6;
// 			a1>>num2;
// 			a1>>num16;
// 			a2>>num17;
// 			cout<<"Enter MPIN: "<<endl;
// 			cin>>num5;
// 			if(num5==num2)
// 			{
// 			cout<<"Balance in your account is: "<<num16+num17<<endl;	
// 		    }
// 		}
// };
// //int new_acc2::num17=0;

// class new_acc3 : public virtual new_acc,public virtual new_acc2,public virtual new_acc1
// {
// 	protected:
// 		int num17;
// 	public:
// 		void new5()
// 		{
// 			cout<<"Enter the amount you would like to deposite: "<<endl;
// 			cin>>num17;
// 			ofstream a2("bank1.txt");
// 			a2<<num17;
// 			cout<<"Amount Deposited"<<endl;
// 		}
// };

// int main()
// {
//     int num1;
//     cout<<"                                                                     WELCOME TO THE BANK OF LPU"<<endl;
//     cout<<"                                                                     --------------------------"<<endl;
//     cout<<"                                                                          ->>MAIN MENU<<-      "<<endl;
//     cout<<"                                                                             1.Creat New Account"<<endl;
//     cout<<"                                                                             2.Login            "<<endl;
//     cout<<"                                                                             3.Check balance    "<<endl;
//     cout<<"                                                                             4.Deposite         "<<endl;
//     cout<<"                                                                             5.Cards            "<<endl;
//     cout<<"                                                                             6.Logout           "<<endl;
//     cout<<"Press a number according to you: "<<endl;
//     cin>>num1;
//     if(num1==1)
//     {
//         	new_acc object1;
//         	object1.new1();
//         	cout<<"Account Created"<<endl;
// 	}
// 	else if(num1==2)
// 	{
// 		int num15;
// 		cout<<"Press 1 to View MiniStatement!"<<endl;
// 		cin>>num15;
// 		if(num15==1)
// 		{
//         	new_acc1 object2;
//         	object2.new2();
//         }
//         else 
//         {
//         	cout<<"sorry ! I didn't get you "<<endl;
// 		}
// 	}
// 	else if(num1==3)
// 	{
// 		new_acc2 object5;
// 		object5.new4();
// 	}
// 	else if(num1==4)
// 	{
// 		new_acc3 object5;
// 		object5.new5();
// 	}
//     else if(num1==5)
//     {
//     	cout<<"Out of Service"<<endl;
// 	}
// 	else if(num1==6)
// 	{
// 		string des;
// 		cout<<"Are you Sure to Logout"<<endl;
// 		cout<<"yes"<<" "<<"no"<<endl;
// 		cout<<"type in lower case characters!"<<endl;
// 		cin>>des;
// 		if(des=="yes")
// 		{
// 			exit(0);
// 		}
// 		else if(des=="no")
// 		{
// 			main();
// 		}
// 		else
// 		{
// 			cout<<"please be awake while typing mate"<<endl;
// 		}
// 	}
// }
*/



#include"iostream"
#include"string"
#include "fstream"
#include "cstdio"
class once
{
public:
   std::string username,password;
   long amount;
    void check_balance()
    {
       std::fstream create_new;
        create_new.open("one.txt",std::ios::in);
        if (create_new.is_open())
        {
            create_new>>username>>password>>amount;
            if(amount==0)
            {std::cout<<"Balance is 0"<<std::endl;}
            else
            {
                std::cout<<"Balance: "<<amount<<std::endl;
            }
        }
        else
        {
            std::cout<<"Unable to access to the account"<<std::endl;
        }
        create_new.close();
    }
    void deposit()
    {
        std::ifstream in("one.txt");
        if (!in)
        {
            std::cout << "Unable to access the account" << std::endl;
            return;
        }

        std::string username, password;
        long amount;
        if (in >> username >> password >> amount)
        {
            long depo;
            std::cout << "Enter the amount to deposit: ";
            std::cin >> depo;
            amount += depo;
            if (amount > 100000)
            {
                std::cout << "Cannot deposit more than 100000" << std::endl;
                return;
            }

            std::ofstream out("one.txt");
            if (!out)
            {
                std::cout << "Unable to update the account" << std::endl;
                return;
            }

            out << username << " " << password << " " << amount << std::endl;
            std::cout << "Deposited " << depo << ", balance is now " << amount << std::endl;
        }
        else
        {
            std::cout << "Invalid account file format" << std::endl;
        }
    }
    void withdraw()
    {
        std::ifstream in("one.txt");
        if (!in)
        {
            std::cout << "Unable to access the account" << std::endl;
            return;
        }

        std::string username, password;
        long amount;
        if (in >> username >> password >> amount)
        {
            long depo;
            std::cout << "Enter the amount to withdraw: ";
            std::cin >> depo;
            if (depo < 0)
            {
                std::cout << "Invalid withdrawal amount" << std::endl;
                return;
            }

            if (depo > amount)
            {
                std::cout << "Insufficient funds" << std::endl;
                return;
            }

            amount -= depo;
            std::ofstream out("one.txt");
            if (!out)
            {
                std::cout << "Unable to update the account" << std::endl;
                return;
            }

            out << username << " " << password << " " << amount << std::endl;
            std::cout << "Withdrew " << depo << ", balance is now " << amount << std::endl;
        }
        else
        {
            std::cout << "Invalid account file format" << std::endl;
        }
    }
    static void close_account()
    {
        const char* filename = "one.txt";
        int result = std::remove(filename);
        std::cout<<"Account Closed"<<std::endl;
    }
};
using namespace std;
void create();
void login();
void information();
int main()
{
    cout<<"Hola! soy Sujan"<<endl;
    cout<<"Welcome to Bank of Naiju!"<<endl;
    int n;
    do
    {
        cout<<"1.Create New Account\n2.Login\n3.Exit\n";
        cin>>n;
        switch(n)
        {
            case 1:
                create();
                break;
            case 2:
                login();
                break;
            case 3:
                cout<<"See you Again👋";
                exit(0);
            default:
                cout<<"May Be your Blind Mate!"<<endl;
        }
    }
    while(n!=3);
}
void create()
{
    fstream create_new;
    create_new.open("one.txt",ios::out);
    if(!create_new)
        cout<<"File Not Created\nTry Again\n";
    else
        cout<<"File Created Sucessfully!\n";
    string user_name,pass_code;
    long balance=0;
    cout<<"Enter User Name: ";
    cin>>user_name;
    cout<<"Enter PassCode: ";
    cin>>pass_code;
    cout<<"Opening Balance: ";
    cin>>balance;
    create_new<<user_name<<endl;
    create_new<<pass_code<<endl;
    create_new<<balance<<endl;
    create_new.close();
}
void login()
{
    fstream create_new;
    create_new.open("one.txt",ios::in);
    if(!create_new)
        cout<<"No Such File Found😞"<<endl;
    else
    {
        int i=0;
        string user_name,passcode,username,pass_Code;
        cout<<"UserName: ";
        cin>>username;
        cout<<"Password: ";
        cin>>passcode;
        string one,two;
        create_new>>one>>two;
        if(one==username)
            if(two==passcode)
            {
                cout<<"Welcome!"<<endl;
                information();
            }
            else
            {cout<<"Incorrect Password"<<endl;exit(0);}
        else
        {cout<<"Incorrect UserName"<<endl;exit(0);}
    }
    create_new.close();
}
void information()
{
    once o;
    int n;
    do
    {
        cout<<"1.Check Balance\n2.Deposit\n3.WithDrawal\n4.Back\n5.Exit\n6.Close Account\n";
        cin>>n;
        switch(n)
        {
            case 1:
                o.check_balance();
                break;
            case 2:
                o.deposit();
                break;
            case 3:
                o.withdraw();
                break;
            case 4:
                main();
                break;
            case 5:
                cout<<"See you Again👋";
                exit(0);
            case 6:
                o.close_account();
                break;
            default:
                cout<<"May Be your Blind Mate!"<<endl;
        }
    }
    while(n!=4);
}




/*
#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

void new_account();
void login();
void check(string line, string login_username, string login_password);

int main()
{
    int input=-1;

    do
    {
        cout << "1.Create new Account" << "\n" << "2.Log In" << "\n" << "3.Quit" << endl;

        cin >> input;

        switch(input)
        {
            case 1:
                new_account();
                break;
            case 2:
                login();
                break;
            case 3:
                exit(0);
            default:
                cout << "I am sorry, I didn't get it" << endl;
        }
    }while(input!=3);
}

void new_account()
{
    ofstream user_data("User Data.txt", ios::app);


    string fname, lname, usrname, password;
    long long phonenumber;
    float amount;

    try
    {
        if(user_data)
        {
            
            cout << "Enter First name: ";
            cin.ignore();
            getline(cin, fname);
            
            cout << "Enter Last name: ";
            getline(cin, lname);

            cout << "Enter username: ";
            getline(cin, usrname);
            
            cout << "Enter password: ";
            getline(cin, password);

            cout << "Enter Phone Number: ";
            cin >> phonenumber;
            
            cout << "Enter Opening Balance: ";
            cin >> amount;
        }
        else
        throw runtime_error ("Error! in opening file, Please try again!");
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    user_data << fname << " | " << lname << " | " << usrname << " | " << password << " | " << phonenumber << " | " << amount << endl;
    user_data.close();
}

void login()
{
    fstream user_data ("User Data.txt");

    try
    {
        if(!user_data)
        {
            throw runtime_error ("Erro! File not Found! Please Create account");
        }
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    string line="";

    string login_username, login_password;

    cout << "Enter Username: ";
    cin.ignore();
    getline(cin, login_username);

    cout << "Enter Password: ";
    getline(cin, login_password);


    while(getline(user_data, line))
    {
        check(line, login_username, login_password);
        line.erase(line.begin());   
    }
    user_data.close();
}

void check(string line, string login_username, string login_password)
{

    ofstream user_data("User Data.txt", ios::app);

    string fname, lname, usrname, password;
    long long phonenumber;
    float amount, money;

    stringstream ss(line);

    getline(ss, fname, '|');
    getline(ss, lname, '|');
    getline(ss, usrname, '|');
    getline(ss, password, '|');
    string phone_str, balance_str;
    getline(ss, phone_str, '|');
    getline(ss, balance_str);

    phonenumber = stoll(phone_str);
    amount = stof(balance_str);


    if(login_username.compare(usrname) && login_password.compare(password))
    {
        int login_input=-1;
        do
        {
            cout << "1.Check Balance" << "\n" << "2.Deposite" << "\n" << "3.Withdraw" << "\n" << "4.Back" << "\n" << "5.Quit" <<endl;
            cin >> login_input;

            switch(login_input)
            {
                case 1:
                    cout << "Balance is: " << amount << endl;
                    break;
                case 2:
                    cout << "Enter Deposite amount: ";
                    cin>> money;

                    amount+=money;
                    break;
                case 3:
                    cout << "Enter Whitdraw amount: ";
                    cin>> money;

                    if (amount < money)
                    cout << "Not Enough Balance";
                    else
                    amount-=money;
                    break;
                case 4:
                    main();
                    break;
                case 5:
                    exit(0);
                default:
                    cout << "I am sorry, I didn't understand!" << endl;
            }
        }while(login_input!=5);
        user_data << fname << " | " << lname << " | " << usrname << " | " << password << " | " << phonenumber << " | " << amount << endl;
        user_data.close();
    }
    user_data << fname << " | " << lname << " | " << usrname << " | " << password << " | " << phonenumber << " | " << amount << endl;
    user_data.close();


}
*/
