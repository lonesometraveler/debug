#ifndef __DEBUG_H__
#define __DEBUG_H__

#define DEBUG

#ifdef DEBUG 

#define DBG(...) debug("" __VA_ARGS__)

#define DBGREF(fmt, ...)                            \
    do {                                            \
        debug("[DBG] %s %s, line:%d\r\n",          \
               __func__, __FILE__, __LINE__);       \
        debug(fmt, ##__VA_ARGS__);                 \
    } while (0)

#else 
#define DBG(...) 
#define DBGREF(...) 
#endif 

#endif
