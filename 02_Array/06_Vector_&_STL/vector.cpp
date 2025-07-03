#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // // ! STL : It is a generalised libarary o that it can be used with almost every data type without repeating the implementation code.

    // // ? Vector : Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

    // // ?In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

    // // ! Declaration of Vector
    // // ? vector(data_type) name (size_of_vector);

    // // Default value to Vector
    // // ? vector(data_type) name (size_of_vector, default_value);
    // vector<int> a(4, 0);

    // // ? Inserting elements in a vector manually
    // a.push_back(1);
    // a.push_back(12);
    // a.push_back(123);
    // a.push_back(1234);
    // a.push_back(12345);
    // a.push_back(123456);
    // a.push_back(1234567);
    // // The "push_back" values are appended to the end of the vector after the 4 default 0s.

    // vector<int> v1(6, 2);

    // // ? Other ways to declare the vector
    // vector<int> temp = {2, 5, 6, 5, 9};

    // // ? Size of Vector 'a'
    // // cout << a.size() << endl; // 11

    // // ? Capacity of Vector 'a'
    // // cout << a.capacity() << endl; // 11

    // // ? Size of Vector 'v1'
    // cout << v1.size() << endl; // 6

    // // ? Capacity of Vector 'v1'
    // cout << v1.capacity() << endl; // 6

    // v1.push_back(8);

    // // ? Size of Vector 'v1'
    // cout << v1.size() << endl; // 7 (Previous + 1)

    // // ? Capacity of Vector 'v1'
    // cout << v1.capacity() << endl; // 12 (2 * Previous)
    
    // // ? Updating value
    // a[2] = 6;

    // // ? Another way to initialize vector
    // vector<int> v3 = {1, 2, 3, 4, 5, 6 ,7 ,8 ,9 ,10};

    // // ! Deleting Value form a vector
    // // Removing the last element, 'pop_back()' method.
    // // a.pop_back();
    // // a.pop_back();
    // // a.pop_back();

    // // Removing element at specified position
    // a.erase(a.begin() + 4); // Removing element at index 4

    // // Inserting element at specific position
    // a.insert(a.begin() + 4, 7); // Inserting element at index 4

    // // Updating value from a vector
    // a[2] = 68; // Updated value to '68' at index 2.

    // // Clearing all the elememnts in an array.
    // a.clear();

    // // ? Size of Vector 'a'
    // cout << a.size() << endl; // 0

    // // ? Capacity of Vector 'a'
    // cout << a.capacity() << endl; // 16

    // // ? Printing elements in a vector
    // for (int i = 0; i < a.size(); i++)
    // cout << a[i] << ", ";

    vector<int> newarr = {5, 6, 2, 8, 9};

    // // ? Printing first element
    // cout << newarr[0] << endl; // 5
    // cout << newarr.front() << endl; // 5
    // // ? Printing first element
    // cout << newarr[newarr.size() - 1] << endl; // 9
    // cout << newarr.back() << endl; // 9

    // ? Copy Value of one vector into another vector
    vector<int> temp;
    temp = newarr;

    // ? Printing elements in a vector with the helps of inbuilt functions
    // cout << "newarr : ";
    // for(auto it = newarr.begin(); it != newarr.end();it++)
    // cout << *it << " ";

    // Another method
    // cout << "newarr : ";
    // for(auto i: newarr)
    // cout << i << " ";

    // ? Sorting values in increasing order
    sort(newarr.begin(), newarr.end());
    // Printing elements in array
    cout << "newarr : ";
    for(auto i: newarr)
    cout << i << " ";
    cout << endl;

    // ? Sorting values in decreasing order
    // sort(newarr.begin(), newarr.end(), greater<int>());
    // or
    // sort(newarr.rbegin(), newarr.rend());

    // Printing elements in array
    // cout << "newarr : ";
    // for(auto i: newarr)
    // cout << i << " ";

    // Output
    // newarr : 2 5 6 8 9 
    // newarr : 9 8 6 5 2

    // ? Searching element in array through binary_search
    cout << binary_search(newarr.begin(), newarr.end(), 6) << endl; // "1" if element is present, else "0"

    // ? Getting index of element in a vector
    cout << find(newarr.begin(), newarr.end(), 8) - newarr.begin() << endl; // "3" : Index of 8
}