/*
 * Part of WCM Commander
 * https://github.com/corporateshark/WCMCommander
 * wcm@linderdaum.com
 */

#pragma once

#ifndef _WIN32

#include <string>

#include "wal.h"

using namespace wal;

class Shell
{
	pid_t pid;
	int in, out;

	void Stop();
	void Run();
	std::string slaveName;
public:
	Shell( const char* slave );

	pid_t Exec( const char* cmd );
	int Wait( pid_t pid, int* pStatus );
	int CD( const char* path );

	~Shell();
};

#endif
