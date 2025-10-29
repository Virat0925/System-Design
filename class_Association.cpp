#include<bits/stdc++.h>
using namespace std;

// Example of Structural Class UML diagram
class Car{
    private:
        string model;
        string brand;
        int engineCC;
    
    public:
        void startEngine()
        {
            cout << "Engine started!" << endl;
        };
};

class manualCar : public Car{
public:
    void gearShift()
    {
        cout << "Gear shifted!" << endl;
    };
};

// Example of Structural Class UML diagram

class Room{

    public:

    void canSleep(){
        cout << "We can Sleep inside" << endl;
    }
};

class Sofa{

    Room *livingRoom;

    Sofa(){
        livingRoom = new Room;
    }

    void canRest(){
        cout << "Resting" << endl;
    }
};

int main(){
    manualCar *Tesla = new manualCar();

    Tesla->startEngine();
    Tesla->gearShift();

    Sofa *chair = new Sofa;

    

    delete Tesla;
    return 0;
}

