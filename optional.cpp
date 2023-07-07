// replaces std::pair<object, bool> when returned object is costly to create
#include <optional>

std::optional<int> square(int num)
{
    if (num == 0)
        return std::nullopt;
    else
        return num * num;
}

int main()
{
    auto result = square(5);

    auto val = result.value();
    auto val2 = result.value_or(0);
}