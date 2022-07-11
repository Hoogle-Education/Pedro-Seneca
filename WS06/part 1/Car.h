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

    std::string extract(std::string &record) {
      size_t start = 0, end = record.find(',');
      std::string extracted = record.substr(start, end - start);
      record.erase(start, end - start + 1);
      
      return  extracted;
    }

  public:
    double topSpeed() { return _topSpeed; }
    std::string condition() { 
      if (_condition == "n") return "new";
      if (_condition == "u") return "used";
      return "broken";
    }

    Car(std::string record)
    {

      std::string tag = extract(record);

      if (tag != "C" || tag != "c") return;
      
      _maker = extract(record);
      _condition = extract(record);
      _topSpeed = std::stod(record);
    }

    void display(std::ostream &file)
    {
      
    }
  };
}

#endif