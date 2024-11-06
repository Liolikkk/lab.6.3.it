#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;


template<typename T>
void Init_(T* b, const int n)
{
    for (int i = 0; i < n; i++)
        b[i] = -10 + rand() % 21;
}

void Init(int* b, const int n)
{
    for (int i = 0; i < n; i++)
        b[i] = -10 + rand() % 21;
}


template<typename T>
void Print_(T* b, const int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << (i < n - 1 ? ", " : "");
    cout << " }";
}

void Print(int* b, const int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << (i < n - 1 ? ", " : "");
    cout << " }";
}


template<typename T>
int CountNegative_(T* b, const int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < 0)
            count++;
    }
    return count;
}


int CountNegative(int* b, const int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < 0)
            count++;
    }
    return count;
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    int n;
    cout << "n = ";
    cin >> n;

    int* a = new int[n];

    Init(a, n);

    cout << "Array: ";
    Print(a, n);
    cout << endl;

    int negativeCount = CountNegative(a, n);
    cout << "The number of negative elements: " << negativeCount << endl << endl;
 
    ///////////////
    ///////////////
    int* b = new int[n];

    Init_(b, n);

    cout << "Array: ";
    Print_(b, n);
    cout << endl;

    int negativeCount_ = CountNegative_(b, n);
    cout << "The number of negative elements: " << negativeCount_ << endl;

    delete[] a;
    delete[] b;
    return 0;
}
