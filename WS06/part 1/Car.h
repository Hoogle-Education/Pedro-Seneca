// Workshop 6 - STL Containers
// 2020/02/26 - Cornel

#ifndef SDDS_CAR_H
#define SDDS_CAR_H
#include <iostream>
#include <string>
#include <cstring>
#include "Vehicle.h"

namespace sdds
{
  class Car : public Vehicle
  {
  private:
    std::string _maker;
    std::string _condition;
    double _topSpeed;

  public:
    double topSpeed() { return _topSpeed; }
    std::string condition() { return _condition; }

    Car(std::string record)
    {
      std::string data[4];

      size_t start = 0;
      size_t end = record.find(',') - 1;
      std::string tag = record.substr(start, end);

      if (tag != "C" || tag != "c") return;
      
      

    }

    void display(std::ostream &)
    {
    }
  };
}

#endif