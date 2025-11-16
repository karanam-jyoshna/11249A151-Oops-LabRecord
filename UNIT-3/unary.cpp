#include &lt;iostream&gt;
using namespace std;

class Number {

private:
int value;

public:
Number(int v=0) : value(v) {}
;
Number operator-() {
return Number(-value);
}

void display() { cout &lt;&lt; &quot;Value = &quot; &lt;&lt; value &lt;&lt; endl; }
};

int main() {
Number n1(10);
Number n2 = -n1; 
n2.display();
return 0;
}