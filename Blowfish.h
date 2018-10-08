//
// Created by alex on 07/10/18.
//

#ifndef ENCRYPTIONALGORITHMS_BLOWFISH_H
#define ENCRYPTIONALGORITHMS_BLOWFISH_H

//#ifndef BLOWFISH_H
//#define BLOWFISH_H

/*************************** HEADER FILES ***************************/
#include <stddef.h>

/****************************** MACROS ******************************/
#define BLOWFISH_BLOCK_SIZE 8           // Blowfish operates on 8 bytes at a time

/**************************** DATA TYPES ****************************/
typedef unsigned char BYTE;             // 8-bit byte
typedef unsigned int  WORD;             // 32-bit word, change to "long" for 16-bit machines

typedef struct {
    WORD p[18];
    WORD s[4][256];
} BLOWFISH_KEY;

/*********************** FUNCTION DECLARATIONS **********************/
void blowfish_key_setup(const BYTE user_key[], BLOWFISH_KEY *keystruct, size_t len);
void blowfish_encrypt(const BYTE in[], BYTE out[], const BLOWFISH_KEY *keystruct);
void blowfish_decrypt(const BYTE in[], BYTE out[], const BLOWFISH_KEY *keystruct);

//#endif // BLOWFISH_H
#endif //ENCRYPTIONALGORITHMS_BLOWFISH_H
