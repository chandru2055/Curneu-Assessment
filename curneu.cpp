#include<json/json.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
   //---Build JSON object
   Json::Value array;
   Json::Value root;
   Json::Value person;

   Json::FastWriter writer;

   person["userId"] = "IND0001";
   person["Email"] = "balaji@curneu.com";
   person["Country"] = "India";
      person["HospitalName"] = "CMC";
	     person["Password"] = "K@123";
		    person["UserGender"] = "Male";
			   person["UserName"] = "BalajiSivakumar";   
    root.append(person);
    
    array["userBasicDetails:"] = root;

    string data = writer.write(array);
    cout<<data<<endl;

    //---Parse JSON string
    string strValue = array.toStyledString();//---Turn json object into json string
    cout<<strValue<<endl;

    Json::Reader reader;
    Json::Value value;

    if(reader.parse(strValue,value))//---json string is converted to json object
    {
        for (unsigned int i =0;i<value["array"].size();i++)
        {
            string userId = value["array"][i]["userId"].asString();
            stirng Email = value["array"][i]["Email"].asString();
            string Country = value["array"][i]["Country"].asString();
            string HospitalName = value["array"][i]["HospitalName"].asString();
            string Password = value["array"][i]["Password"].asString();
            string UserGender = value["array"][i]["UserGender"].asString();
            string UserName = value["array"][i]["UserName"].asString();

            cout<<userId<<" "<<Email<<" "<<Country<<" "<<HospitalName<<" "<<Password<<" "<<UserGender<<" "<<UserName<<" "<<endl;
        }
    }
    return 0;
}
