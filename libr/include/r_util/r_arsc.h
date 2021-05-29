/* radare - LGPL - Copyright 2021 - keegan */

#ifndef R_ARSC_H
#define R_ARSC_H

#ifdef __cplusplus
extern "C" {
#endif

R_API char *r_arsc_decode(const ut8* buffer, const ut64 size);

#ifdef __cplusplus
}
#endif

#endif //  R_ARSC_H
