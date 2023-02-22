# Glass

A Simple OpenGL Toy Repo

## Quick Start

1) Make sure [bazelisk](https://github.com/bazelbuild/bazelisk/releases) is installed and in your path (hint: name the binary bazel.exe). You may also need to install [Microsoft's C++ redistributable](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist) as well.
2) Make sure [git for windows](https://gitforwindows.org/) is installed and in your path.
3) Make sure [python](https://www.python.org/) is installed in your system
4) Make sure [bazel buildifier](https://github.com/bazelbuild/buildtools/releases) is installed in your path if you plan to use the vscode bazel extension.
5) Clone this repository and perform an initial build:

~~~

git clone https://github.com/Itsr1ght/glass.git
cd glass
bazel build //src:glass
bazel run //src:glass

~~~
