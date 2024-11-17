#pragma once
/**
 * 单例模式
 * 整个软件生命周期，只存在一个对象实例
 * 
 * 关键是构造函数私有化，不允许多次构造
 * 具体使用时：
 * 1. 子类T需要继承于SingleTon<T>类
 * 2. 并设置SingleTon<T>为友元（为了SingleTon<T>类中能调用T类受保护的构造函数创建静态实例）
 */
template <typename T>
class Singleton {
public:
  static T& GetInstance() {
    static T instance;
    return instance;
  }
  virtual ~Singleton() {}

public:
  Singleton(const Singleton &) = delete;
  Singleton& operator=(const Singleton &) = delete;

protected:
  Singleton() {}
};