#include "calc.h"
#include <string>
#include <cstdio>
#include <cstdlib>

bool test_add(){
    bool pass = true;
    return pass;
}

bool test_sub(){
    bool pass = true;
    return pass;
}


int main(int argc,char* argv[]){

    if(argc != 2){
        printf("参数数量错误\n");
        return 1;
    }
    std::string test_type = argv[1];
    bool result = false;

    if(test_type == "sub"){
        result = test_sub();
    }else if(test_type == "add"){
        result = test_add(); 
    }else{
        return 1;
    }
    return result? 0 : 1;
}