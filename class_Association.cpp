#include<bits/stdc++.h>
using namespace std;

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

int main(){
    manualCar *Tesla = new manualCar();

    Tesla->startEngine();
    Tesla->gearShift();

    delete Tesla;
    return 0;
}