#include <iostream>

using namespace std;

class Animal {
    public:
        virtual void fazerRuido()=0;
        virtual void comer()=0;

        void dormir() {
            cout << "Dormir" << endl;
        }
};

class Canino : public Animal {
    public:
        virtual void passear()=0;
};

class Cachorro : public Canino {

    void fazerRuido() {
        cout << "Latir" << endl;
    } 
    void comer() {
        cout << "Comer" << endl;
    } 
    void passear() {
        cout << "Passear" << endl;
    } 
};

int main() {
    Cachorro c = Cachorro();

    cout << "Cachorro criado" << endl;
}