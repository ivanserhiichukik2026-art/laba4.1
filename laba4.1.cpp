#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = ";
    cin >> N;

    S = 0; // 1
    i = N;

    while (i <= 22)
    {
        S += sqrt(pow(i, 2) + pow(N, 2)) / i;
        i++;
    }

    cout << "1 sposib) S = " << S << endl;

    S = 0; // 2
    i = N;

    do
    {
        S += sqrt(pow(i, 2) + pow(N, 2)) / i;
        i++;
    } while (i <= 22);

    cout << "2 sposib) S = " << S << endl;

    S = 0; // 3

    for (i = N; i <= 22; i++)
    {
        S += sqrt(pow(i, 2) + pow(N, 2)) / i;
    }

    cout << "3 sposib) S = " << S << endl;

    S = 0; // 4

    for (i = 22; i >= N; i--)
    {
        S += sqrt(pow(i, 2) + pow(N, 2)) / i;
    }

    cout << "4 sposib) S = " << S << endl;

    return 0;
}