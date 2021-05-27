#include <iostream>
#include <vector>
#include <string>
#include <functional>

struct function_schema {
  function_schema(std::initializer_list<const char*> sig_list);
  void print();
  std::vector<const char*> ops;
};

function_schema::function_schema(std::initializer_list<const char*> sig_list) {
  for (const char* sig : sig_list) {
    ops.push_back(sig);
  }
}

void function_schema::print() {
  for (const char* op : ops) {
    std::cout << op << std::endl;
  }
}

using formula_t = std::function<bool(int)>;

static std::vector<std::pair<function_schema, formula_t>> formulas;
// define register_formula struct
struct register_formula {
  register_formula(function_schema schema, formula_t formula) {
    formulas.emplace_back(std::move(schema), std::move(formula));
  
  }
};

static const register_formula simple_print{
    {
        "function_schema_cpp",
    },
    [](int x) -> bool {
      if (x < 0) {
        std::cout << "cpp iput less than 0" << std::endl;
        return false;
      }
      return true;
    }
};

int main() {
  int x = -1;
  for (auto& entry : formulas) {
    entry.first.print();
    entry.second(x);
  }
}
