# 项目说明

一个链接关系的示例项目，整个工程有5个项目，模拟不同的项目类型：

- libstatic：基础库的静态编译版本，在lib文件中提供方法
- libshare：基础库的动态编译版本，通过dll提供方法
- appstatic：应用静态库，依赖基础库（静态编译或动态编译）
- appdll：应用动态库，依赖基础库（静态编译或动态编译）
- appexe：依赖于应用静态库/动态库的最终应用。

# 编译及测试

安装```visual studio 2017```，```cmake```，然后在当前目录下运行命令```cmake -G "Visual Studio 15 2017" -B build```，这将在```build```目录中生存```visual studio 2017```的相关文件，打开```library-solution.sln```编译即可。

将生成的```libshare.dll```/```appdll.dll```复制到```appexe.exe```相同的目录中，然后就可以运行```appexe.exe```了