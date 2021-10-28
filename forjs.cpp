#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <emscripten.h>
#include <emscripten/bind.h>
using namespace emscripten; //名前空間、これは任意です 私はstdはusing namespaceしない派です

//ここにクラスとかを書く
class ClassName //任意の名前
{
private:
public:
    ClassName() //コンストラクタ
    {
    }
    void FunctionName() //これも任意の名前
    {
        std::cout << "おうどんたべたい" << std::endl;
    }
};

EMSCRIPTEN_BINDINGS(forjs)
{
    register_vector<std::string>("vector<std::string>");
    register_vector<int>("vector<int>");

    class_<ClassName>("ClassName")
        .constructor<>()
        .function("FunctionName", &ClassName::FunctionName);
}