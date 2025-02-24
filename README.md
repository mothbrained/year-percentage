Year Percent / Progress Bar

Designed exclusively for Linux, I have no idea how, or if, it works on Windows, and I have no interest in testing.

Customization

You can change the progress bar width by compiling the program with a different value for it. It is very obviously highlighted in the code so im sure there wont be any trouble in finding it.

Installation:

Place the compiled program (or a symlink to it) in a `bin` folder of your choosing.
If you wish to change the command prefix, then rename the file while your at it by appending a new name to the destination.
`mv /home/username/Downloads/program /usr/local/bin/yearprogress`

Reload the Bash or ZSH profile 
`source ~/.bashrc`

You are now done, feel free to run the command to try it out!
`yearprogress`
`We are 14% of the way through 2025
[#######-------------------------------------------]`

If you are having trouble getting it to run, try verifying that your user has permissions to run the file