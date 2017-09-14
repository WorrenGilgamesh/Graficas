#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    char xs[] = "123";
    char* arr [sizeof(xs)+1];
    int i = 0;
    do
    {
        arr[i]=xs;
        cout << arr[i]<<'\n';
        i++;
    }
    while (std::next_permutation(xs, xs + sizeof(xs) - 1));
    return 0;
}