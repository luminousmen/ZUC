ZUC
=======

The stream cipher ZUC is a world–oriented stream cipher, taking a 128-bit secret key and a 128-bit IV as input, and outputs a keystream of 32-bit words,  which is used to encrypt or decrypt the data.

This repository is my implementation of standart: [Specification](http://www.gsma.com/aboutus/wp-content/uploads/2014/12/eea3eia3zucv16.pdf).


##### Algorithm

![alg](https://i.imgur.com/ON9DPmY.png)


##### Links

[Analysis on ZUC Algorithm](https://eprint.iacr.org/2012/299.pdf)

[Wiki](https://en.wikipedia.org/wiki/Zuc_stream_cipher)

[ZUC in Cryptol](https://galois.com/blog/2011/06/zuc-in-cryptol)


##### Usage

Count `main.cpp` as test case.

```bash
    $ make
    $ ./prog
```
