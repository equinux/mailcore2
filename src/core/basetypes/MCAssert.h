#ifndef MAILCORE_MCASSERT_H

#define MAILCORE_MCASSERT_H

#define MCAssert(cond) MCAssertInternal(__FILE__, __LINE__, cond, #cond)

#ifdef __cplusplus
extern "C" {
#endif	
    MAILCORE_EXPORT
	void MCAssertInternal(const char * filename, unsigned int line, int cond, const char * condString);
#ifdef __cplusplus
}
#endif

#endif
