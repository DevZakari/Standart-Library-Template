// Vector.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <list>
using namespace std; 


int main()
{
    vector<int> v = { 1,2,3 };
    // size and capacity  of the vector : 
    cout << endl << "size of the vector : " << v.size() << " capacity of the vector :  " << v.capacity() << endl;
    cout << endl << "Max size of the vector " << v.max_size();
    v.push_back(5);
    cout << endl << "size of the vector : " << v.size() << " capacity of the vector :  " << v.capacity()<< endl;

    // [], at()
    cout << v[2] << endl;
    cout << v.at(3) << endl;
    // front(), back() :
    cout << "front = " << v.front() << " back = " << v.back() << endl;
    // insert : 
    v.insert(v.begin() + 2, 100);
    cout << "la valeur de l'indice[2] est : " << v[2] << endl;

    // pop_back() : 
    v.pop_back();
    cout << "**  After Pop Back  :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // insertion of a list into our vector : 

    list<int> ll = { -100,-200,-300 };
    v.insert(v.begin(), ll.begin(), ll.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // erase() : cout << "ld
    // erasing from indice 1 to 2 : 3 is not included ; 
    // -->  v.erase(v.begin() + 1,v.begin()+3);
    v.erase(v.begin() + 1);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // clear : it remove all the content of the vector ; make the container empty ;


 
    system("pause>0");
    return 0;
}

