#include "Polynomial.h"

int main(void)
{
	Polynomial a, b, c; 	// A 다항식 B 다항식 C 다항식 존재 C=A+B
	
	a.read();	
	b.read();
	c.add(a, b);
	
	a.display();
	b.display();
	c.display();
	
	return 0;
}