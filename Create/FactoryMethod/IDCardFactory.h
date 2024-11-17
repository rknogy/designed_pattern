#pragma once

#include "IFactory.h"
#include "IDCard.h"
#include <string>
#include <vector>

class IDCardFactory : public IFactory {
public:
  IProduct* createProduct(const std::string &owner) override {
    return new IDCard(owner);
  }

  void registerProduct(IProduct *product) override {
    m_productList.push_back(product);
  }
  
private:
  std::vector<IProduct*> m_productList;
};