// UnorderedSet (HashTables).cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <functional>
#include <unordered_set>
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
    // obligatoire si vous travailler avec unordererd set 
    bool operator == (const Student& s)const {
        return (this->id == s.id && this->name == s.name);
    }
    void print_student()const {
        cout << "[id = " << this->id << " , name = " << this->name << " ]" << endl;
    }
    friend class StudentHashFunction;
};
// oligatoire aussi : 
class StudentHashFunction {
    public:size_t operator()(const Student& s) const {
        return (hash<int>{}(s.id) + hash<string>{}(s.name));
    }
};

int main()
{
    /*
    size_t h1 = hash<string>{}("hello");
    size_t h2 = hash<string>{}("World");
    cout << h1 << " , " << h2 << endl;
    cout << hash<int>{}(100)<< endl;
    cout << hash<float>{}(100.5) << endl;
    */

    unordered_set<int> us = { 5,10,4,20,5,21,15 };
    for (int x : us)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Size : " << us.size() << endl;
    cout << " count(5) =  " << us.count(5) << endl;
    cout << "num erased : " << us.erase(5) << endl;
    cout << boolalpha << (us.find(16) != us.end()) << endl;
    cout << "num buckets = " << us.bucket_count() << endl;
    cout << "load factor = " << us.load_factor() << endl;

    unordered_set<Student, StudentHashFunction> us_s = { Student(10,"Zakaria"),Student(20,"Mehdi") };
    for (auto i : us_s)
    {
        i.print_student();
    }
    cout << endl;
    // en cas de unordered multilist : 
     // -> there is a function called u_ms.equal_range(x);
     // -> return all the element x in the unordered multiset ;
     /*
      by this for : 
      auto its = u_ms.equal_range(x);
      for(auto it = its.first; it!=its.second; it++ )
      {
        cout << *it << " ";
      }
     */



    system("pause>0");
}

