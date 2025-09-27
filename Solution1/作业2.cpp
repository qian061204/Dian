#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;

int main(){
    ifstream file("date.txt");
    if(!file.is_open()){
        cout<<"文件date.txt打开失败"<<endl;
        return -1;
    }
    
    map<string, string> dataMap;
    string line;
    int lineCount = 0;
    
  
    while(getline(file, line)) {
        size_t colonPos = line.find(':');
        if(colonPos != string::npos) {
            string key = line.substr(0, colonPos);
            string value = line.substr(colonPos + 1);
            dataMap[key] = value;
            lineCount++;
            cout << "第" << lineCount << "行: " << key << " -> " << value << endl;
        }
    }
    file.close();
    
    cout << "共读取 " << lineCount << " 个键值对" << endl;
    cout << "去重后有 " << dataMap.size() << " 个唯一键" << endl;
    
   
    string input;
    cout << "\n请输入要查找的键: ";
    while(cin >> input) {
        if(input == "quit") break;
        
      
        map<string, string>::iterator it = dataMap.find(input);
        if(it != dataMap.end()) {
            cout << "找到键 '" << input << "', 对应的值是: " << it->second << endl;
        } else {
            cout << "未找到键: " << input << endl;
        }
        
 
        cout << "请输入要查找的键 (输入quit退出): ";
    }
    
    return 0;
}
