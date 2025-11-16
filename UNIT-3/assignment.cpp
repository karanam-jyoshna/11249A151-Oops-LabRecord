#include &lt;iostream&gt;
#include &lt;cstring&gt;
using namespace std;

class MyString {
private:
char* str;
public:
MyString(const char* s=&quot;&quot;) {
str = new char[strlen(s)+1];
strcpy(str, s);
}

MyString(const MyString &amp;s) {
str = new char[strlen(s.str)+1];
strcpy(str, s.str);
}

MyString&amp; operator=(const MyString &amp;s) {
if(this != &amp;s) { 
delete[] str; 
str = new char[strlen(s.str)+1];
strcpy(str, s.str);
}
return *this;
}
void display() { cout &lt;&lt; str &lt;&lt; endl; }
~MyString() { delete[] str; }
};
int main() {
MyString s1(&quot;Hello&quot;), s2(&quot;World&quot;);
s2 = s1; 
s2.display();
MyString s3;
s3 = s2; 
s3.display(); 
return 0;
}