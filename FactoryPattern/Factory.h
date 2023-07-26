/*------------------------------------------------------------------------------

 * @FILE    FACTORY.H
 * @AUTHOR  MAX TSANG
 * @EMAIL   ZIHANTSANG@HOTMAIL.COM
 * @DATE    2023/07/23 14:40:52
 * @BRIEF   PATTERN DESIGN

------------------------------------------------------------------------------*/

#ifndef __FACTORY_H
#define __FACTORY_H

#include "Product.h"

class Factory
{
public:
    virtual ~Factory() = 0;

    virtual Product *CreateProduct() = 0;

protected:
    Factory();

private:
};

class ConcreateFactory : public Factory
{
public:
    ~ConcreateFactory();

    ConcreateFactory();

    Product *CreateProduct();

protected:

private:

};

#endif
