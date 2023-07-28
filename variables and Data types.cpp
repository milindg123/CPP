#include <iostream>
 using namespace std;

struct DemoStruct{
   int val1;
   double val2;
};

// typedef :- Use to shortest the name
typedef struct DemoStruct dStruct;

class Demo {
   string name;

   public:
         Demo() {}
         Demo(string ip): name(ip) {}

         void printName(){
            cout << "Name is: " << name << endl;
         }
};
typedef Demo dem;

int main() {

   /* Variables:-
               1. Names cam contain letetters,digits and underscore only
               2. Names must begin with a letter or an underscore(_)
               3. Names are case sensitive(Milind and milind are different variables)
               4. Names cannot contain whitespaces or special charaters like !,#,%, etc.
               5. Reserved words cannot be used as names
   */


  /* Data Types:-
                
                1. Primitive Data Types :- ( int,char, Boolean,floating point,Double floating point)

                2. Derived Data Types:- ( Array, Pointer, Reference)

                3. User defined data Types :- (Classes, Structures and Unions, Enum, Typedef)

   */

    //Primitive Data Types
    int num = 10;
    int num2;
    char ch = 'a';
    bool val = false;
    float dec = 11.111;
    double dec2 =11.111;

    //Derived Data Types
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &num;
    int& numRef =num;

    //User defined dataTypes
    enum day{
      Sunday,
      Monday,
      Tuesday,
      Wednesday,
      Thursday
    };
    day d = Sunday;
    //day d =8;

    cout << "Day is: " << d << endl;
    
    //Creating a variable of the structures
    struct DemoStruct s;
    dStruct s{0, 1};
    cout << s.val2 << endl;

    //Creating an object of the class
    dem demoObject("Milind!");
    //Demo demoObject("Milind!");
    demoObject.printName();

    return 0;

}