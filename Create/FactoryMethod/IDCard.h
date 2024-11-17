#pragma once

#include "IProduct.h"
#include <iostream>
#include <string>

class IDCard : public IProduct {
public:
  IDCard(const std::string &owner) : m_owner(owner) {}

public:
  void use() override {
    std::cout << "use IDCard with owner " << m_owner << std::endl;
  }

private:
  std::string m_owner;
};