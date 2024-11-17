#pragma once

#include <string>

class IProduct;

class IFactory {
public:
  virtual ~IFactory() {}

public:
  virtual IProduct* createProduct(const std::string &owner) = 0;

  virtual void registerProduct(IProduct *) = 0;

public:
  virtual IProduct* create(const std::string &owner) {
    IProduct *product = createProduct(owner);
    registerProduct(product);
    return product;
  }
};