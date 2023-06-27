#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
  GtkWidget *window;
  GtkWidget *grid;
  GtkWidget *button;
  GtkWidget *entry;

  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Calculator");
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

  grid = gtk_grid_new();
  gtk_container_add(GTK_CONTAINER(window), grid);

  entry = gtk_entry_new();
  gtk_grid_attach(GTK_GRID(grid), entry, 0, 0, 4, 1);

  button = gtk_button_new_with_label("1");
  g_signal_connect(button, "clicked", G_CALLBACK(enter_number), entry);
  gtk_grid_attach(GTK_GRID(grid), button, 0, 1, 1, 1);

  button = gtk_button_new_with_label("2");
  g_signal_connect(button, "clicked", G_CALLBACK(enter_number), entry);
  gtk_grid_attach(GTK_GRID(grid), button, 1, 1, 1, 1);

  // Add the rest of the buttons here...

  gtk_widget_show_all(window);

  gtk_main();

  return 0;
}
