#ifndef __TEST_CALLBACK_H__
#define __TEST_CALLBACK_H__

#include <string>
#include <sstream>
#include "define.h"
#include <iostream>
using namespace std;

extern "C" {
  DLLExport  void TestPrint1(char* str);
  DLLExport  void TestPrint2(char* str);
  DLLExport  void TestPrint3(char* str);
  DLLExport  void TestPrint4(char* str);
};

#endif // __TEST_CALLBACK_H__