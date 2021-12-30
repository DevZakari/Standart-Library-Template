// Priority_Queue.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std; 


int main()
{

    //priority_queue<int> Q;
    //// priority_queue by default takes the highest element of the vector 
    //// and store it ; less
    //vector<int> v = { 8,1,6,4,0,3,9 };
    //for (int x : v)
    //{
    //    Q.push(x);
    //}
    //while (!Q.empty())
    //{
    //    cout << Q.top() << " ";
    //    Q.pop();
    //}
    //cout << endl;
    

    // let's now define our priority ; 
    /*
    priority_queue<int, vector<int>, greater<int>> Q;
    vector<int> v = { 8,1,6,4,0,3,9 };
    for (int x : v)
    {
        Q.push(x);
    }
    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }
    cout << endl;
    */

    // too define our we do : like this  :
    auto cmp = [](int a, int b)
    {
        // less
        return a < b;
    };
    priority_queue<int, vector<int>, decltype(cmp)> Q(cmp);
    vector<int> v = { 3,5,0,-1,7,-2 };
    for (int i : v)
    {
        Q.push(i);
    }
    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }



    cout << endl;
    system("pause>0");
}

