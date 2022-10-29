//

#include <iomanip>
#include <iostream>
using namespace std;

void getinput(int &a, int &b, int &c){
    cin >> a >> b >> c;
}

void maxmin(int a, int b, int c, int &max, int &min) {
    if (a < b && a < c)
        min = a; 
    else if (b < c)
        min = b;
    else 
        min = c;
    
    if (a > b && a > c)
        max = a; 
    else if (b > c)
        max = b;
    else 
        max = c;
}

// complete the function maxmin( )