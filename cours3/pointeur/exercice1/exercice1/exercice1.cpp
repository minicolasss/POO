#include <iostream>

using namespace std;

int main()
{
    unique_ptr<int> a = make_unique<int>(5);
    cout << a << endl;
    unique_ptr<int> b = move(a);

    cout << a << endl << b << endl << *b;


    return 0;
}