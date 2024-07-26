//early binding aka static binding

class Base {
public:
    void show() {
        std::cout << "Base class show function" << std::endl;
    }
};

int main() {
    Base obj;
    obj.show(); // Early binding, determined at compile time
    return 0;
}


//late binding aka dynamic binding

class Base {
public:
    virtual void show() {
        std::cout << "Base class show function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show function" << std::endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->show(); // Late binding, determined at runtime
    return 0;
}
