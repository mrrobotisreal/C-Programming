#include <iostream>
#include <pqxx/pqxx>

using namespace std;
using namespace pqxx;

int main(int argc, char* argv[])
{
  try {
    connection C("dbname = testdb user = postgres password cohondob hostaddr = 127.0.0.1 port = 5432");
    if (C.is_open()) {
      cout
    }
  }
}