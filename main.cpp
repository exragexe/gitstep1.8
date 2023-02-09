

#include <iostream>
#include <ctime>
using namespace std;
int main() {
    char* znak = new char() ;
    int* first=new int(0);
    int* second = new int(0);

    cout <<"Calculator";
    cout <<"Enter two numbers: ";
    cin >> *first>>*second;
    cout <<"Enter znak(+/-/*/:):";
    cin >> *znak;
    if (*znak == '+'){
        cout << "Result: "<<*first + *second;
    }
    else if (*znak == '-'){
        cout << "Result: "<<*first - *second;
    }
    else if (*znak == '*'){
        cout << "Result: "<<*first * *second;
    }
    else if (*znak == '/'){
        cout << "Result: "<<*first / *second;
    }



    return 0;
}