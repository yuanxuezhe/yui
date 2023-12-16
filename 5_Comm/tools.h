#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <string>
#include <sstream>
#include "define.h"

class DLLExport CTools
{
public:
    template <typename T>
    static std::string Concatenate(T t);

    template <typename T, typename... Args>
    static std::string Concatenate(T t, Args... args);

    // 长度拼接
    static std::string GetVirtualStkAcct(std::string strCuacctCode, std::string strBoard, int len = 0);
};

template <typename T>
std::string CTools::Concatenate(T t)
{
    std::stringstream ss("");
    ss << t;
    return ss.str();

}

template <typename T, typename... Args>
std::string CTools::Concatenate(T t, Args... args)
{
    return Concatenate(t) + Concatenate(args...);

}

#endif // __TOOLS_H__