#include <pebble.h>
#include "home_page.h"
    
void handle_init(void) 
{
    show_home_page();
}

void handle_deinit(void) 
{
    hide_home_page();
}

int main(void) {
  handle_init();
  app_event_loop();
  handle_deinit();
}