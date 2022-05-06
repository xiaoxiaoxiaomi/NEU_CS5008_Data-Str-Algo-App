#include "bookType.cpp"
#include <vector>

void show(const char *msg, vector<bookType> v);

int main() {
  vector<bookType> v;

  string authors1[MAX_NUMBER_OF_AUTHORS];
  int size1 = 0;
  authors1[size1++] = "Randal E. Bryant";
  authors1[size1++] = "David R. O'Hallaron";
  bookType book1("Book1", authors1, "Pearson", "9780134092669", 42.62, 2015, 100000, size1);

  string authors2[MAX_NUMBER_OF_AUTHORS];
  int size2 = 0;
  authors2[size2++] = "James Kurose";
  authors2[size2++] = "Keith Ross";
  bookType book2("Book2", authors2, "Pearson", "9780133594140", 36.68, 2016, 50000, size2);

  string authors3[MAX_NUMBER_OF_AUTHORS];
  int size3 = 0;
  authors3[size3++] = "Thomas H. Cormen";
  bookType book3("Book3", authors3, "MIT Press", "9780262033848", 35.98, 2009, 150000, size3);

  string authors4[MAX_NUMBER_OF_AUTHORS];
  int size4 = 0;
  authors4[size4++] = "Gayle Laakmann McDowell";
  bookType book4("Book4", authors4, "CareerCup", "0984782869", 17.38, 2015, 50000, size4);

  string authors5[MAX_NUMBER_OF_AUTHORS];
  int size5 = 0;
  authors5[size5++] = "Aditya Bhargava";
  bookType book5("Book5", authors5, "Manning", "1617292230", 37.65, 2016, 120000, size5);

  v.push_back(book1);
  v.push_back(book2);
  v.push_back(book3);
  show("The titles of books in vector: ", v);

  v.pop_back();
  show("The titles of books in vector: ", v);

  v.insert(v.begin(), book4);
  v.insert(v.end(), book5);
  show("The titles of books in vector: ", v);

  v.erase(v.begin());
  show("The titles of books in vector: ", v);

  v.clear();

  if (v.empty()) {
    cout << "Vector is now empty" << endl;
  }

  return 0;
}

void show(const char *msg, vector<bookType> v) {
  vector<bookType>::iterator itr;

  cout << msg << endl;
  for (itr=v.begin(); itr != v.end(); itr++)
    cout << itr->getTitle() << " ";
  cout << endl;
}