

#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int* first_num = new int(0);
    int* second_num = new int(0);
    cout << "Enter two numbers: ";
    cin >> *first_num >> *second_num;
    if (*first_num > *second_num) {
        cout << *first_num << " More then "<< *second_num;

    }
    else {
        cout << *second_num << " More then " << *first_num;
    }
    system("pause");
    return 0;
}