#include <iostream>
#include <string.h>
#include <exception>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
namespace pt = boost::property_tree;

int main()
{
  
  pt::ptree root;

  pt::read_json("curneu.cpp", root);  // Load the json file in this ptree
    
  string  userId = root.get<string>("userId");  
  string Email = root.get<string>("Email");
  string  country = root.get<string>("Country");
  string  HospitalName = root.get<string>("HospitalName");
  string  UserGender = root.get<string>("UserGender");
  string  UserName = root.get<string>("UserName");  

  cout << "userId : " << userId << endl;      //getting the output of all
  cout << "Email : " << Email << endl;
  cout << "Country : " << Country << endl;
  cout << "HospitalName : " << HospitalName << endl;
  cout << "Password : " << Password << endl;
  cout << "UserGender : " << UserGender << endl;
  cout << "UserName : " << UserName << endl;
  

  return 0;
}
