#include "IDCardFactory.h"
/**
 * 工厂方法模式
 * 
 * 父类决定实例的生成方式，但并不决定所要生成具体的类，具体处理全部交给子类处理。
 * 将生成实例的框架与具体的实例类解耦。
 */
int main() {
  IFactory *factory = new IDCardFactory;
  IProduct *product1 = factory->create("hongmao");
  IProduct *product2 = factory->create("lantu");
  product1->use();
  product2->use();

  delete product1;
  delete product2;
  delete factory;

  return 0;
}