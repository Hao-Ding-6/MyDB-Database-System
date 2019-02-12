#ifndef PAGE_C
#define PAGE_C

#include "MyDB_BufferManager.h"
#include "MyDB_Page.h"
#include "MyDB_Table.h"

void *MyDB_Page :: getBytes (MyDB_PagePtr me) {
	parent.access (me);	
	return bytes;
}

void MyDB_Page :: wroteBytes () {
	isDirty = true;
}

MyDB_Page :: ~MyDB_Page () {
	pthread_mutex_destroy (&myMutex);
}

MyDB_Page :: MyDB_Page (MyDB_TablePtr myTableIn, size_t iin, MyDB_BufferManager &parentIn) : 
	parent (parentIn), myTable (myTableIn), pos (iin) { 
	bytes = nullptr;
	isDirty = false;	
	pthread_mutex_init (&myMutex, nullptr);
	refCount = 0;
	timeTick = -1;
}

void MyDB_Page :: killpage (MyDB_PagePtr me) {
	Lock temp (parent.getLock ());
	parent.killPage (me);
}

MyDB_BufferManager &MyDB_Page :: getParent () {
	return parent;	
}

#endif

