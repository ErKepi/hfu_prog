// Uebung 2: Stack

#include <cstdio>

class Stack {
private:
    char _c[100];
    int _top;

public:
    void push(char c) {
        {
            _c[_top++] = c;
        }
    };
    char top() { return _c[_top - 1]; };

    //unsigned int size();

    bool empty() { return (_top == 0); };
    void clear() { _top = 0; };
};

int main() {
    char c;
    Stack s;

    s.clear();
    s.push('a');
    s.push('b');
    s.push('c');
    printf("Oberstes Element: '%c'\n", s.top());
}
