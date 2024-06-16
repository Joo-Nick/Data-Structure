#include "CircularList.h"

int main() 
{
    CircularList clist;

    clist.insert(0, 10);  
    clist.insert(1, 20);  
    clist.insert(1, 15);  
    clist.insert(3, 25);  
    clist.insert(0, 5);   

    clist.showList(); 

	cout << "pos 0: " << clist.getEntry(0) << endl; 
	cout << "pos 2: " << clist.getEntry(2) << endl; 
	cout << "pos 4: " << clist.getEntry(4) << endl; 
    cout << "Size of the list: " << clist.size() << endl;

    
    Node* removedNode = clist.rmv(2);  
    cout << "removed : " << removedNode -> getData() << endl;
    delete removedNode;    
    
    clist.showList();
    clist.clear();

    return 0;
}
