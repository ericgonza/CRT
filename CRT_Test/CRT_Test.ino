#include <TVout.h>
//2nd test
 
TVout TV;
 
void setup () {
  TV.start_render( _NTSC );
}
 
void loop () {
  TV.clear_screen ();
  TV.print_str (0, 0, "All your TV");
  TV.print_str (0, 10, "are belong");
  TV.print_str (0, 20, "to us!!!");
 
  TV.delay (60);
}

//2nd test 4
//git kraken
