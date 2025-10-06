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

要使用gdb调试的话，需要使用 g++ -g <file> 生成包含调试信息的程序。新生成的程序比常规生成的程序大
