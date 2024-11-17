#include "Singleton.h"
#include <iostream>
#include <string>
using namespace std;

class Apple : public Singleton<Apple> {
public:
  ~Apple() {}

public:
  inline void show() { cout << __FUNCTION__ << endl; }

protected:
  friend Singleton<Apple>;
  Apple() {}
};

class Orange : public Singleton<Orange> {
public:
  ~Orange() {}

public:
  inline void show() { cout << __FUNCTION__ << endl; }

protected:
  friend Singleton<Orange>;
  Orange() {}
};


int main() {
  Apple::getInstance().show();
  cout << &Apple::getInstance() << endl;

  Apple::getInstance().show();
  cout << &Apple::getInstance() << endl;

  Orange::getInstance().show();
  Orange::getInstance().show();
  return 0;
}