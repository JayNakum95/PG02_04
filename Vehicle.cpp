#include "Vehicle.h"
#include <iostream>
using namespace std;

// Car の move 実装
void Car::move() const {
    cout << "自動車：道路を走ります。" << endl;
}

// Bicycle の move 実装
void Bicycle::move() const {
    cout << "自転車：ペダルをこいで進みます。" << endl;
}

// Train の move 実装
void Train::move() const {
    cout << "電車：線路上を走行します。" << endl;
}

// Airplane の move 実装
void Airplane::move() const {
    cout << "飛行機：空を飛びます。" << endl;
}
