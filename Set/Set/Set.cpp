// Set.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <set>
#include<vector>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
public:
    Student(int id, string name) {
        this->id = id;
        this->name = name;
    }
    // obligatoire de définir l'operateur < : 
    bool operator < (const Student& s)const {
        return this->id < s.id;
    }
    void print_student()const {
        cout << "[ name = " << this->name << ", id = " << this->id << " ]" << endl;
    }
};

void print_set(set<int> s)
{
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    
    set<int> s = { 10,20,5,10,15,20,4};
    cout << "Size : " << s.size() << endl; 

    s.insert(100); // inserted 
    s.insert(10); // not inserted !!

    cout << "Size : " << s.size()<< endl;
    print_set(s);

    // find(x) return an iterator to the element x if it exists;  
   /* auto it = s.erase(s.find(10));
    cout << "*it => " << *it << endl;
    print_set(s);*/
    int num_erased = s.erase(10);
    cout << "num erased : " << num_erased << endl;
    print_set(s);

    auto ub = s.upper_bound(17); // the borne sup which contains 17 in the set ; 
    cout << "*ub => " << *ub << endl;

    // passing initializer_list : 
    s.insert({ -10,-30,-20 });
    print_set(s);
    // inserting a vector : 
    vector<int> v = { 10,30,55,43,60 };
    s.insert(v.begin(),v.end());
    print_set(s);


    set<Student> stt = { Student(50,"Yassine"),Student(20,"Mehdi") };
    for (auto s : stt)
    {
        s.print_student();
    }
    cout << endl;



    system("pause>0");
}
