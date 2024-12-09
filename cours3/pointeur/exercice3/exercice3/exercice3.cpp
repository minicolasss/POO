#include <iostream>
#include <vector>

using namespace std;


int cal(vector<int> tab, shared_ptr<int>min, shared_ptr<int>max)
{
    int calc = 0;

    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
        calc += tab[i];
        if (tab[i] < *min)
        {
            *min = tab[i];
        }
        if (tab[i] > *max)
        {
            *max = tab[i];
        }
    }

    return calc;
}





int main()
{
    cout << "test\n";

    vector<int> tab = { 1,2,3,4,5 };
    shared_ptr<int>min = make_shared<int>(tab[0]);
    shared_ptr<int>max = make_shared<int>(tab[0]);

    int somme =  cal(tab, min ,max);

    cout << endl << somme << endl << *min << endl << *max;


    return 0;
}
