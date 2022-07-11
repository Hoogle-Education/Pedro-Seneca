#ifndef SDDS_AUTOSHOP_H
#define SDDS_AUTOSHOP_H
#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"
#include "Car.h"

namespace sdds
{
	class Autoshop {
    private:
      std::vector <Vehicle*> m_vehicles;
    public:
      Autoshop& operator +=(Vehicle* theVehicle) {

      }

      void display(std::ostream& out) const{

      }
  };
}

#endif