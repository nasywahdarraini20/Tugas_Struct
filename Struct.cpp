#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    string title;
    string director;
    int year;
  } myFilm1, myFilm2; 

  // Put data into the first structure
  myFilm1.title = "Laskar Pelangi";
  myFilm1.director = "Riri Riza";
  myFilm1.year = 2008;

  // Put data into the second structure
  myFilm2.title = "KKN Desa Penari";
  myFilm2.director = "Awi Suryadi";
  myFilm2.year = 2022;

  // Print the structure members
  cout << myFilm1.title << " " << myFilm1.director << " " << myFilm1.year << "\n";
  cout << myFilm2.title << " " << myFilm2.director << " " << myFilm2.year << "\n";
  return 0;
}

