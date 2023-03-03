#include<iostream>
#include<string.h>
using namespace std;

class cricketer 
{

        
    public:
    	char name[50];
        int age;
        char country[50];
        void cdata() 
		{
			cout<<"-+-+-+-+-+-+-+ CRICKETER DETAILS +-+-+-+-+-+-+-"<<endl;
            cout<<"Enter your favourite cricketer name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter country: ";
            cin>>country;
        }
};

class bowler : public cricketer 
{
    private:
        int total;
        float avg;
        int best;
    public:
        void getdata() 
		{
            cricketer::cdata(); 
            cout << "\n\nEnter total runs: ";
            cin >> total;
            cout << "Enter best performance(In Run): ";
            cin >> best;
            calculate_avg(); 
        }
        void calculate_avg() {
            avg = total/best;
        }
        void showdata() 
		{
			cout<<"\n\n-*-*-*-*-*-*-*-*-*-* YOUR CRICKETER DETAILS IS *-*-*-*-*-*-*-*-*-*-"<<endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Country: " << country << endl;
            cout << "Total runs: " << total << endl;            
            cout << "Best performance: " << best << endl;
            cout << "Average runs: " << avg << endl;
        }
};

int main() 
{
    bowler b;
    b.getdata();
    b.showdata();
    return 0;
}

