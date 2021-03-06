#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::setprecision;
using std::string;
using std::streamsize;


int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  cout <<  "Please enter your midterm and final exam grades: ";
  double midterm, final;
  cin >> midterm >> final;

  cout << "Enter all your homework grades followed by EOF";

  int count {0};
  double sum {0};
  double x;
  while (cin >> x) {
    ++count;
    sum += x;
  }

  // find the default stream precision
  streamsize prec = cout.precision();
  cout << "Your final grade is " << setprecision(3) // set stream precision to 3
    << 0.2 * midterm + .4 * final + .4 * sum / count
    << setprecision(prec) << endl; // reset stream precision to default

  return 0;
}
