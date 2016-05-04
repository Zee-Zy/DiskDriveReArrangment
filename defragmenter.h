// Author Sean Davis
#ifndef defragmenterH
#define defragmenterH

#include <iostream>
#include <stdlib.h>  // for atoi

class DiskDrive;
class DiskBlock;
class Defragmenter
{
public:
  Defragmenter(DiskDrive *diskDrive);
  void arrange(DiskDrive *diskDrive, int& currentBlock, int& blockID, DiskBlock *diskBlock);
  void moveBlockDown(DiskDrive *diskDrive, int& currentBlock, int& empty_spot);

}; // class Defragmenter

class DiskBlock_Number // object store as ex (2,4)
{
  public:
    DiskBlock_Number(int o, int c) // constructor
      {
  	  original = o;
  	  current = c;
  	}//constructor
  	DiskBlock_Number() // default constructor
  	{
  	  original = 0;
  	  current = 0;
  	}//constructor
  	int original; // first number in hash table object
    int current; // second number in hash table object
  	DiskBlock_Number& operator=(const DiskBlock_Number& d)
  	{
  	  original = d.original;
  	  current = d.current;
  	  return *this;
  	}
}; // class DiskBlock_Number

#endif
