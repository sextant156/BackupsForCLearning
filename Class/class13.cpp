#include<bits/stdc++>
using namespace std;
int main()
{
    class class1
    {
    private:
        int num;
    public:
        // 构造函数
        class1();
        // 析构函数
        ~class1();
        // 拷贝构造函数

    };
    
    class1::class1(/* args */)
    {

    }
    
    class1::~class1()
    {
    }
    class Person 
    {
        private:
            // private的内容也可以是类
            std::string name;
            int age;

        public:
            // 构造函数
            Person(const std::string& name, int age) : name(name), age(age) 
            {
                std::cout << "Person object created." << std::endl;
            }

            // 析构函数
            ~Person() {
                std::cout << "Person object destroyed." << std::endl;
            }

            // 成员函数
            void introduce() {
                std::cout << "My name is " << name << " and I'm " << age << " years old." << std::endl;
            }
        };

    int main() {
        // 创建 Person 对象
        Person person("John", 25);

        // 调用成员函数
        person.introduce();

        // 对象超出作用域，将自动调用析构函数销毁对象
        return 0;
    }

}