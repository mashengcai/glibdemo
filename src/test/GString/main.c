#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <glib.h>
#include <glib/gprintf.h>
/*https://blog.csdn.net/wangwenwen/article/details/7479790*/
/*GLib Reference Manual :  https://tool.oschina.net/apidocs/apidoc?api=glib*/
/*
除了使用 gchar *进行字符串处理以外,GLib还定义了一种新的数据类型: GString。
它类似于标准 C的字符串类型,但是 GString能够自动增长。它的字符串数据是以 NULL结尾的。
*/
int main(void)
{
      g_printf("==============function[%s]line[%d]==============\n\n",__FUNCTION__,__LINE__);
	GString *ptr = g_string_new("abcdABCD");
      g_print("[1]len = [%d], allocated_len = [%d]  string = [%s]\n", ptr->len, ptr->allocated_len, ptr->str);
      gchar*  gszRet=g_string_free(ptr, FALSE);  
      g_print("[2]len = [%d], allocated_len = [%d]  string = [%s]  gszRet=[%s]\n", ptr->len, ptr->allocated_len, ptr->str,gszRet);
      gszRet=g_string_free(ptr, TRUE);  
      g_print("[3]len = [%d], allocated_len = [%d]  string = [%s]  gszRet=[%s]\n", ptr->len, ptr->allocated_len, ptr->str,gszRet);
    
      return 0;

}
