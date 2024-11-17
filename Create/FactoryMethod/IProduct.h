#pragma once

class IProduct {
public:
  virtual ~IProduct() {}

public:
  virtual void use() = 0;
};