volatile int tohost = 0;

int
main(int argc, char* argv[])
{
  int x = 1;
  int y = 2;
  int z = x + y;
  return z;
}

void _start()
{
  main(0, 0);
  tohost = 1;
}
