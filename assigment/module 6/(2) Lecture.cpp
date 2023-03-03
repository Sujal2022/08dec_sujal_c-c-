#include <iostream>
#include <string>
using namespace std;
class Lecture 
{
	struct Stdata
	{
	char lectnm[50];
    char subnm[50];
    char cournm[50];
    int numlect;
    int nolect;
	};
public:
	struct Stdata St[50];
 
    void getdata() 
	{
		 for (int i = 0; i < 5; i++) 
		 {
            cout<<"Enter lecturer name: ";
            cin>>St[i].lectnm;
            cout<<"Enter subject name: ";
            cin>>St[i].subnm;
            cout<<"Enter course name: ";
            cin>>St[i].cournm;
            cout<<"Enter number of lecturer:";
            cin>>St[i].nolect;
     	}
    }
    void showdata() 
	{
        cout <<endl<< "Lecture Details:" << endl;
        for (int i = 0; i < 5; i++) 
		{
            cout << "Lecturer " << i+1 <<":" << endl;
            cout << "Name: " << St[i].lectnm << endl;
            cout << "Subject: " << St[i].subnm << endl;
            cout << "Course: " << St[i].cournm << endl;
            cout << "Number:" << St[i].nolect<< endl;
            cout << endl;
        }
    }
};

int main() 
{
    Lecture L1;

    	L1.getdata();   
		L1.showdata();	   
    return 0;
}
