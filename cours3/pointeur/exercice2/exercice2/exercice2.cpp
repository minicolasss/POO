#include <iostream>

using namespace std;

void test(shared_ptr<int> a)
{
    int val;
    cout << "val a ajouter : ";
    cin >> val;

    *a += val;
}


int main()
{

    shared_ptr<int> val = make_shared<int>(5);
    cout << "avant " << *val << endl;
    
    test(val);

    cout << "apres " << *val << endl;

    return 0;
}