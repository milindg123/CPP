
// C++ code to demonstrate printing
// pattern of numbers
#include <iostream>
using namespace std;
 

void numpat(int n)
{
  
    int num = 1;
 
    
    for (int i = 0; i < n; i++) {
 
        
        
        for (int j = 0; j<=i; j++){
            cout << num << " ";
        num = num + 1;
        }
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    int n = 5;
    numpat(n);
    return 0;
}
