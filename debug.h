#ifndef __DEBUG_H__
#define __DEBUG_H__

#define DEBUG

#ifdef DEBUG 

#define DBG(...) printf("" __VA_ARGS__)

#define DBGREF(fmt, ...)                            \
    do {                                            \
        printf("[DBG] %s %s, line:%d\r\n",          \
               __func__, __FILE__, __LINE__);       \
        printf(fmt, ##__VA_ARGS__);                 \
    } while (0)

#else 
#define DBG(...) 
#define DBGREF(...) 
#endif 

#endif
