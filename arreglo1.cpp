#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char ValoresTabla[11] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};
    for (int i = 0; i < 11; i++)
    {
        cout << ValoresTabla[i] << " ";
    }

    return 0;
}