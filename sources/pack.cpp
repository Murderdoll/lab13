#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

struct Email {
  std::string nickname;
  std::string server;
};

struct Person {
  std::string  first_name;
  std::string  last_name;
  Email        email;
  size_t       age;
  std::string  phone;
};

Person getInfo() {
	class Person file;
  file.first_name = "AAAAAA";
	file.last_name = "B";
	file.email.nickname = "artem765";
  file.email.server = "@inbox.ru";
	file.age = 19;
	file.phone = "8(800)555-35-35";
	return file;
}


int main(int argc, char* argv[]) {
  string Path = argv[1];
  Person Pers;
  ofstream fout(Path);
cout << "-------------------------------------" << endl;
cout <<"First name:" << endl;
cin >> Pers.first_name;
cout <<"Last name:" << endl;
cin >> Pers.last_name;
cout <<"Email:" << endl;
cin >> Pers.email.nickname;
cout <<"Age:" << endl;
cin >> Pers.age;
cout <<"Phone:" << endl;
cin >> Pers.phone;
cout << "-------------------------------------" << endl;
  json j;
  j["first_name"] = Pers.first_name;
  j["last_name"] = Pers.last_name;
  j["email_nickname"] = Pers.email.nickname;
  j["email_server"] = Pers.email.server;
  j["age"] = Pers.age;
  j["phone"] = Pers.phone;
  fout << j;
  fout.close();
  return 0;
}
