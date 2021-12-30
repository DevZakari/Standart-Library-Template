// Map.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;
// contains key-value : key is unique and sorted ; 

void print_map(map<int, string> m)
{
    for (auto s : m)
    {
        cout << s.first << " " << s.second << endl;
    }
    cout << endl;
}
int main()
{
    map<int, string> m = { {10,"cat"},{1,"dog"},{5,"bat"} };
    cout << "Size : " << m.size() << endl;
    m.insert({ 100,"rabbit" });
    m.insert({ 10,"fish" });
    print_map(m);
    
    // erase an element by funtion find(key)
    auto it = m.erase(m.find(10));
    cout << "it->first = " << it->first << endl;
    print_map(m);
    // or : num_erased : 0 or 1 ;
    int num_erased = m.erase(100);
    cout << "num_erased = " << num_erased << endl;
    print_map(m);
    
    // inserting intializer_list
    m.insert({ {-10,"apple"},{-30,"orange"},{-20,"mango"} });
    print_map(m);
    
    // inserting another map :
    map<int, string> m2 = { {11,"arnab"},{2,"dagaga"},{6,"much"} };
    m.insert(m2.begin(), m2.end());
    print_map(m);


    system("pause>0");
}
