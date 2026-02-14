#include <iostream>
#include <json.hpp>

int main()
{
    using namespace nlohmann;
    auto data = json::array();
    data.push_back(1);
    data.push_back("hello");
    data.push_back(true);
    data.push_back({1,2,3});

    std::cout << data.dump(4);
}
