#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string str, read;
    ofstream out;
    out.open("E:/c and c++ program/Assigment/MODULE 6/read and write.txt");
    cout<<"Enter the string:";
    cin>>str;
    out<<str;
    out.close();
    ifstream in("E:/c and c++ program/Assigment/MODULE 6/read and write.txt");
    in>>read;
    cout<<read;
    in.close();
    return 0;
}
