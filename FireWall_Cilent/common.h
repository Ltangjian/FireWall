#include <windows.h>
#include <stdio.h>
#include <iostream.h>
#include <winioctl.h>//		   使用CTL_CODE必须加入winioctl.h

#ifndef CTL_CODE
#pragma message("CTL_CODE undefined. Include winioctl.h or wdm.h")
#endif


typedef struct _ipaddr
{
	int field1;
	int field2;
	int field3;
	int field4;
}ipaddr;

typedef struct _ParamConfig
{
	char protocol;
	ipaddr src_address;
	ipaddr dst_address;
	int action;
	int alltcp;
	int alludp;
	int allicmp;

}ParamConfig;


#define IOCTL_PTUSERIO_READY CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)// added by derek 
#define IOCTL_PTUSERIO_ADDCONFIG CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)// added by derek 


#define NORULE	0
#define TCP		1
#define	UDP		2
#define ICMP	3

#define	PASS	0
#define DENY	1

#define PASSALL 0
#define	DENYALLTCP 1
#define	DENYALLUDP 1 
#define DENYALLICMP 1