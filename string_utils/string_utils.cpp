#include "string_utils.h"
#include <algorithm>
#include <cctype>

namespace StringUtils {

std::vector<std::string> split(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    size_t len = str.length();
    size_t delimiterLen = delimiter.length();
    
    if (len == 0) return tokens;
    
    while (pos < len) {
        size_t findPos = str.find(delimiter, pos);
        if (findPos == std::string::npos) {
            tokens.push_back(str.substr(pos, len - pos));
            break;
        }
        
        tokens.push_back(str.substr(pos, findPos - pos));
        pos = findPos + delimiterLen;
    }
    
    return tokens;
}

std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\n\r\f\v");
    if (first == std::string::npos) return "";
    
    size_t last = str.find_last_not_of(" \t\n\r\f\v");
    return str.substr(first, last - first + 1);
}

std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), 
                   [](unsigned char c) { return std::tolower(c); });
    return result;
}

std::string toUpper(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), 
                   [](unsigned char c) { return std::toupper(c); });
    return result;
}

bool startsWith(const std::string& str, const std::string& prefix) {
    return str.rfind(prefix, 0) == 0;
}

bool endsWith(const std::string& str, const std::string& suffix) {
    if (str.length() < suffix.length()) return false;
    return str.compare(str.length() - suffix.length(), suffix.length(), suffix) == 0;
}

} // namespace StringUtils
    