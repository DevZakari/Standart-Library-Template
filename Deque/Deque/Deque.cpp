// Deque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <deque>
using namespace std;

// deque =>  (push, pop) from both ends ; 

void print_deque(deque<int> d) {
	for (auto it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	deque<int> d = { 1,2,3,4,5 };
	cout << "Size : " <<  d.size() << endl;
	cout << "Third element = " << d[2] << endl;
	cout << "Front : " << d.front() << " Back : " << d.back()<< endl;
	print_deque(d);
	// push_back 
	d.push_back(100);
	d.push_back(200);
	// push_front
	d.push_front(-100);
	d.push_front(-200);
	print_deque(d);

	// pop_back , pop_front 
	d.pop_front();
	d.pop_back();
	print_deque(d);

	d.clear();
	print_deque(d); // empty


	system("pause>0"); 
	return 0;
}

