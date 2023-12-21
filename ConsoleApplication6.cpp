#include <iostream>

template <typename T, int max>
class Stack {
private:
    T a[max];
    int top;  

public:
    Stack() : top(-1) {}

    
    void push(const T& b) {
        if (top < max - 1) {
            a[++top] = b;
            std::cout << "Елемент: " << b << " додались в стек \n";
        }
        else {
            std::cout << "стек переповнений\n";
        }
    }

    
    void pop() {
        if (top >= 0) {
            std::cout << "Видалений елемент: " << a[top--] << '\n';
        }
        else {
            std::cout << "стек порожній\n";
        }
    }

    
    
    void display() {
        std::cout << "Елементи в стеку: ";
        for (int i = 0; i <= top; ++i) {
            std::cout << a[i] << " ";
        }
        std::cout << '\n';
    }

    
    int size() const {
        return top + 1;
    }
};

int main() {
    setlocale(LC_ALL, "Ukrainian");
    Stack<int, 3> Stack2;

    Stack2.push(4);
    Stack2.push(6);
    Stack2.push(9);

    Stack2.display();
    std::cout << "Розмір стеку: " << Stack2.size() << '\n';
    
    Stack2.push(12);

    Stack2.pop();
    Stack2.pop();
    Stack2.display();
    std::cout << "Розмір стеку: " << Stack2.size() << '\n';

    return 0;
}
