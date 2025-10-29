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
兼容性：属于 C11 标准的 “边界检查接口”，需定义__STDC_WANT_LIB_EXT1__ 1才能启用，且并非所有编译器都支持（如 GCC 不支持，MSVC 支持）。

fgets() 由于不会将输入的字符串时输入的换行建替换为'\0'而需要自己改写'\n'

    如果给cout提供一个指针，它将打印地址。但如果指针的类型为char *，则cout将显示指向的字符串。如果要显示的是字符串的
地址，则必须将这种指针强制转换为另一种指针类型，如int *（上面的代码就是这样做的）。因此，ps显示为字符串“fox”，而（int *）ps显示
为该字符串的地址。注意，将animal赋给ps并不会复制字符串，而只是复制地址。这样，这两个指针将指向相同的内存单元和字符串。

    自动存储
    在函数内部定义的常规变量使用自动存储空间，被称为自动变量（automatic variable），这意味着它们在所属的函数被调用时自动产
生，在该函数结束时消亡。自动变量通常存储在栈中。这意味着执行代码块时，其中的变量将依次加入到栈中，而在离开代码块时，将按相反的
顺序释放这些变量，这被称为后进先出（LIFO）。因此，在程序执行过程中，栈将不断地增大和缩小。

    静态存储
    静态存储是整个程序执行期间都存在的存储方式。使变量成为静态的方式有两种：一种是在函数外面定义它；另一种是在声明变量时使用
关键字static：

    动态存储
    new和delete运算符提供了一种比自动变量和静态变量更灵活的方法。它们管理了一个内存池，这在C++中被称为自由存储空间（free
store）或堆（heap）。该内存池同用于静态变量和自动变量的内存是分开的。

<<<<<<<<<<<<<<<<<<<<<<<<<<第五章遇到的点>>>>>>>>>>>>>>>>>>>>>>>

    strcmp() 函数对比如果字符串不相等，则该语句的值为1（true），如果字符串相等，则该语句的值为0（false）。
但使用strcmp（word，"mate"）本身将如何呢？如果字符串不相等，则它的值为非零（true）；如果字符串相等，
则它的值为零（false）。实际上，如果字符串不同，该返回true，否则返回false。
因此，可以只用这个函数，而不是整个关系表达式。这样得到的结果将相同，还可以少输入几个字符。另外，C和C++程序员传统
上就是用这种方式使用strcmp( )的。

