## Year Percent / Progress Bar

Terminal command for Linux that outputs an ascii progress bar of how long there is left in the year.<br>
Inspired by <a href="https://x.com/ProgressBar202_">this</a> Twitter account.

It should work on Windows, but I couldn't tell you where to start if you wanted to install it as a terminal command.

## Customization

You can change the progress bar width by recompiling it with a different value. I made sure to highlight the location of this in the code, so it should be easy to find.

Codebase is short enough to fit on a post-it note, so making any further adjustments should be simple enough.<br>
The license on this code permits any use you see fit, so go ham.

## Installation:

Place the compiled program (or a symlink to it) in your `usr/bin` folder (or `bin`, depending on your flavor of linux). <br>

If you wish to change the command prefix, then rename the file by appending a different name at the destination.<br>
For example: `mv ~/Downloads/program /usr/local/bin/yearprogress`<br>
Its important to note that the command prefix is *literally* the name of the file.

Reload your Bash or ZSH profile<br>
`source ~/.bashrc` or `source ~/.zshrc`

Run the command to verify it works<br>
`[moth@archlinux ~]$ yearprogress`<br>
`We are 14% of the way through 2025`<br>
`[#######-------------------------------------------]`<br>

If you're having trouble getting it to run, verify that your user has permissions to run the file. Otherwise, you may have placed it in the wrong location, or aren't typing in what you named the program.
