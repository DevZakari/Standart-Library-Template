// List.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>
using namespace std; 

void print_list(list<int> & ll) {
    for (auto it = ll.begin(); it != ll.end(); it++ ) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> nums = { 1,2,3,4,5 };
    print_list(nums);

    cout << "Size  : " << nums.size() << endl;
    list<int> nums2 = nums;
    print_list(nums2);

    cout << "front : " << nums.front() << ", back : " << nums.back()<< endl;
    cout << boolalpha << nums.empty() << endl;

    cout << *nums.begin() << ", " << *nums.rbegin() << endl;

    // to insert now : 
    auto it = nums.begin();
    while (*it != 3 && it != nums.end()) it++;
    nums.insert(it, 100);
    print_list(nums);
    // erase : 
    nums.erase(it);
    print_list(nums);
    // remove : 
    nums.remove(4);
    print_list(nums);

    // clear :
    nums.clear();
    cout << boolalpha << nums.empty()<< endl; 

    // push_back() ,push_front() : 
    nums2.push_back(100);
    nums2.push_front(-100);
    print_list(nums2);

    // pop_front() ,pop_back();
    nums2.pop_back();
    nums2.pop_front();
    print_list(nums2);


    system("pause>0");
    return 0;
}

