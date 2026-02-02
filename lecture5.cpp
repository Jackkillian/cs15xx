#include <iostream>
#include <string>
using namespace std;

const char VALUE[] = "test";
const string STRING = "another";

void read_into_string_var(string prompt, string *var) {
  cout << prompt << endl;
  cin >> *var;
}

int main() {
  bool myBool = -300;
  cout << "Value: " << myBool << endl;
  int myInt = myBool;
  cout << "Value as int: " << myInt << endl;

  // use `const` for constants
  const int magicNumber = 42;
  // magicNumber = 23;

  cout << magicNumber << endl;
  cout << VALUE << endl;
  cout << STRING << endl;

  // conversion
  int value = 74;
  char converted = static_cast<char>(value);
  cout << "New val: '" << converted << "'" << endl;

  // overflows int type
  float value2 = 8230581501512;
  cout << "New val: '" << static_cast<int>(value2) << "'"
       << endl; // New val: '2147483647'

  float value3 = 83;
  cout << "New val: '" << static_cast<int>(value3) << "'" << endl;

  // playing around with pointers because this class is slow and i'm bored
  string input;
  read_into_string_var("Enter a value:", &input);
  cout << "You entered: " << input << endl;

  return 0;
}
