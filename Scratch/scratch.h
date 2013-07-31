//
//  scratch.h
//  Scratch
//
//  Created by Kim Hunter on 31/07/13.
//  Copyright (c) 2013 Kim Hunter. All rights reserved.
//

#ifndef Scratch_scratch_h
#define Scratch_scratch_h


#define LOGV(V) NSLog(@"%s = %@", #V, (V))
#define LOGD(D) NSLog(@"%s = %ld", #D, (long)(D))
#define LOGF(F) NSLog(@"%s = %lf", #F, (F))
#define LOGR(R) NSLog(@"%s = %@", #R, NSStringFromRect(R))
#define HERE()  NSLog(@"%s (Line:%d)", __PRETTY_FUNCTION__, __LINE__)


#endif
