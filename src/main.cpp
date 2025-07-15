// main.cpp
#include "main.h"
#include "string_utils.h"
#include <iostream>

using namespace MyApp;

// 实现命令行参数解析
Config MyApp::parseArgs(int argc, char* argv[]) {
    Config config;
    
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        
        if (arg == "-i" || arg == "--input") {
            if (i + 1 < argc) {
                config.inputFile = argv[++i];
            } else {
                std::cerr << "Error: Missing argument for " << arg << std::endl;
                exit(1);
            }
        } else if (arg == "-o" || arg == "--output") {
            if (i + 1 < argc) {
                config.outputFile = argv[++i];
            } else {
                std::cerr << "Error: Missing argument for " << arg << std::endl;
                exit(1);
            }
        } else if (arg == "-v" || arg == "--verbose") {
            config.verbose = true;
        } else if (arg == "-r" || arg == "--retries") {
            if (i + 1 < argc) {
                config.maxRetries = std::stoi(argv[++i]);
            } else {
                std::cerr << "Error: Missing argument for " << arg << std::endl;
                exit(1);
            }
        } else {
            std::cerr << "Unknown option: " << arg << std::endl;
            exit(1);
        }
    }
    
    return config;
}

// 实现应用程序主逻辑
int MyApp::run(const Config& config) {
    if (config.verbose) {
        std::cout << "Running application with configuration:" << std::endl;
        std::cout << "  Input file: " << config.inputFile << std::endl;
        std::cout << "  Output file: " << config.outputFile << std::endl;
        std::cout << "  Max retries: " << config.maxRetries << std::endl;
    }

    // 示例：使用字符串工具库
    std::string message = "Hello, World!";
    std::cout << "Original: " << message << std::endl;
    std::cout << "Lowercase: " << StringUtils::toLower(message) << std::endl;
    
    // 模拟处理
    for (int i = 0; i < config.maxRetries; ++i) {
        std::cout << "Processing attempt " << (i + 1) << "..." << std::endl;
        // 实际处理逻辑...
    }
    
    std::cout << "Processing complete!" << std::endl;
    return 0;
}

// 程序入口点
int main(int argc, char* argv[]) {
    try {
        Config config = parseArgs(argc, argv);
        return run(config);
    } catch (const std::exception& e) {
        std::cerr << "Fatal error: " << e.what() << std::endl;
        return 1;
    }
}