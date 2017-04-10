#include "LinkedList.h"

using namespace std;
int main() {
    LinkedList<int> x;                  x.print();
    x.push_front(1);                    x.print();
    x.push_front(5);                    x.print();
    x.push_front(5);                    x.print();
    x.push_back(5);                     x.print();
    x.push_back(1);                     x.print();
    x.replace(x.search(1), 10);         x.print();
    x.replace(5, 10);                   x.print();
    x.replace(1, 10);                   x.print();
    x.replace(5, 10);                   x.print();
    x.replace(x.search(5), 10);         x.print();
    x.replaceAll(10, 7);                x.print();
    x.push_back(5);                     x.print();
    x.insert_after(80, x.search(5));    x.print();
    x.insert(70, x.search(5));          x.print();
    x.insert_after(20, x.search(7));    x.print();
    x.insert(10, x.begin());            x.print();
    x.insert_after(30, x.begin());      x.print();
    x.replace(7,30);                    x.print();
    x.replaceAll(7,30);                 x.print();
    x.deleteX(10);                      x.print();
    x.deleteX(x.search(70));            x.print();
    x.deleteAllX(30);                   x.print();
    x.pop_back();                       x.print();
    x.pop_front();                      x.print();
    x.pop_front();                      x.print(); //empty now
    x.pop_back();                       x.print();
    x.push_back(37);                    x.print();
    x.push_front(13);                   x.print();
    x.push_front(18);                   x.print();
    x.erase(x.search(18));              x.print();
    x.push_back(40);
    x.push_back(30);
    x.push_back(20);
    x.push_back(10);
    cout << "Print Using Iterators: ";
    for (LinkedList<int>::iterator i = x.begin(); i != x.end() ; ++i) {
            cout << *i << " ";
    }
    //////////////////////////////////////////
    cout << "\nLS Using constructor: ";
    LinkedList<string> c("string", 12);
    for (LinkedList<string>::iterator i = c.begin(); i != c.end() ; ++i) {
        cout << *i << " ";
    }
    return 0;
}