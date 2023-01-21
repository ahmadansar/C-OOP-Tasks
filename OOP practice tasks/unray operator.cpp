// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count()  {
	 value = 5;
	}

    // Overload ++ when used as prefix
    Count operator ++ () {
        ++value;
    }
    
    Count operator ++(int){
    	value++;
	}

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1, count2;

    // Call the "void operator ++ ()" function
    count2 = ++count1;
    
    

    count1.display();
    cout<<endl;
    count2.display();

 //int a = 10, b = 0;
//  a = b++; // a = b; // b =  b + 1;
//  a = ++b; // b = b + 1 // a = b;
//  int arr[10];
//  arr[0] = 5;
//  arr[1] = 10;
//  arr[2] = 15;
//  arr[3] = 20;
//  //cout<<arr[b++];// arr[b]; // b = b+1;
//  cout<<arr[++b];
 
    return 0;
}
