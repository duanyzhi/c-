#include <string>
#include <iostream>

#define REGISTER_OP(name) \
  static std::string const op = \
    OpBuilder(name)

class OpBuilder {
 public:
  explicit OpBuilder(std::string name);
  ~OpBuilder() {};

  OpBuilder& Input(std::string name);
  OpBuilder& Output(std::string name);
  std::string Finalize();
};


OpBuilder::OpBuilder(std::string name) {
  std::cout << "fun name:" << name << "\n"; 
}

OpBuilder& OpBuilder::Input(std::string name) {
  std::cout << "input name" << name << "\n";
  return *this;
}

OpBuilder& OpBuilder::Output(std::string name) {
  std::cout << "output name" << name << "\n";
  return *this;
}

std::string OpBuilder::Finalize() {
  std::cout << "end." << "\n";
  return "OK";
}

int main() {
  OpBuilder("fun").Input("input")
                  .Output("output")
                  .Finalize();

  // using macro
  REGISTER_OP("fun").Input("input")
                    .Output("output")
                    .Finalize();


}
