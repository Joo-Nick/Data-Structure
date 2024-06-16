#include "LinkedList.h"

int main()
{
	LinkedList list1, list2;
	int hap = 0, cnt = 0;
	
    list1.insert(0, 5);
    list1.insert(1, 10);
    list1.insert(2, 15);
    list1.insert(1, 20);
    list1.insert(3, 15);
    list1.insert(3, 15);
    list1.insert(1, 5);
	list1.insert(2, 20);
    list1.insert(3, 15);
    list1.insert(4, 15);

    hap = list1.calcSum();
	cnt = list1.countNode(15);
	
	list1.showList();
	cout << "hap : " << hap << endl;
	cout << "count 15_node : " << cnt << endl;
	
	list1.reverse();
	cout << "reverse : ";
	list1.showList();
	
	list2.insert(0, 100);
	list2.insert(1, 200);
    list2.insert(2, 150);
	list2.showList();
	
	list1.merge(&list2);
	cout << "merge : ";
	list1.showList();
	
	list1.clear();
	list2.clear();
	
	return 0;
}