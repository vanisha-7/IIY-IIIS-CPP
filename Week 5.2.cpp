#include <iostream>
using namespace std;
class Rectangle {
private:
 int length;
 int width;
public:
// Default constructor
 Rectangle() {
 length = 0;
 width = 0;
 cout << "Default constructor called." << endl;
 }
 // Constructor with one parameter
 Rectangle(int l) {
 length = l;
  width = l; // making it a square
 cout << "Single-parameter constructor called." << endl;
 }
 // Constructor with two parameters
 Rectangle(int l, int w) {
 length = l;
 width = w;
 cout << "Two-parameter constructor called." << endl;
 }
 void area() {
 cout << "Area: " << (length * width) << endl;
 }
};
int main() {
 Rectangle r1; // Calls default constructor
 r1.area();
 Rectangle r2(5); // Calls single-parameter constructor
 r2.area();
 Rectangle r3(4, 6); // Calls two-parameter constructor
 r3.area();
 return 0;
}
