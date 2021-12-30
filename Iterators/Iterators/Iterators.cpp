// Iterators.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = { 1,2,4,5,9 };
    // begin() is a pointer to the first element in the container ; 
    // end() is a pointer to the last + 1 element of the container ;
    // rbegin() is a reverse begin() : the last element of the container ; 
    // rend() is a rverse end() : is the befor fist element in the container ;  
    // so if we do this : 
    cout << endl << "v.begin() => " << *v.begin() << endl;
    // assert: debug cout << endl << "v.end() => " << *v.end(); // undefined ; 
    cout << endl << "v.rbegin() => " << *v.rbegin() << endl;
    // assert: debug cout << endl << "v.rend() => " << *v.rend(); // undefined ;

    // there are also Iterator Invalidation : 
        // --> depends on the container : 
            // for example : we have a vector and it point into the 4 case , 
            // if we add an element before the 4 case =>  the it will point on the new value ; 
        // but for the list : no problem ;

    auto it = v.begin() + 4;
    cout << endl <<"*it = *(v.begin + 4) =>  "<<  * it << endl;
    cout <<endl << "it - v.begin() => " << it - v.begin() << endl;
    it = v.insert(it,100);
    cout <<endl<< "After the inserting " << endl;
    cout << endl << "*it = *(v.begin + 4) =>  " << *it << endl;
    cout << endl << "it - v.begin() => " << it - v.begin() << endl;
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    system("pause>0");
    
}

