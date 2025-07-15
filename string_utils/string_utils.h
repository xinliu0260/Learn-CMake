#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>
#include <vector>

namespace StringUtils {

/**
 * 将字符串按指定分隔符分割为多个子字符串
 * @param str 待分割的字符串
 * @param delimiter 分隔符
 * @return 分割后的子字符串向量
 */
std::vector<std::string> split(const std::string& str, const std::string& delimiter);

/**
 * 去除字符串首尾的空白字符
 * @param str 待处理的字符串
 * @return 去除空白后的新字符串
 */
std::string trim(const std::string& str);

/**
 * 将字符串转换为小写
 * @param str 待转换的字符串
 * @return 转换为小写后的新字符串
 */
std::string toLower(const std::string& str);

/**
 * 将字符串转换为大写
 * @param str 待转换的字符串
 * @return 转换为大写后的新字符串
 */
std::string toUpper(const std::string& str);

/**
 * 判断字符串是否以指定前缀开头
 * @param str 待检查的字符串
 * @param prefix 前缀
 * @return 如果是返回true，否则返回false
 */
bool startsWith(const std::string& str, const std::string& prefix);

/**
 * 判断字符串是否以指定后缀结尾
 * @param str 待检查的字符串
 * @param suffix 后缀
 * @return 如果是返回true，否则返回false
 */
bool endsWith(const std::string& str, const std::string& suffix);

} // namespace StringUtils

#endif // STRING_UTILS_H
    