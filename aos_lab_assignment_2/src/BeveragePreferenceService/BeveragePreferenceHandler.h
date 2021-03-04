#ifndef VENDING_MACHINE_MICROSERVICES_BEVERAGEPREFERENCEHANDLER_H
#define VENDING_MACHINE_MICROSERVICES_BEVERAGEPREFERENCEHANDLER_H

#include <iostream>
#include <string>
#include <regex>
#include <future>

#include "../../gen-cpp/BeveragePreferenceService.h"

#include "../ClientPool.h"
#include "../ThriftClient.h"
#include "../logger.h"

namespace vending_machine{

class BeveragePreferenceServiceHandler : virtual public BeveragePreferenceServiceIf {
public:
	BeveragePreferenceServiceHandler();
	~BeveragePreferenceServiceHandler() override=default;
	Beverages::type GetBeverage(const BeverageType::type btype) override;
};

// Constructor
BeveragePreferenceServiceHandler::BeveragePreferenceServiceHandler(){
}

Beverages::type BeveragePreferenceServiceHandler::GetBeverage(const BeverageType::type btype){
if(btype == BeverageType::type::COLD){
int m = rand()%3;
if (m == 0)
	return (Beverages::type::lemonade);
else if(m == 1)
	 return (Beverages::type::icetea);
else
	 return (Beverages::type::soda);
}
else{

int m = rand()%3;
if (m == 0)
	        return (Beverages::type::cappuccino);
else if(m == 1)
	         return (Beverages::type::latte);
else
	         return (Beverages::type::espresso);
}
}
}
#endif //VENDING_MACHINE_MICROSERVICES_WEATHERHANDLER_H
