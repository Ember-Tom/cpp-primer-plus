This ls my cpp code test file.
And I'll push my code work everyday.
Cheer for that myself pumps fuel for life!!!

值得记录的点：

./a.out 意思是运行本目录（./）下的 a.out 程序
或者改为 a.out 的绝对路径
直接a.out无法执行是因为linux尚未将a.out程序添加至PATH,系统不知道a.out在哪
（如下段展示）
[ember@RockyLinux ~]$ env | grep PATH
DEBUGINFOD_IMA_CERT_PATH=/etc/keys/ima:
PATH=/home/ember/.local/bin:/home/ember/bin:/usr/local/bin:/usr/local/sbin:/usr/bin:/usr/sbin

要使用gdb调试的话，需要使用 g++ -g <file> 生成包含调试信息的程序。新生成的程序比常规生成的程序大。

<<<<<<<<<<<<<<<<<<<<<<<<<<第三章遇到的点>>>>>>>>>>>>>>>>>>>>>>>

样本：
在确定变量类型之后，如果输入的数据与设定的类型不匹配，那么在这之后C/C++的输入程序都会被跳过；

定义变量时需重点关注；

案例ch03/Programming_Exercises/7homework.cpp(C_test_about_home7.c)，编译运行并输入12.4会得到如下运行结果：
Enter your mileage: 12.4
Enter the amount of fuel consumed by the vehicle: Your car's fuel consumption is inf mpg.

<<<<<<<<<<<<<<<<<<<<<<<<<<第四章遇到的点>>>>>>>>>>>>>>>>>>>>>>>

C语言中，可以输入字符串的函数主要包含三种：scanf()、gets()、gets_s()、fgest()。

其中scanf()由于无法读入空字符而使用率最低；

gets() 函数不执行边界检查，因此该函数极易受到缓冲区溢出攻击。
它无法安全使用（除非程序运行在限制 stdin 上可以出现内容的环​​境中）。
因此，该函数在 C99 标准的第三个勘误中被废弃，并在 C11 标准中完全移除。
fgets() 和 gets_s() 是推荐的替代品。

gets_s()由于本版本编译器
[ember@RockyLinux cpp-primer-plus]$ code --version
1.104.3
385651c938df8a906869babee516bffd0ddb9829
x64
编译时不知道如何引用C11标准，遂改用fgets();

fgets() 由于不会将输入的字符串时输入的换行建替换为'\0'而需要自己改写'\n'


