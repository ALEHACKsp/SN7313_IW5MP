#pragma once

//StandartHeaders
#include <windows.h>
#include <windef.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <cstdlib>
#include <stdarg.h>
#include <Psapi.h>
#include <iostream>
#include <ctime>
#include <sstream>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
#include <d3d.h>
//


//MyHeaders
#include "Offsets.h"
#include "Structs.h"
#include "Typedefs.h"
#include "Drawing.h"


#define ScaleRadarX(x)(x * (640.0f / RefDef->Width ) )
#define ScaleRadarY(y)(y * (480.0f / RefDef->Height) )







