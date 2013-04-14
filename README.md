淘宝Cpp/Qt SDK
==========

介绍
----------
本项目为淘宝的C++/Qt SDK，封装了所有的response/request/domain数据结构，模仿淘宝官方java SDK。由[淘宝SDK自动生成器](https://github.com/sd44/TaoBaoAutoSdk/)生成相应内容。[自动生成器文档][]

项目文档
----------
参见本项目下doc/index.html

TODO
----------
1, 目前只支持返回XML响应，JSON相应因Qt4/5版本的支持不一，所以没有实现。
如果您确实有这方面需求，可以借助现有Parser类框架，在数分钟内实现。

2，http timeout没有实现。

3，request类的参数检测没有实现，比较简单。修改下淘宝SDK自动生成器代码和模板就可以实现。



[自动生成器文档]: http://sd44.github.io/TaoBaoAutoSdk/

