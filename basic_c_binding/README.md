basic_c_binding
==============

To build:
* node-gyp rebuild

Concept: contrived method called int my_age() exists in C, we want to bind this and import it for use in Node.

The files:
* myage_c.c - the file which contains our C code we want to bind
* myage.cc - the C++ wrapper file required by node for an addon
* myage.h - imported by myage.cc so that method 'int my_age()' is available
