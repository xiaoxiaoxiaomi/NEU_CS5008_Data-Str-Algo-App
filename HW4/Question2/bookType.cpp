#include "bookType.h"
#include <iostream>

bookType::bookType() {
  title = "";
  for (int i=0; i < MAX_NUMBER_OF_AUTHORS; i++) {
    authors[i] = "";
  }
  publisher = "";
  ISBN = "";
  price = 0.0;
  yearOfPublication = 0;
  numberOfCopies = 0;
  numberOfAuthors = 0;
}

bookType::bookType(string title, string authors[], string publisher, string ISBN, double price, int yearOfPublication, int numberOfCopies, int numberOfAuthors) {
  this->title = title;
  for (int i=0; i < numberOfAuthors; i++) {
    this->authors[i] = authors[i];
  }
  this->numberOfAuthors = numberOfAuthors;
  this->publisher = publisher;
  this->ISBN = ISBN;
  this->price = price;
  this->yearOfPublication = yearOfPublication;
  this->numberOfCopies = numberOfCopies;
}

// ############### Show functions ###############

void bookType::showTitle() const {
  cout << "Title: " << this->title << endl;
}

void bookType::showAuthors() const {
  cout << "Author(s): ";
  int i=0;
  for (; i < this->numberOfAuthors-1; i++) {
    cout << this->authors[i] << ", ";
  }
  cout << this->authors[i] << endl;
}

void bookType::showPublisher() const {
  cout << "Publisher: " << this->publisher << endl;
}

void bookType::showISBN() const {
  cout << "ISBN: " << this->ISBN << endl;
}

void bookType::showPrice() const {
  cout << "Price: " << this->price << endl;
}

void bookType::showYearOfPublication() const {
  cout << "Year of publication: " << this->yearOfPublication << endl;
}

void bookType::showNumberOfCopies() const {
  cout << "Number of copies: " << this->numberOfCopies << endl;
}

void bookType::showNumberOfAuthors() const {
  cout << "Number of authors: " << this->numberOfAuthors << endl;
}

void bookType::showBookInfo() const {
  showTitle();
  showAuthors();
  showPublisher();
  showISBN();
  showPrice();
  showYearOfPublication();
  showNumberOfCopies();
  showNumberOfAuthors();
}

// ############### Getters ###############

string bookType::getTitle() const {
  return this->title;
}

string * bookType::getAuthors() {
  return this->authors;
}

string bookType::getPublisher() const {
  return this->publisher;
}

string bookType::getISBN() const {
  return this->ISBN;
}

double bookType::getPrice() const {
  return this->price;
}

int bookType::getYearOfPublication() const {
  return this->yearOfPublication;
}

int bookType::getNumberOfCopies() const {
  return this->numberOfCopies;
}

int bookType::getNumberOfAuthors() const {
  return this->numberOfAuthors;
}

// ############### Setters ###############

void bookType::setTitle(string title) {
  this->title = title;
}

void bookType::setAuthors(string authors[], int numberOfAuthors) {
  for (int i=0; i < MAX_NUMBER_OF_AUTHORS; i++) {
    this->authors[i] = "";
  }
  for (int i=0; i < numberOfAuthors; i++) {
    this->authors[i] = authors[i];
  }
  this->numberOfAuthors = numberOfAuthors;
}

void bookType::setPublisher(string publisher) {
  this->publisher = publisher;
}

void bookType::setISBN(string ISBN) {
  this->ISBN = ISBN;
}

void bookType::setPrice(double price) {
  this->price = price;
}

void bookType::setYearOfPublication(int year) {
  this->yearOfPublication = year;
}

void bookType::setNumberOfCopies(int numberOfCopies) {
  this->numberOfCopies = numberOfCopies;
}

void bookType::setBookInfo(string title, string authors[], string publisher, string ISBN, double price, int yearOfPublication, int numberOfCopies, int numberOfAuthors) {
  this->title = title;
  for (int i=0; i < numberOfAuthors; i++) {
    this->authors[i] = authors[i];
  }
  this->numberOfAuthors = numberOfAuthors;
  this->publisher = publisher;
  this->ISBN = ISBN;
  this->price = price;
  this->yearOfPublication = yearOfPublication;
  this->numberOfCopies = numberOfCopies;
}

// ############### Check functions ###############

bool bookType::checkNumberOfCopies(int numberOfCopies) {
  return this->numberOfCopies == numberOfCopies;
}

bool bookType::checkNumberOfAuthors(int numberOfAuthors) {
  return this->numberOfAuthors == numberOfAuthors;
}

bool bookType::checkTitle(string title) {
  return this->title == title;
}

bool bookType::checkPublisher(string publisher) {
  return this->publisher == publisher;
}

bool bookType::checkISBN(string ISBN) {
  return this->ISBN == ISBN;
}

bool bookType::checkPrice(double price) {
  return this->price == price;
}

bool bookType::checkYearOfPublication(int year) {
  return this->yearOfPublication == year;
}

// ############### Update functions ###############

void bookType::updatePrice(double price) {
  this->price += price;
}

void bookType::updateYearOfPublication(int year) {
  this->yearOfPublication += year;
}

void bookType::updateNumberOfCopies(int numberOfCopies) {
  this->numberOfCopies += numberOfCopies;
}

bookType::~bookType() {
}