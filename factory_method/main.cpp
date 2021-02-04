#include <iostream>
#include <string>
#include <map>
#include <memory>

class Factory {
 public:
  virtual ~Factory() {}
  virtual std::string Operation() const = 0;
};

class CppFactory : public Factory {
 public:
  CppFactory(const std::string& name)
    : name_(name) {}
  std::string Operation() const {
    return "this is cpp ops:" + name_;
  }
 private:
  std::string name_;
};

class PythonFactory : public Factory {
 public:
  PythonFactory(const std::string& name)
    : name_(name) {}
  std::string Operation() const {
    return "this is python ops:" + name_;
  }
 private:
  std::string name_;
};

class GetOp {
 public:
  // singleton design pattern
  static GetOp& GetInstance() {
   static GetOp instance;
   return instance;
  }

  void RegisterOp(const std::string& name, Factory* registrar) {
    registry_[name] = registrar;
  }

  Factory* GetFactory(const std::string& name) {
    std::map<std::string, Factory*>::iterator it;
    it = registry_.find(name);
    if (it != registry_.end()) {
      return it->second;
    }
    return nullptr;
  }
 private:
  GetOp() {}
  ~GetOp() {}
  std::map<std::string, Factory*> registry_;
};

void RegisterOps() {
  CppFactory* cpp_f;
  cpp_f = new CppFactory("cpp");
  PythonFactory* python_f;
  python_f = new PythonFactory("python");
  GetOp::GetInstance().RegisterOp("cpp", cpp_f);
  GetOp::GetInstance().RegisterOp("python", python_f);
}

class Work {
 public:
  std::string op(const std::string& name) {
    return GetOp::GetInstance().GetFactory(name)->Operation();
  }
};

int main() {
  RegisterOps();

  Work iwork;
  std::cout << iwork.op("cpp") << "\n";
  std::cout << iwork.op("python") << "\n";
  // std::cout << iwork.op("none") << "\n";  // core dump
}
