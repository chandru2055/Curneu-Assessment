# Curneu-Assessment
jsoncpp mainly includes three types of classes: Value, Reader, Writer. 
All the object and class names in jsoncpp are in namespace Json, including json.h.
Value:
Json::Value is the most basic and important class in jsoncpp. 
It is used to represent various types of objects. 
The object types supported by jsoncpp can be found in the Json::ValueType enumeration value.
Writer:
The Json::Writer class of Jsoncpp is a pure virtual class and cannot be used directly.
Here we use the subclasses of Json::Writer: Json::FastWriter, Json::StyledWriter, Json::StyledStreamWriter.
Reader:
Json::Reader is used for reading. To be precise, it is used to convert a string into a Json::Value object.
