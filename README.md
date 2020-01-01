# Intro

This repository bundles the RISC-V toolchain together with whisper ISS into a docker image, and allows quick compilation/running of RISC-V C/assembley

# Example 

1. put some code in a samples directory (or clone this repository)
1. run the commands below

```
docker pull avidane/riscv-whisper
docker run -v $(pwd)/samples:/samples -ti avidane/riscv-whisper "riscv64-unknown-elf-gcc -mabi=lp64 -march=rv64imc -nostdlib -g -o samples/test samples/test.c"
docker run -v $(pwd)/samples:/samples -ti avidane/riscv-whisper "whisper --verbose samples/test --logfile samples/trace.log --abinames --setreg x2=0xff"
```
