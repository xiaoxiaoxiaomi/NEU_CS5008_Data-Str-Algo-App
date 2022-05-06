#ifndef BOOKTYPE_H
#define BOOKTYPE_H

#pragma once

#include <string>

using namespace std;

const int MAX_NUMBER_OF_AUTHORS = 4;

class bookType {

public:
  bookType();
  bookType(string title, string authors[], string publisher, string ISBN, double price, int yearOfPublication, int numberOfCopies, int numberOfAuthors);

  void showTitle() const;
  void showAuthors() const;
  void showPublisher() const;
  void showISBN() const;
  void showPrice() const;
  void showYearOfPublication() const;
  void showNumberOfCopies() const;
  void showNumberOfAuthors() const;
  void showBookInfo() const;

  string getTitle() const;
  string * getAuthors();
  string getPublisher() const;
  string getISBN() const;
  double getPrice() const;
  int getYearOfPublication() const;
  int getNumberOfCopies() const;
  int getNumberOfAuthors() const;

  void setTitle(string title);
  void setAuthors(string authors[], int numberOfAuthors);
  void setPublisher(string publisher);
  void setISBN(string ISBN);
  void setPrice(double price);
  void setYearOfPublication(int year);
  void setNumberOfCopies(int numberOfCopies);
  void setBookInfo(string title, string authors[], string publisher, string ISBN, double price, int yearOfPublication, int numberOfCopies, int numberOfAuthors);
  
  bool checkTitle(string title);
  bool checkPublisher(string publisher);
  bool checkISBN(string ISBN);
  bool checkPrice(double price);
  bool checkYearOfPublication(int year);
  bool checkNumberOfCopies(int numberOfCopies);
  bool checkNumberOfAuthors(int numberOfAuthors);

  void updatePrice(double price);
  void updateYearOfPublication(int year);
  void updateNumberOfCopies(int numberOfCopies);

  ~bookType();

private:
  string title;
  string authors[MAX_NUMBER_OF_AUTHORS];
  string publisher;
  string ISBN;
  double price;
  int yearOfPublication;
  int numberOfCopies;
  int numberOfAuthors;
};

#endif