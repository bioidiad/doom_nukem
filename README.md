This is a doom-like 3D-engine (2.5 actually) with level editor.

Based on SDL2 library with using no renderer or other standart SDL2 functions - only putting 1 pixel to screen to draw. Most of other functions are self-written 
generics.

Running on MacOS, Linux
Dependencies: SDL2, SDL2_ttf, SDL2_mixer

This project was written with a group of 4 students with a purpose to learn most basic graphical tricks.

Application gives you an ability to draw sector-based map in 2d editor, apply textures, add doors and buttons in real-time 3D editor. 
Shading effects, gravity and speed settings will make you enjoy map exploring.
here is some examples:

![HALL](https://github.com/bioidiad/doom_nukem/raw/master/editor.png)
UI is not very friendly, but who said that it should be? ha-ha 

![HALL](https://github.com/bioidiad/doom_nukem/raw/master/room.png)
![HALL](https://github.com/bioidiad/doom_nukem/raw/master/hall.png)

Controls:
WASD	-	walk directions
V/C		-	fly mode
shift	-	run
ctrl	-	sit
X			- lie
space	- jump
M			- minimap mode
F			- interactions with objects
L			- light mode

Only in player mode: (run ./doom_nukem -g map_name)
G			- remove button
R			- install button

Only in editor mode: (run ./doom_nukem map_name)
E			- switching 2d/3d mode
G			- put graffity. after this you can apply texture with numbers
                secondary will put picture on the wall
                double G will put the button object on the wall
`			0 - floor, 1 - ceiling, 2 - walls, 3 - bottom line, 4 - top line
1-9			choose texture.
O-P			change floor height
J-K			change ceil height
H           set/remove door. 
Backspace	- removes all graffity in current sector

You can use graffity as buttons. When you placing graffity by the left/right side of door, it will control it's opening.
Player can set/remove only buttons graffity.

Map editor

pure LMB - sector select
pure RMB без режимов - sector to door convertion (player cannot be inside)
mouse wheel button - set final sector

del/Backspace - remove selected sector
tab - save map to a file
Е - anter 3d mode
arrows - map mooving
