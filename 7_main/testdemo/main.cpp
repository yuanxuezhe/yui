//#include "tinyxml2.h"
//#include "yscore/Fl_C.h"
#include <iostream>
#include <string.h>
//#include <windows.h>
//#include <map>
//#include <vector>
#include "Frame.h"
using namespace std;

// int nFrameX = 0;
// int nFrameY = 0;
// int nFrameW = 0;
// int nFrameH = 0;

// std::map<std::string, HMODULE> g_mapDlls;

// void GetPos(const char* pos, int& x, int& y, int& w, int& h) {
//     // 获取位置
//     if (pos) {
//         std::string posStr(pos);
//         std::string::size_type pos = posStr.find(',');
//         if (pos != std::string::npos) {
//             x = atoi(posStr.substr(0, pos).c_str());
//             posStr = posStr.substr(pos + 1);
//             pos = posStr.find(',');
//             if (pos != std::string::npos) {
//                 y = atoi(posStr.substr(0, pos).c_str());
//                 posStr = posStr.substr(pos + 1);
//                 pos = posStr.find(',');
//                 if (pos != std::string::npos) {
//                     w = atoi(posStr.substr(0, pos).c_str());
//                     h = atoi(posStr.substr(pos + 1).c_str());
//                 }
//             }
//         }
//     }
// }

// void* LoadDllAndReturnFunction(const char* str, const char* split) {
//     if (!str || !split) {
//         return NULL;
//     }

//     std::vector<std::string> vecStr;
//     std::string strStr(str);
//     std::string strSplit(split);
//     std::string::size_type pos = strStr.find(strSplit);
//     while (pos != std::string::npos) {
//         vecStr.push_back(strStr.substr(0, pos));
//         strStr = strStr.substr(pos + 1);
//         pos = strStr.find(strSplit);
//     }
//     vecStr.push_back(strStr);

//     std::string dllNameStr(vecStr[0]);
//     std::string functionNameStr(vecStr[1]);
//     pos = dllNameStr.find('.');
//     if (pos != std::string::npos) {
//         dllNameStr = dllNameStr.substr(0, pos);
//     }

//     // 如果已经加载过，直接返回
//     if (g_mapDlls.find(dllNameStr) != g_mapDlls.end()) {
//         return GetProcAddress(g_mapDlls[dllNameStr], functionNameStr.c_str());
//     }

//     // 加载DLL
//     HMODULE dll = LoadLibrary(dllNameStr.c_str());
//     if (dll) {
//         g_mapDlls[dllNameStr] = dll;
//         return GetProcAddress(dll, functionNameStr.c_str());
//     }

//     return NULL;
// }

// bool LoadElementComponents(tinyxml2::XMLElement* element) {
//     // 遍历子元素
//     for (tinyxml2::XMLElement* childElement = element->FirstChildElement(); childElement; childElement = childElement->NextSiblingElement()) {
//         const char* elementName = childElement->Name();

//         // 获取名称
//         const char* title = childElement->Attribute("title");
//         if (title) {
//             std::cout << "title: " << title << std::endl;
//         }
//         // 获取位置
//         const char* pos = childElement->Attribute("pos");

//         // 获取回调函数
//         const char* callback = childElement->Attribute("callback");

//     }

//     return true;
// }

// bool LoadElementLayout(tinyxml2::XMLElement* element) {
//     // 遍历子元素
//     for (tinyxml2::XMLElement* childElement = element->FirstChildElement(); childElement; childElement = childElement->NextSiblingElement()) {
//         const char* elementName = childElement->Name();

//         // 获取名称
//         const char* title = childElement->Attribute("title");
//         if (title) {
//             std::cout << "title: " << title << std::endl;
//         }
//         // 获取位置
//         const char* pos = childElement->Attribute("pos");

//         // 获取回调函数
//         const char* callback = childElement->Attribute("callback");


