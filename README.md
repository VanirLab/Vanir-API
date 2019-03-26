# Vanir-API(LTE)
Build your own Vanir multi-application

Goals with the Vanir API ?

To make it fast and easy for all kind of developers.
Chop down the code as much as possible.
Make it script based for the web.
Drain as little battery as possible on all kind of devices.
Support all languages.
Testability for low and high level automation.


Implementing plugins for Vanir:


[WARNING]
[x] Dont mix allocators, It's possible for plugins to be linked against different memory alocators
than your API.

[x] Different implementations of STL classes such as std::vector may not be ABI compatible.

[x]Use extern "c" link to avoid C++ ABI issues.
