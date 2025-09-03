# cpp-intro-lab
Introductory lab for C++ development

## Using Docker

In order to complete this lab you should fulfill the following prerequisites:

* Install Docker Desktop in your host machine
* Install Visual Studio Code

## Using Docker

The docker image is specified in the file `.devcontainer/Dockerfile`.

We will be able to use the image from the command line or from the VSCode development environment.

### Using Docker from the command line

To build the image you can just do:

```bash
docker build -f .devcontainer/Dockerfile -t cpp-intro-lab .
```

If you want run an interactive comand line interpreter inside the container you can do:

```bash
docker run --rm -v $(pwd):/workspace -w /workspace -it cpp-intro-lab
```

You will be able to run commands inside the container. Try the following commands:

```bash
g++ --version
clang++ --version
cmake --version
```



