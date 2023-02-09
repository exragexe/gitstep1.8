

#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int* first_num = new int(0);
    cout << "Enter number: ";
    cin >> *first_num ;
    if(*first_num ==0){
        cout << *first_num <<" Equal to zero";
    }
    else if(*first_num > 0){
        cout << *first_num<<" is positive";
    }
    else{
        cout << *first_num<<" is negative";
    }
    system("pause");
    return 0;
}