

#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int* size = new int(5);
    int* first=new int(*size);
    int* sum = new int(0);

    for (size_t i = 0; i <= *size; i++)
    {
        *(first+i) = rand()% 10;
        *sum += *(first+i);



    }
    cout <<" suma:" << *sum;



    return 0;
}