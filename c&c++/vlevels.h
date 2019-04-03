/*Vanir DNSX permissions*/
#define ACCESS 0
#define VERIFY 1
#define MERGE  2 
#define PRIVATE 3
#define PUBLIC 4
#define MEMORY 5


enum PermissionType{
	ACCESS,
	VERIFY,
	MERGE,
	PRIVATE,
	PUBLIC,
	MEMORY
	
};


struct PermissionRequest{
	
	  uint64_t old_addr;
      uint64_t size;
	  uint64_t date;
	  uint64_t name;
	  uint64_t new_addr;
	
};