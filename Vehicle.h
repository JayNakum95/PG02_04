#pragma once  
#include <iostream>  
#include <vector>  
using namespace std;  
class Vehicle {  
public:  
   virtual void move() const = 0; 
   virtual ~Vehicle() = default;
};  

// 派生クラス：自動車  
class Car : public Vehicle {
public:
    void move() const override;
};

// 派生クラス：自転車  
class Bicycle : public Vehicle {  
public:  
   void move() const override;
};  

// 派生クラス：電車  
class Train : public Vehicle {  
public:  
   void move() const override;
};  

// 派生クラス：飛行機  
class Airplane : public Vehicle {  
public:  
   void move() const override;
};