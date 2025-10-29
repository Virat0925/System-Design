#include<bits/stdc++.h>
using namespace std;

// Example of Structural Class UML diagram - is-a relation
class Car{
    // private:
    //     string model;
    //     string brand;
    //     int engineCC;
    
    public:
        void startEngine()
        {
            cout << "Engine started!" << endl;
        };
};

class manualCar : public Car{
public:
    void gearShift(){
        cout << "Gear shifted!" << endl;
    };
};

// Example of Structural Class UML diagram  - has-a relation

class Room{
    public:
    void canSleep(){
        cout << "We can Sleep inside" << endl;
    }
};

class Sofa{
    public:
    Room *livingRoom;
    Sofa(){
        livingRoom = new Room();
    }
    void canRest(){
        cout << "Resting" << endl;
    }
};

int main(){

    // Structural Class UML diagram - is - a relation
    manualCar *Tesla = new manualCar();
    Tesla->startEngine();
    Tesla->gearShift();

    // Structural Class UML diagram - has - a relation 
    Sofa *chair = new Sofa();
    chair->canRest();
    chair->livingRoom->canSleep();

  
}

