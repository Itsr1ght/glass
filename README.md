# Glass

A Simple OpenGL Toy Repo

The project based on [learnopengl](https://learnopengl.com)

## Quick Start

<h3>Linux</h3>

<h4>Arch Based Distribution</h4>

install the necessary package using pacman:

~~~
sudo pacman -S base-devel git python bazel 
~~~

then enter command:

~~~
git clone https://github.com/Itsr1ght/glass.git
cd glass
bazel build //:glass
bazel run //:glass.
~~~


<h3>Windows</h3>

1) Make sure [git for windows](https://gitforwindows.org/) is installed and in your path.
2) Make sure [python](https://www.python.org/) is installed in your system
3) Make sure [bazel buildifier](https://github.com/bazelbuild/buildtools/releases) is installed in your path if you plan to use the vscode bazel extension.
4) Clone this repository and perform an initial build:

~~~
git clone https://github.com/Itsr1ght/glass.git
cd glass
install_bazel.bat
bazelisk.exe build //:glass
bazelisk.exe run //:glass
~~~
