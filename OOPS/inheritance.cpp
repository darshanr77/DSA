#include<iostream>
using namespace std;

// inheritance demo

class Animal{
  public:

    string name;
    void eat(){
        cout << "animal eats food...\n";
    }
    void breathe(){
        cout << "animals breathing...\n";
    }
};

class Fish : public Animal{  // for  inheriting or accessing the properties of Animal by default it will be private so we write public

    public:

    int fins;
    void swim(){
        cout << "fins are swimming" << endl;
    }

};

int main (){

    Fish shark;

    shark.fins = 10;
    cout << shark.fins << endl;

    shark.swim();
    shark.eat();
    shark.breathe();

    return 0;
}