//         void* v = NULL;
//         if (strcmp("Frame", elementName) == 0)
//         {
//             GetPos(pos, nFrameX, nFrameY, nFrameW, nFrameH);
//             v = Fl_Double_Window_New_WithLabel(nFrameW, nFrameH, title);
//         }
//         else
//         {
//             int x=0;
//             int y=0;
//             int w=0;
//             int h=0;
//             GetPos(pos, x, y, w, h);
//             std::cout << "FramePos:" << nFrameX << "," << nFrameY << "," << nFrameW << "," << nFrameH << std::endl;
//             std::cout << "pos: " << x << "," << y << "," << w << "," << h << std::endl;
//             if ((x + w > nFrameW) || (y + h > nFrameH))
//             {
//                 //std::cout << "Error: Check your config,[" << elementName << ":" <<title << "] position is out of range" << std::endl;
//                 std::cout << "Error: Check your config,[" << elementName << "] position is out of range" << std::endl;
//                 return false;
//             }

//             if (strcmp("Button", elementName) == 0)
//             {
//                 v = Fl_Button_New_WithLabel(x, y, w, h, title);
//                 //LoadDllAndReturnFunction(callback, ":");
//                 Fl_Button_set_callback_with_user_data(v,LoadDllAndReturnFunction(callback, ":"), 0);

//             }
            
//         }


//         // 如果有嵌套元素，继续遍历
//         if (!LoadElementLayout(childElement))
//         {
//             return false;
//         }

//         if (strcmp("Frame", elementName) == 0)
//         {
//             Fl_Double_Window_end(v);
//             //Fl_Double_Window_set_resizable(win,table);
//             Fl_Double_Window_show(v);

//             Fl_run();
//         }
//     }

//     return true;
// }

// int main1() {
//     tinyxml2::XMLDocument doc;
//     // 加载XML文件
//     if (doc.LoadFile("example.xml") == tinyxml2::XML_SUCCESS) {
//         // 获取根元素
//         tinyxml2::XMLElement* root = doc.FirstChildElement("Root");

//         if (root) {
//             // 获取组件元素
//             tinyxml2::XMLElement* elementComponents = root->FirstChildElement("Components");
//             // 遍历子元素
//             if (elementComponents) {
//                 if (!LoadElementComponents(elementComponents))
//                 {
//                     return 0;
//                 }
//             }
            
//              // 获取组件元素
//             tinyxml2::XMLElement* elementLayout = root->FirstChildElement("Layout");
//             // 遍历子元素
//             if (elementLayout) {
//                 if (!LoadElementLayout(elementLayout))
//                 {
//                     return 0;
//                 }
//             }
//         } else {
//             std::cerr << "Root element not found." << std::endl;
//         }
//     } else {
//         std::cerr << "Failed to load XML file: example.xml." << std::endl;
//     }

//     return 0;
// }

std::string& LRTrim(std::string& ssString, const char* pChars/*=" \r\n\t"*/)
{
  if (ssString.length() == 0) return ssString;
  std::string::size_type iBeginPos = ssString.find_first_not_of(pChars, 0);
  if (iBeginPos == std::string::npos)
  {
    ssString = "";
    return ssString;
  }
  std::string::size_type iEndPos = ssString.find_last_not_of(pChars);
  if (iEndPos == std::string::npos)
  {
    ssString = "";
    return ssString;
  }
  ssString = ssString.substr(iBeginPos, iEndPos + 1 - iBeginPos);
  return ssString;
}


int main(int argc, const char** argv) {
    //Frame frame;
    //frame.LoadXml("example.xml");
    std::string s = "   123   ";

    s = LRTrim(s, " \r\n\t");
    //char szExeInfo[256] = { 0 };
    std::cout << "[" << s << "]" << std::endl;
    //std::cout << strlen(szExeInfo) <<  "    " << sizeof(szExeInfo) << std::endl;

    return 0;
}