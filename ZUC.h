#ifndef ZUC_H
#define ZUC_H

void GenerateKeyStream(unsigned int *pKeyStream, unsigned int KeyStreamLen);
void Initialization(unsigned char *k, unsigned char *iv);

#endif
