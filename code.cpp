#include"bits/stdc++.h"
using namespace std;
class new_acc
{
    protected:
    string name;
    int age;
    long long mobile_number;
    int mpin;
    int ba;
    public:
    void new1()
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your age: "<<endl;
        cin>>age;
        cout<<"Enter your Mobile Number: "<<endl;
        cin>>mobile_number;
        cout<<"Enter 8 digits for MPIN: "<<endl;
        cin>>mpin;
        cout<<"Opening balance for account: "<<endl;
        cin>>ba;
        ofstream ac1("bank.txt");
	    ac1<<name<<endl;
	    ac1<<age<<endl;
	    ac1<<mobile_number<<endl;
	    ac1<<mpin<<endl;
	    ac1<<ba<<endl;
	    ac1.close();
    }
};
class new_acc1 : public virtual new_acc
{
    protected:
    int num2;
    int num3;
    int num5;
    long long num6;
    string num4;
    public:
    	void new2()
    	{
		    ifstream a1("bank.txt");
			a1>>num4;
			a1>>num3;
			a1>>num6;
			a1>>num2;
			new3(num2);	
		}
    void new3(int x)
    {
    	cout<<"Enter MPIN: "<<endl;
    	cin>>num5;
    	if(num5==x)
    	{
    		cout<<"No Data Available"<<endl;
		}
    }
};

class new_acc2 :public virtual new_acc
{
	protected:
		int num16;
		int num2;
    	int num3;
    	long long num6;
    	int num5;
    	string num4;
		 int num17;
	public:
		void new4()
    	{
		    ifstream a1("bank.txt");
		    ifstream a2("bank1.txt");
		    a1>>num4;
			a1>>num3;
			a1>>num6;
			a1>>num2;
			a1>>num16;
			a2>>num17;
			cout<<"Enter MPIN: "<<endl;
			cin>>num5;
			if(num5==num2)
			{
			cout<<"Balance in your account is: "<<num16+num17<<endl;	
		    }
		}
};
//int new_acc2::num17=0;

class new_acc3 : public virtual new_acc,public virtual new_acc2,public virtual new_acc1
{
	protected:
		int num17;
	public:
		void new5()
		{
			cout<<"Enter the amount you would like to deposite: "<<endl;
			cin>>num17;
			ofstream a2("bank1.txt");
			a2<<num17;
			cout<<"Amount Deposited"<<endl;
		}
};

int main()
{
    int num1;
    cout<<"                                                                     WELCOME TO THE BANK OF LPU"<<endl;
    cout<<"                                                                     --------------------------"<<endl;
    cout<<"                                                                          ->>MAIN MENU<<-      "<<endl;
    cout<<"                                                                             1.Creat New Account"<<endl;
    cout<<"                                                                             2.Login            "<<endl;
    cout<<"                                                                             3.Check balance    "<<endl;
    cout<<"                                                                             4.Deposite         "<<endl;
    cout<<"                                                                             5.Cards            "<<endl;
    cout<<"                                                                             6.Logout           "<<endl;
    cout<<"Press a number according to you: "<<endl;
    cin>>num1;
    if(num1==1)
    {
        	new_acc object1;
        	object1.new1();
        	cout<<"Account Created"<<endl;
	}
	else if(num1==2)
	{
		int num15;
		cout<<"Press 1 to View MiniStatement!"<<endl;
		cin>>num15;
		if(num15==1)
		{
        	new_acc1 object2;
        	object2.new2();
        }
        else 
        {
        	cout<<"sorry ! I didn't get you "<<endl;
		}
	}
	else if(num1==3)
	{
		new_acc2 object5;
		object5.new4();
	}
	else if(num1==4)
	{
		new_acc3 object5;
		object5.new5();
	}
    else if(num1==5)
    {
    	cout<<"Out of Service"<<endl;
	}
	else if(num1==6)
	{
		string des;
		cout<<"Are you Sure to Logout"<<endl;
		cout<<"yes"<<" "<<"no"<<endl;
		cout<<"type in lower case characters!"<<endl;
		cin>>des;
		if(des=="yes")
		{
			exit(0);
		}
		else if(des=="no")
		{
			main();
		}
		else
		{
			cout<<"please be awake while typing mate"<<endl;
		}
	}
}
