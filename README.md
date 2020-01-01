docker run -v $(pwd)/samples:/samples -ti avidane/riscv-whisper "riscv64-unknown-elf-gcc -mabi=lp64 -march=rv64imc -nostdlib -g -o samples/test samples/test.c"
docker run -v $(pwd)/samples:/samples -ti avidane/riscv-whisper "whisper --verbose samples/test --logfile samples/trace.log --abinames --setreg x2=0xff"
