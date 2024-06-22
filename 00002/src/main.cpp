/**
 * Author: github.com/micro3721
 * E-mail: mysolution@qq.com
 * Provide software outsourcing services
 * 我承接软件定制开发服务,欢迎垂询
 */

#include "GenericContainer.h"
#include "Collection.h"

int main() {
    // 使用模板类GenericContainer
    GenericContainer<int> intContainer(42);
    intContainer.printValue();

    GenericContainer<std::string> stringContainer("Hello, Templates!");
    stringContainer.printValue();

    // 使用模板类Collection
    Collection<int> intCollection;
    intCollection.addElement(1);
    intCollection.addElement(2);
    intCollection.addElement(3);
    intCollection.printElements();
    std::cout << "Contains 2? " << intCollection.contains(2) << std::endl;
    std::cout << "Contains 4? " << intCollection.contains(4) << std::endl;

    Collection<std::string> stringCollection;
    stringCollection.addElement("Hello");
    stringCollection.addElement("World");
    stringCollection.printElements();
    std::cout << "Contains 'Hello'? " << stringCollection.contains(std::string("Hello")) << std::endl;
    std::cout << "Contains 'C++'? " << stringCollection.contains(std::string("C++")) << std::endl;

    return 0;
}
