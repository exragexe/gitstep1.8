

#include <iostream>
#include <ctime>
using namespace std;
int main() {

    int* first_num = new int(5);
    int* second_num = new int(8);
    *first_num = *first_num+ *second_num;
    *second_num = *first_num- *second_num;
    *first_num = *first_num- *second_num;
    cout <<"first number = "<<*first_num <<"\t second number "<<*second_num;



    return 0;
}