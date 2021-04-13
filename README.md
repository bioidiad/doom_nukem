This is a doom-like 3D-engine (2.5 actually) with level editor.

Based on SDL2 library with using no renderer or other standart SDL2 functions - only putting 1 pixel to screen to draw. Most of other functions are self-written 
generics.</br>

Running on MacOS, Linux</br>
Dependencies: SDL2, SDL2_ttf, SDL2_image</br>
</br>
This project was written with a group of 4 students with a purpose to learn most basic graphical tricks.</br>
</br>
Application gives you an ability to draw sector-based map in 2d editor, apply textures, add doors and buttons in real-time 3D editor.</br>
Shading effects, gravity and speed settings will make you enjoy map exploring.</br>
here is some examples:

![HALL](https://github.com/bioidiad/doom_nukem/raw/master/editor.png)
UI is not very friendly, but who said that it should be? ha-ha 

![HALL](https://github.com/bioidiad/doom_nukem/raw/master/room.png)
![HALL](https://github.com/bioidiad/doom_nukem/raw/master/hall.png)

Controls:</br>
WASD	-	walk directions</br>
V/C		-	fly mode</br>
shift	-	run</br>
ctrl	-	sit</br>
X			- lie</br>
space	- jump</br>
M			- minimap mode</br>
F			- interactions with objects</br>
L			- light mode</br>
</br>
Only in player mode: (run ./doom_nukem -g map_name)</br>
G			- remove button</br>
R			- install button</br>
</br>
Only in editor mode: (run ./doom_nukem map_name)</br>
E			- switching 2d/3d mode</br>
G			- put graffity. after this you can apply texture with numbers</br>
              secondary will put picture on the wall</br>
              double G will put the button object on the wall</br>
\`			0 - floor, 1 - ceiling, 2 - walls, 3 - bottom line, 4 - top line</br>
1-9			choose texture.</br>
O-P			change floor height</br>
J-K			change ceil height</br>
H           set/remove door.</br>
Backspace	- removes all graffity in current sector</br>
</br>
You can use graffity as buttons. When you placing graffity by the left/right side of door, it will control it's opening.</br>
Player can set/remove only buttons graffity.</br>
</br>
Map editor</br>
</br>
LMB - sector select</br>
RMB - sector to door convertion (player cannot be inside)</br>
mouse wheel button - set final sector</br>
</br>
del/Backspace - remove selected sector</br>
tab - save map to a file</br>
Е - enter 3d mode</br>
arrows - map mooving</br>
