/*
 * VGMTrans (c) 2002-2019
 * Licensed under the zlib license,
 * refer to the included LICENSE.txt file
 */
 #include "pch.h"

#include "Scanner.h"
#include "Root.h"

VGMScanner::VGMScanner() {
}

VGMScanner::~VGMScanner(void) {
}

bool VGMScanner::Init() {
  //if (!UseExtension())
  //	return false;
  return true;
}

void VGMScanner::InitiateScan(RawFile *file, void *offset) {
  pRoot->UI_SetScanInfo();
  this->Scan(file, offset);
}


//void VGMScanner::Scan(RawFile* file)
//{
//	return;
//}