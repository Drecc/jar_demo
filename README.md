
### 简述
使用chromium代码可以很方便帮助你创建JNI的相关代码，让你更加专注与C++代码的书写，而不同关心其它的内容，这里简单演示如何使用chromium快速生成jni项目并打包为jar包，生成的jar包和so可以被android项目导入使用
```
target_os = "android"
root_extra_deps = ["//my_jar_demo"]
target_cpu = "x86"
is_debug = false
```
