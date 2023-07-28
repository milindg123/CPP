#include <iostream>
using namespace std;

int main()
{
    int p = 5;
    int q = 4;
    int r = p+q;
    cout<< r<<endl;

    // 4 byte or 32bit -> int data type

    char ch = 'g';
    cout<< ch << endl;

    // 8 bit or 1 byte -> Char data type

    bool b = 1;
    cout<< b << endl;
    //  yes/no type 2 option 0 or 1 we can store

    float f = 1.2;
    cout << f << endl;

    // 8 byte store

    double d = 1.23;
    cout<< d <<endl;
    // 8 byte data store



    // ************** VARIABLE ************************


    int j = 123;
    cout<< j <<endl;

    int size = sizeof(p);
    cout<<"Size of p is :" << size <<endl;
    // Variable ki size kitni hai vo dekhane ke liye sizeof ka use karte hai


    int a = 'a';  //Typecasting
    cout<< a <<endl;

    char cha = 97;
    cout << cha <<endl;

}