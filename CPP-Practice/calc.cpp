#include <iostream>
using namespace std;
0
int main (){
    int a, b;
    char s ;
    cout << "Enter the first number : ";
    cin>> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "What do you want to do (+,-,*,/) :";
    cin >> s ;
    if (s == '+'){
        cout << "The sum of " <<a << " and " << b << " is "<< a+b ;
    }
        else if(s == '-'){
            cout << "The difference of " <<a << " and " << b << " is "<< a-b ;
        }
        else if(s == '*'){
            cout << "The multiplication of " <<a << " and " << b << " is "<< a*b ;
        }
        else if(s == '/'){
            if (b == 0){
                cout << "Can't be divided by zero\n";
            }
            else{
            cout << "The division of " <<a << " and " << b << " is "<< (float)a/b ;
            }
        }
        else {
            cout << "Invalid operator\n";
        }
        return 0;
} 