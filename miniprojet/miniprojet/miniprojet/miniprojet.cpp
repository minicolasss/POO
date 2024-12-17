#include <iostream>

#include "MINIPROJET.hpp"

using namespace std;


int main()
{
    Movie m1 = Movie("1. test", 60);
    Movie m2 = Movie("2. test2", 120);
    Movie m3 = Movie("3. test3", 174);
    Movie m4 = Movie("4. test4", 40);
    Movie m5 = Movie("5. test5", 90);

    m1.ajoutdefilm(&m1);
    m1.ajoutdefilm(&m2);
    m1.ajoutdefilm(&m3);
    m1.ajoutdefilm(&m4);
    m1.ajoutdefilm(&m5);

    Session S1 = Session(1012025, 1040 , 30);
    Session S2 = Session(1312025, 1040 , 25);
    Session S3 = Session(1412025, 1040 , 46);

    S1.ajoutseance(&S1); 
    S1.ajoutseance(&S2); 
    S1.ajoutseance(&S3);


    Session P1 = Session(1012025, 1150, 30);
    Session P2 = Session(1312025, 1150, 25);
    Session P3 = Session(1412025, 1150, 46);

    P1.ajoutseance(&P1);
    P1.ajoutseance(&P2);
    P1.ajoutseance(&P3);


    Session G1 = Session(1012025, 1350, 30);
    Session G2 = Session(1312025, 1350, 25);
    Session G3 = Session(1412025, 1350, 46);

    G1.ajoutseance(&G1);
    G1.ajoutseance(&G2);
    G1.ajoutseance(&G3);


    Session Y1 = Session(1012025, 1350, 30);
    Session Y2 = Session(1312025, 1350, 25);
    Session Y3 = Session(1412025, 1350, 46);

    Y1.ajoutseance(&Y1);
    Y1.ajoutseance(&Y2);
    Y1.ajoutseance(&Y3);

    Session A1 = Session(1012025, 1350, 30);
    Session A2 = Session(1312025, 1350, 25);
    Session A3 = Session(1412025, 1350, 46);

    A1.ajoutseance(&A1);
    A1.ajoutseance(&A2);
    A1.ajoutseance(&A3);




    int i = 1;
    while (i > 0)
    {   

        int option;
        cout << "page option                                                            taper 0 pour sortir \n"; 
        cout << "1. voir la liste de film \n" << "2. annuler reservation \n";
        cin >> option;
        if (option == 1)
        {
            m1.afffilm();  
                int option2;
                cout << "selectionner un film \n";
                cin >> option2;

                if (option2 == 1)
                {
                    cout << "selectionner une seance \n";
                    S1.affseance();
                }
                if (option2 == 2)
                {
                    cout << "selectionner une seance \n";
                    P1.affseance();
                }
                if (option2 == 3)
                {
                    cout << "selectionner une seance \n";
                    G1.affseance();
                }
                if (option2 == 4)
                {
                    cout << "selectionner une seance \n";
                    Y1.affseance();
                }
                if (option2 == 5)
                {
                    cout << "selectionner une seance \n";
                    A1.affseance();
                }

                cout << "selectionner une seance \n";

        }
        if (option == 2)
        {

        }
        if (option == 0)
        {
            i = 0;
        }
        if (option != 1 && option != 2 && option != 0)
        {
            cout << "mauvaise input \n";
        }
    }

    return 0;
}
