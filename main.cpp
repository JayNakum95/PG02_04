#include <iostream>
#include <vector>
#include "Vehicle.h"
using namespace std;

// 抽象クラス（乗り物の基本クラス）


int main() {
    vector<Vehicle*> vehicles;

    vehicles.push_back(new Car());
    vehicles.push_back(new Bicycle());
    vehicles.push_back(new Train());
	vehicles.push_back(new Airplane());
    for (Vehicle* vehicle : vehicles) {
        vehicle->move(); // ポリモーフィズム：同じ関数が異なる動作
    }

    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
