#include "Application.h"

#include <memory>

#include "Stream.h"
#include "StreamManager.h"

namespace vmc
{
    StreamManager *streamManager;

    void start()
    {
        streamManager = new StreamManager();
    }
}