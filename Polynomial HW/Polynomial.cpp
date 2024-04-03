#include "Polynomial.h"

int main()
{
	Polynomial a, b, c, d;
    
	a.read();
	b.read();
	
	c.sub(a, b);  

	a.display();
    b.display();
    
	c.trim();
    c.display();

	d.mult(a, b);
	d.display();
    
    return 0;
}