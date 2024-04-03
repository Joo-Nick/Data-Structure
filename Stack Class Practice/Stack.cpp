#include "Stack.h"

int main()
{
	stack test;
	int item = 0;
	
	test.push(1);
	test.push(2);
	test.push(3);
	test.display();
	
	item = test.peek();
	cout << "item = " << item << endl;
	
	item = test.pop();
	test.display();
	
	item = test.pop();
	test.display();
	
	item = test.pop();
	test.display();
	
	item = test.pop();
	
	for (int i = 0; i < 6; i++)
		test.push(i);
	test.display();
	
	test.push(15);
	
	return 0;
}

// int main() 
// {
//    stack test;
//    test.push(1);
//    test.push(2);
//    test.push(3);

// cout << test.peek(); 
//     return 0;
// }
