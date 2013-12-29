/*
 * Copyright 2013 33cube, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

NSData* TranscodeJPEG2000ToJPEG(NSData* jp2Data);
NSData* BuildJPEGFile(NSData* jpgData, NSData* commentData, NSData* exifData, NSData* irbData, NSData* xmpData, NSData* iccData);

#ifdef __cplusplus
}
#endif
