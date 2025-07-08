#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1;
    list<int> l2(5, 100);
    list<int> l3(l2.begin(), l2.end());
    list<int> l4(l3);

    int front = l1.front();
    int back = l1.back();

    l1.push_front(10);
    l1.push_back(20);

    for (auto l : l1)
    {
        cout << l << " ";
    }

    auto it = l1.begin();
    l1.insert(it, 30);
    l1.erase(it);

    l1.sort();
    l1.sort(greater<int>()); // sort in reverse

    l1.reverse();

    cout << "l1 size: " << l1.size() << endl;
}