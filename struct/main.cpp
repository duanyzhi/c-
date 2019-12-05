#include <iostream>

struct DateStruct {
   int year;
   int month;
   int day;
};

// define a DateStruct struct here: struct data 
void print(DateStruct &data) {
  std::cout << data.year << '\t' << data.month << '\t' << data.day << '\n';
}

class DateClass {
  // class members are private by default, we can make it public by using public
  public:
    // public can be accessed from outside of class
    int m_year;
    int m_month;
    int m_day;

    void print_class() {
      std::cout << m_year << "/" << m_month << "/" << m_day << '\n';
    }
};

int main() {
  DateStruct today{2019, 12, 1};  // initialization
  today.day = 5;
  print(today);

  // declare a variable of class:new_day
  DateClass new_day{2020, 1, 1};
  new_day.m_day = 20;
  new_day.print_class();

  return 0;

}
