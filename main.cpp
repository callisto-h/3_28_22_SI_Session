#include <iostream>
#include "LL.h"
#include "Mem.h"

int main() {
	LL mylist;
	mylist.insert("string1");
	mylist.insert("string2");
	mylist.insert("string3");
	mylist.show();
    mylist.deleteLL();
    mylist.show();

    int fib;
    fib = fib_runner(5);
    /**
     * I consider the fibonacci sequence as 0 indexed:
     * 0th num: 0
     * 1st num: 1
     * 2nd num: 1
     * 3rd num: 2
     * 4th num: 3
     * 5th num: 5
     */

    std::cout << "5th fib num: " << fib << std::endl;
    

}