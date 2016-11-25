#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#include "ZUC.h"

int main(int argc, char *argv[]){
    unsigned char iv[16] = {0x84, 0x31, 0x9a, 0xa8, 0xde, 0x69, 0x15, 0xca, 0x1f, 0x6b, 0xda, 0x6b, 0xfb, 0xd8, 0xc7, 0x66};

    std::string key_string;
    std::cout << "Enter key (16 symbols only):\n>>";
    getline(std::cin, key_string);
    if(key_string.size() != 16){
        std::cout << "Bad key size:" << key_string.size() << std::endl;
        return -1;
    }
    unsigned char *key = (unsigned char*)key_string.c_str();

    int keyStreamSize = 0;
    std::cout << "Enter key stream size:\n>>";
    std::cin >> keyStreamSize;

    unsigned int *pKeyStream = new unsigned int[keyStreamSize];
    Initialization(key, iv);
    GenerateKeyStream(pKeyStream, keyStreamSize);

    std::cout << "Generated key stream:" << std::endl << std::endl;

    for (int i = 0; i < keyStreamSize; ++i){
        std::cout << std::dec <<  i << "\t0x" << std::oct << pKeyStream[i] << std::endl;
    }

    return 0;
}
