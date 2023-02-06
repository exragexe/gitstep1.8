

#include <iostream>
#include <ctime>
#include <chrono>
#include <cmath>
using namespace std;
int rand_int(int end = 10)
{
    return rand() % end;
}
double rand_double(int end = 10)
{
    return (rand() % end) + ((rand()%10000)*0.00001);
}
char rand_char()
{
    return rand() % 255;
}

template <typename T>
void init_array(T arr[][5], const int col, const int row, int end = 10)
{
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (typeid(arr[i][j]) == typeid(int))
            {
                arr[i][j] = rand_int();
            }
            else if (typeid(arr[i][j]) == typeid(char))
            {
                arr[i][j] = rand_char();
            }
            else if (typeid(arr[i][j]) == typeid(double) || typeid(arr[i]) == typeid(float))
            {
                arr[i][j] = rand_double();
            }
        }
    }
}

template <typename T>
void print_array(T arr[][5], const int col, const int row) {
    int max = 0;
    int min =0;
    int num=0;
    int zrostannya[5];
    for (size_t i = 0; i < col; i++) {
        for (size_t j = 0; j < row; j++) {
            cout << arr[i][j] << "\t";

        }
        for (int k = 0; k < col; ++k) {

            if (max < arr[k][i]) {
                max = arr[k][i];
            }
            if (min > arr[k][i]) {
                max = arr[k][i];
            }
        }
        cout << endl;
    }

    cout <<"==================================="<<endl;
    cout << "The maximum number in the matrix is: " << max << endl;
    cout << "The minimum number in the matrix is: " << min << endl;
    cout <<"==================================="<<endl;
}
template <typename T>
void bubbleSortRow(T arr[][5], int n, int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n-1; j++) {
            for (int k = 0; k < n-j-1; k++) {
                if (arr[k][i] > arr[k+1][i]) {
                    T temp = arr[k][i];
                    arr[k][i] = arr[k+1][i];
                    arr[k+1][i] = temp;
                }
            }
        }
    }
}
template <typename T>
void print_array2(T arr[][5], const int col, const int row) {
    for (size_t i = 0; i < col; i++) {
        for (size_t j = 0; j < row; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
int main(){
    srand(time(0));
    const int size = 5;

    int arr_2d[size][size];
    cout << endl << endl;
    init_array<int>(arr_2d, size, size);
    print_array<int>(arr_2d, size, size);
    bubbleSortRow<int>(arr_2d, size, size);
    cout << "Sorted array: " << endl;
    print_array2<int>(arr_2d, size, size);

    return 0;
}