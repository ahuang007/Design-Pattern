
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class  Product{
public:
	Product();
	~Product();
	void ProducePart();
};

class ProductPart{
public:
	ProductPart();
	~ProductPart();
	ProductPart* BuildPart();
};

#endif //_PRODUCT_H_