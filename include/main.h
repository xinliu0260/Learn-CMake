// main.h
#ifndef MAIN_H
#define MAIN_H

#include <string>

namespace MyApp {
    // 应用程序配置结构
    struct Config {
        std::string inputFile;
        std::string outputFile;
        bool verbose = false;
        int maxRetries = 3;
    };

    // 解析命令行参数
    Config parseArgs(int argc, char* argv[]);

    // 应用程序主逻辑
    int run(const Config& config);
}

#endif // MAIN_H