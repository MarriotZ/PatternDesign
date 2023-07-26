#include "Factory.h"
#include "Product.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Factory *fac = new ConcreateFactory();

    Product *p = fac->CreateProduct();

    return 0;
}