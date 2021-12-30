// Templates.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
using namespace std;


                        /// 1 : Template Functions  ///

// let's make a template :
// this template is for same dataType;
template<class T>
T add(T a, T b) {
    return a + b;
}
// this template is for different dataType ; 
template<class U,class T>
U add(T a, U b)
{
    return a + b;
}
// we can overload many of funtions ; 
int add(int a, int b) {
    return a + b; 
}



                    /// 2 : Template class  ///


template<class T>
class Foo {

    private: 
        T x;
        T y;
    public:
        Foo(T x,T y);
        void print()const;
    protected: T Double()const;
};

template<class T>
class Bar : public Foo<T> {
    public:
        Bar(T x, T y);
        T getDouble()const;
};



int main()
{
    // calling a template function : 
    float x = add(4 , 3.5);
    cout << x << endl; 

    char str = add(4, 'c');
    cout << str << endl; 

    // calling a class template : 
    Foo<double> f1(3.3,2.5);
    Foo<string>* f2 = new Foo<string>("Zakaria", " Machtor");
    f1.print();
    f2->print();

    Bar<int> b1(3, 4);
    cout << endl << "Le double est : "<< b1.getDouble();

    
    system("pause>0");
}

template<class T>
Foo<T>::Foo(T x, T y)
{
    this->x = x;
    this->y = y;
}

template<class T>
void Foo<T>::print() const
{
    cout << "Les valeurs de x et y vaut : " << this->x << ", " << this->y << endl;
}

template<class T>
T Foo<T>::Double() const
{
    return T(this->x*this->y);
}

template<class T>
Bar<T>::Bar(T x, T y):Foo<T>(x,y)
{

}

template<class T>
T Bar<T>::getDouble() const
{
    return this->Foo<T>::Double();
}
