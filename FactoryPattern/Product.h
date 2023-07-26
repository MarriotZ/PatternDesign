/*------------------------------------------------------------------------------

 * @FILE    PRODUCT.H
 * @AUTHOR  MAX TSANG
 * @EMAIL   ZIHANTSANG@HOTMAIL.COM
 * @DATE    2023/07/23 14:22:18
 * @BRIEF   PATTERN DESIGN

------------------------------------------------------------------------------*/

#ifndef __PRODUCT_H
#define __PRODUCT_H

class Product
{
public:
    virtual ~Product() = 0;

protected:
    Product();

private:
};

class ConcreateProduct : public Product
{
    public:
    ~ConcreateProduct();
    
    ConcreateProduct();

    protected:

    private:

};

#endif
