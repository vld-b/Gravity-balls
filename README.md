# Gravity-balls
A simulator that's supposed to simulate falling balls. Made using SDL2.

## Compile guide

1. Make sure you have Visual Studio 2022 installed. [Visual Studio 2022](https://visualstudio.microsoft.com/vs/)
2. Download SDL2 2.28.4 [SDL2](https://github.com/libsdl-org/SDL/releases/tag/release-2.28.4). Make sure to download the version that ends in -VC.zip, as that's the one for Visual Studio (2022).
3. Download SDL2_image 2.6.3. [SDL2_image](https://github.com/libsdl-org/SDL_image/releases/tag/release-2.6.3) Make sure the file also ends in -VC.zip, as that's the one for Visual Studio (2022).
4. If you haven't already, download the GitHub project (preferably as a zip file) and unzip it somewhere you'll have easy access to or remember (e.g. Desktop).
5. Unzip SDL2 and SDL2_image and put the folders starting with SDL2 and SDL2_image respectively in the root directory (where the project files .sln, etc. are located).
7. Open the Visual Studio solution file .sln.
8. On the top bar go to Build > Build solution (should be one of the first options, if not the first). Wait for the process to finish. You can track the progress on the bottom of the screen.
9. After the compilation process is done, you can close Visual Studio 2022.
10. Go into the "SDL2" folder, then there into "lib", then there into "x64" and copy the .dll to Path/To/The/Project/x64/Release.
11. Go into the "SDL2_image" folder, then there into "lib", then there into "x64" and copy the .dll to Path/To/The/Project/x64/Release.
12. Lastly, copy the "Assets" folder (found in the root directory of the project) into x64/Release as well.
13. (I think) That's it! Run the .exe file in the x64/Release directory and watch what happens!
