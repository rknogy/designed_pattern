#pragma once

template <typename T>
class Singleton {
public:
  static T &GetInstance() {
    static T instance;
    return instance;
  }
  virtual ~Singleton() {}

public:
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

protected:
  Singleton() {}
};