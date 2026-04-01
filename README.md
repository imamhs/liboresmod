# liboresmod
Resolution hook for Quake II engine tested with Soldier of Fortune linux version. This will automatically set gl_mode 9 mode (1600x1200) to desktop resolution on Linux using X server. 

Apply the hook for a game using:

LD_PRELOAD=./liboresmod.so game-executable

For example, for Soldier of Fortune Linux version having desktop resolution of 1920x1080; after coping the liboresmod.so to game folder run the game using following command:

LD_PRELOAD=./liboresmod.so ./sof

After than, in the game graphics settings set the resolution to 1600x1200 and restart the game using the above command to have game resolution match desktop resolution of 1920x1080.

Cheers,
Imam
