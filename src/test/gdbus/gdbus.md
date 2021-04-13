<h1  align="center">gdbus简介</h1>

<h2>一、简介</h2>
<pre>
D-Bus是一种高级的进程间通信机制（IPC：interprocess communication）

(1)支持dbus的系统都有两个标准的消息总线：系统总线和会话总线。
   系统总线用于系统与应用的通信,会话总线用于应用之间的通信。
   系统总线与会话总线两者之前不能互相通信。

(2)目前基于d-bus技术的几种编程框架有：dbus-glib、GDbus、QtDbus、dbus-python。

(3)链接
官网参考链接1：https://www.freedesktop.org/wiki/Software/dbus/
下载链接1：https://www.freedesktop.org/wiki/Software/DbusReleaseArchive/
dbus-glib：https://dbus.freedesktop.org/releases/dbus-glib/

(4)缺点
   1、 接受方法调用端、消息接收端等程序需要非阻塞式（阻塞式的无法多线程DBUS通讯）

(5)dbus-glib：建议使用glib-2.26.1以上版本
</pre>

<h2>二、D-Bus代码和文档生成器</h2>
<pre>
（1）dbus-codegen用于为一个或多个D-Bus接口生成代码或文档。
（2）接口文件：服务端和客户端用来通信的媒介。其是一个xml文件。
（3）参考glib-2.32.1版本（glib-2.32.1\docs\reference\gio\ch30s05.html）
官方文档：
https://www.freedesktop.org/software/gstreamer-sdk/data/docs/latest/gio/
ch30s05.html

下载文档：
https://download.gnome.org/sources/glib/
</pre>