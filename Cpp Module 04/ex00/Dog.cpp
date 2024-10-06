# include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type ): Animal(type) {
    std::cout << "Dog type constructor called" << std::endl;
}

Dog::Dog( const Dog &other ): Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator = ( const Dog &other ) {
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}