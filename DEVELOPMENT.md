# Final Project - SteadyHand Development Log

**All dates are in 2018.**

#### April 10 - 15
- Setting up project structure, especially the recording and mouse movement functionalities.
- Initially tried to multithread recording mouse movement data, but decided against it, as it seemed to have no performance improvements.
- Using a hidden window to capture raw input from the Windows API, I can record the mouse even when my program is out of focus.
- Test-recorded the AK-47 and M4-A4 spray patterns, loaded the pattern to an object, and successfully simulated the recorded movements, including the delays between each coordinate.
- WIP implementing saving the data to a file to be loaded later, keyboard hotkeys to start/stop recording and save to file.
- TODO: Finish the above and implement multithreading using openFrameworks's ofxThread and start integrating program into an oF project.