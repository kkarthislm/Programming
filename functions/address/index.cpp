#include <iostream>

using namespace std;

int * add_two_numbers(int *a, int *b)
{
    cout << a << "  "<< b << endl;
    int add = *a+*b;
    int *x = &add;
    return x;
}

// receive first address of array
int * add_array(int *a, int *size)
{
    cout << a << "  "<< size << endl;
    int result = 0;
    for (int i = 0; i < *size; i++)
    {
        result += *a++;
    }
    int *x = &result;
    return x;
}

int * return_array(int *a)
{
    cout << a << endl;
    return a;
}

int main()
{
    int a = 10, b = 20;
    cout << &a << "  "<< &b << endl;

    int *addition = add_two_numbers(&a, &b);
    cout << *addition << endl;

    int arr[] = {1, 2, 3, 4}, size = 4;
    cout << &arr << "  "<< &size << endl;

    int *result = add_array(arr, &size);
    cout << *result << endl;

    int *array = return_array(arr);
    cout<<array << endl;

    return 0;
}