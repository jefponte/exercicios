#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
/*
Compilar usando: 

gcc base.c -o base `pkg-config --cflags --libs gtk+-2.0`

*/

int main(int argc, char **argv){
	
	GtkWidget *janela;
	gtk_init(&argc, &argv);
	janela = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(janela), "Ola");
	gtk_widget_show(janela);
	gtk_main();

	return 0;
}
