#include "bookType.cpp"

const int BOOK_LIST_CAPACITY = 100;

void searchBookByTitle(string bookTitle, int bookListSize, bookType bookList[]);

void searchBookByISBN(string bookISBN, int bookListSize, bookType bookList[]);

void updateNumberOfCopies(string bookTitle, int num, int numberOfCopies, bookType bookList[]);

int main() {
  bookType bookList[BOOK_LIST_CAPACITY];

  string authors1[MAX_NUMBER_OF_AUTHORS];
  int size1 = 0;
  authors1[size1++] = "Randal E. Bryant";
  authors1[size1++] = "David R. O'Hallaron";
  bookType book1("Computer Systems: A Programmer's Perspective", authors1, "Pearson", "9780134092669", 42.62, 2015, 100000, size1);

  string authors2[MAX_NUMBER_OF_AUTHORS];
  int size2 = 0;
  authors2[size2++] = "James Kurose";
  authors2[size2++] = "Keith Ross";
  bookType book2("Computer Networking: A Top-down Approach", authors2, "Pearson", "9780133594140", 36.68, 2016, 50000, size2);

  string authors3[MAX_NUMBER_OF_AUTHORS];
  int size3 = 0;
  authors3[size3++] = "Thomas H. Cormen";
  bookType book3("Introduction to Algorithms", authors3, "MIT Press", "9780262033848", 35.98, 2009, 150000, size3);

  string authors4[MAX_NUMBER_OF_AUTHORS];
  int size4 = 0;
  authors4[size4++] = "Gayle Laakmann McDowell";
  bookType book4("Cracking the Coding Interview", authors4, "CareerCup", "0984782869", 17.38, 2015, 50000, size4);

  string authors5[MAX_NUMBER_OF_AUTHORS];
  int size5 = 0;
  authors5[size5++] = "Aditya Bhargava";
  bookType book5("Grokking Algorithms", authors5, "Manning", "1617292230", 37.65, 2016, 120000, size5);

  int bookListSize = 0;
  bookList[bookListSize++] = book1;
  bookList[bookListSize++] = book2;
  bookList[bookListSize++] = book3;
  bookList[bookListSize++] = book4;
  bookList[bookListSize++] = book5;

  cout << "############### Search for a book by its title ###############" << endl;
  string bookTitle;
  cout << "Enter a book's title: ";
  getline(cin, bookTitle);
  searchBookByTitle(bookTitle, bookListSize, bookList);

  cout << "############### Search for a book by its ISBN ###############" << endl;
  string bookISBN;
  cout << "Enter a book's ISBN: ";
  cin >> bookISBN;
  searchBookByISBN(bookISBN, bookListSize, bookList);

  cout << "############### Update the number of copies of a book ###############" << endl;
  cout << "Enter the name of the book which you want to update its number of copies: ";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, bookTitle);
  int numberOfCopies;
  cout << "Enter the new number of copies: ";
  cin >> numberOfCopies;
  updateNumberOfCopies(bookTitle, numberOfCopies, bookListSize, bookList);

  cout << "############### Test getters ###############" << endl;
  cout << book1.getTitle() << endl;
  cout << "Author(s): ";
  int i=0;
  for (; i < book2.getNumberOfAuthors()-1; i++) {
    cout << book2.getAuthors()[i] << ", ";
  }
  cout << book2.getAuthors()[i] << endl;
  cout << book3.getPublisher() << endl;
  cout << book4.getISBN() << endl;
  cout << book5.getPrice() << endl;
  cout << book1.getYearOfPublication() << endl;
  cout << book2.getNumberOfCopies() << endl;
  cout << book3.getNumberOfAuthors() << endl;

  cout << "############### Test setters and show functions ###############" << endl;
  book1.setTitle("New Title");
  book1.showTitle();
  book2.setAuthors(authors3, size3);
  book2.showAuthors();
  book3.setPublisher("New Publisher");
  book3.showPublisher();
  book4.setISBN("0000000000");
  book4.showISBN();
  book5.setPrice(40.0);
  book5.showPrice();
  book1.setYearOfPublication(2022);
  book1.showYearOfPublication();
  book2.setNumberOfCopies(80000);
  book2.showNumberOfCopies();
  book3.showNumberOfAuthors();
  book4.setBookInfo("Grokking Algorithms", authors5, "Manning", "1617292230", 37.65, 2016, 120000, size5);
  book4.showBookInfo();

  cout << "############### Test check functions ###############" << endl;
  cout << book1.checkTitle("New Title") << " " << book1.checkTitle("Computer Systems: A Programmer's Perspective") << endl;
  cout << book3.checkPublisher("New Publisher") << " " << book3.checkPublisher("Introduction to Algorithms") << endl;
  cout << book4.checkISBN("1617292230") << " " << book4.checkISBN("0984782869") << endl;
  cout << book5.checkPrice(40.0) << " " << book5.checkPrice(37.65) << endl;
  cout << book1.checkYearOfPublication(2022) << " " << book1.checkYearOfPublication(2021) << endl;
  cout << book2.checkNumberOfCopies(80000) << " " << book2.checkNumberOfCopies(50000) << endl;
  cout << book3.checkNumberOfAuthors(1) << " " << book3.checkNumberOfAuthors(2) << endl;

  cout << "############### Test update functions ###############" << endl;
  book5.updatePrice(-5.0);
  book5.showPrice();
  book1.updateYearOfPublication(-1);
  book1.showYearOfPublication();
  book2.updateNumberOfCopies(-20000);
  book2.showNumberOfCopies();

  return 0;
}

void searchBookByTitle(string bookTitle, int bookListSize, bookType bookList[]) {
  int i = 0;
  for (; i < bookListSize; i++) {
    if (bookList[i].getTitle() == bookTitle) {
      cout << "Found it" << endl;
      bookList[i].showBookInfo();
      break;
    }
  }
  if (i == bookListSize) {
    cout << "Not Found" << endl;
  }
}

void searchBookByISBN(string bookISBN, int bookListSize, bookType bookList[]) {
  int i = 0;
  for (;i < bookListSize; i++) {
    if (bookList[i].getISBN() == bookISBN) {
      cout << "Found it" << endl;
      bookList[i].showBookInfo();
      break;
    }
  }
  if (i == bookListSize) {
    cout << "Not Found" << endl;
  }
}

void updateNumberOfCopies(string bookTitle, int numberOfCopies, int bookListSize, bookType bookList[]) {
  int i=0;
  for (;i < bookListSize; i++) {
    if (bookList[i].getTitle() == bookTitle) {
      bookList[i].setNumberOfCopies(numberOfCopies);
      bookList[i].showNumberOfCopies();
      break;
    }
  }
}