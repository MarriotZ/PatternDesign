#include "Factory.h"
#include "Product.h"

#include <iostream>

using namespace std;

Factory::Factory()
{
}

Factory::~Factory()
{
}

ConcreateFactory::ConcreateFactory()
{
    cout << "ConcreateFacoty..." << endl;
}

ConcreateFactory::~ConcreateFactory()
{

}

Product * ConcreateFactory::CreateProduct()
{
    return new ConcreateProduct();
}
